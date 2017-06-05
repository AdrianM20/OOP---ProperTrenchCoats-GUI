#pragma once
#include <string>
#include "Coat.h"
#include <vector>

class CoatException
{
private:
	std::vector<std::string> errors;


public:
	CoatException(std::vector<std::string> _errors);
	std::vector<std::string> getErrors() const;
};

class CoatValidator
{
public:
	CoatValidator() {}
	static void validate(const Coat& c);
};