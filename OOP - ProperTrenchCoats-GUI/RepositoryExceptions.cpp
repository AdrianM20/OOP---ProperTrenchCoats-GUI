#include "RepositoryExceptions.h"

FileException::FileException(const std::string & msg)
{
}

const char * FileException::what()
{
	return message.c_str();
}

RepositoryException::RepositoryException()
{
}

RepositoryException::RepositoryException(const std::string & msg)
{
	this->message = msg;
}

const char * RepositoryException::what()
{
	return this->message.c_str();
}

const char * DuplicateCoatException::what()
{
	return "There is another coat with the same ID!";
}
