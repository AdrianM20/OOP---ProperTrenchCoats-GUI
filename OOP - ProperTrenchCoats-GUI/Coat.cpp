#include "Coat.h"
#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <vector>
#include <Utils.h>

using namespace std;

Coat::Coat() : ID(""), size(0), colour(""), price(0), quantity(0), link("") {}

Coat::Coat(const std::string & ID, const int & size, const std::string & colour, const double & price, const int & quantity, const std::string & link)
{
	this->ID = ID;
	this->size = size;
	this->colour = colour;
	this->price = price;
	this->quantity = quantity;
	this->link = link;
}

void Coat::show()
{
	// ShellExecute(NULL, NULL, "chrome.exe", this->getLink().c_str(), NULL, SW_SHOWMAXIMIZED);
}

bool Coat::operator==(const Coat & other) const
{
	if (this->ID != other.ID)
		return false;
	if (this->size != other.size)
		return false;
	if (this->colour != other.colour)
		return false;
	if (this->price != other.price)
		return false;
	if (this->quantity != other.quantity)
		return false;
	if (this->link != other.link)
		return false;
	return true;
}

istream & operator >> (std::istream & is, Coat & c)
{
	string line;
	getline(is, line);

	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 6)
		return is;

	c.ID = tokens[0];
	c.size = stoi(tokens[1]);
	c.colour = tokens[2];
	c.price = stod(tokens[3]);
	c.quantity = stoi(tokens[4]);
	c.link = tokens[5];

	return is;
}

ostream & operator<<(std::ostream & os, Coat & c)
{
	os << c.ID << "," << to_string(c.size) << "," << c.colour << "," << to_string(c.price) << "," << to_string(c.quantity) << "," << c.link << "\n";
	return os;
}
