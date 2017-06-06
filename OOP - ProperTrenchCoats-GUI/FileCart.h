#pragma once
#include "ShoppingCart.h"

class FileCart : public ShoppingCart
{
protected:
	std::string filename;

public:
	FileCart();
	virtual ~FileCart() {}

	void setFilename(const std::string& filename);
	virtual void writeToFile() = 0;
	virtual void displayCart() const = 0;
};