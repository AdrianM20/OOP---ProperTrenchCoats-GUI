#include "FileCart.h"

FileCart::FileCart() : ShoppingCart{}, filename{ "" }
{
}

void FileCart::setFilename(const std::string & filename)
{
	this->filename = filename;
}

