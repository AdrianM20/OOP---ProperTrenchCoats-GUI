#include "Repository.h"
#include <string>
#include <sstream>
#include <fstream>
#include "Validators.h"
#include <exception>

using namespace std;

Repository::Repository(const std::string& filename,CoatValidator cv)
{
	this->filename = filename;
	this->validator = cv;
	this->readFromFile();
}

void Repository::addNoCheck(const Coat& c)
{
	this->coats.push_back(c);
}

void Repository::addCoat(const Coat & c)
{
	if (this->findByID(c.getID()).getID() != "")
		throw DuplicateCoatException();
	this->validator.validate(c);
	this->coats.push_back(c);
	this->writeToFile();
}

void Repository::removeCoatByID(const std::string & ID)
{
	Coat checkCoat = findByID(ID);
	if (checkCoat.getID().length() == 0)
		throw "Coat does now exist. Nothig was deleted.";
	if (checkCoat.getQuantity() > 0) {
		char* ex;
		ex = "Cannot delete this coat. There is at least one left in stock.";
		throw ex;
	}

	for (int i = 0; i < this->coats.size(); i++)
		if (this->coats[i] == checkCoat) {
			this->coats.erase(this->coats.begin() + i);
			break;
		}
	this->writeToFile();
}

void Repository::sellCoatByID(const std::string & ID)
{
	Coat checkCoat = findByID(ID);
	Coat newCoat{ checkCoat.getID(),checkCoat.getSize(), checkCoat.getColour(),checkCoat.getPrice(), checkCoat.getQuantity() - 1,checkCoat.getLink() };
	int i;
	for (i = 0; i < this->coats.size(); i++) {
		if (this->coats[i] == checkCoat) {
			this->coats.erase(this->coats.begin() + i);
			break;
		}
	}
	this->coats.insert(this->coats.begin() + i, newCoat);
	this->writeToFile();
}

void Repository::updateCoat(const std::string & ID, const Coat & c)
{
	Coat checkCoat = findByID(ID);
	if (checkCoat.getID().length() == 0)
		throw "Coat does not exist. No data was updated.";
	this->validator.validate(c);
	int i;
	for (i = 0; i < this->coats.size(); i++)
		if (this->coats[i] == checkCoat) {
			this->coats.erase(this->coats.begin() + i);
			break;
		}
	this->coats.insert(this->coats.begin() + i, c);
	this->writeToFile();
}

Coat Repository::findByID(const std::string& ID)
{
	for (int i = 0; i < this->coats.size(); i++) {
		Coat coat = coats[i];
		if (coat.getID() == ID)
			return coat;
	}
	return Coat{};
}

std::vector<Coat> Repository::getCoatsbySize(const int & size)
{
	std::vector<Coat> coats;
	for (int i = 0; i < this->coats.size(); i++) {
		Coat c = this->coats[i];
		if (c.getSize() == size)
			coats.push_back(c);
	}
	return coats;
}

void Repository::readFromFile()
{
	ifstream file(this->filename);

	if (!file.is_open())
		throw FileException("The file could not be opened!");

	Coat c;
	while (file >> c)
		this->coats.push_back(c);

	file.close();

}

void Repository::writeToFile()
{
	ofstream file(this->filename);
	if (!file.is_open())
		throw FileException("File could not be opened!");

	for (auto c : this->coats)
		file << c;

	file.close();
}
