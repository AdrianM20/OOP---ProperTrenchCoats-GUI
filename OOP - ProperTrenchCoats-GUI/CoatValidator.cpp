#include "CoatValidator.h"

using namespace std;

CoatException::CoatException(std::vector<std::string> _errors)
{
	this->errors = _errors;
}

std::vector<std::string> CoatException::getErrors() const
{
	return this->errors;
}

void CoatValidator::validate(const Coat & c)
{
	vector<string> errors;
	if (c.getID().length() != 5)
		errors.push_back("Coat ID must be 5 characters long!");
	if (c.getSize() > 60 || c.getSize() < 35)
		errors.push_back("Size must be between 35 and 60!");
	if (c.getColour().length() == 0)
		errors.push_back("The colour field cannot be empty!");
	if (c.getPrice() <= 0)
		errors.push_back("Price must be greater than 0!");
	if (c.getQuantity() < 1)
		errors.push_back("Quantity must be at least 1!");
	if (c.getLink().length() == 0)
		errors.push_back("A link to the coat image must be given");

	// search for http at the beginning of the link
	int posHttp = c.getLink().find("http");
	if (posHttp != 0)
		errors.push_back("The link must start with \"http\"!");

	if (errors.size() > 0)
		throw CoatException(errors);
}
