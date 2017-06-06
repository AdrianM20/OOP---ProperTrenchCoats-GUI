#pragma once
#include "FileCart.h"
#include <string>

class CSVCart : public FileCart
{

public:
	/*
		Writes the shopping cart to file.
		Throws: FileException - if  it cannot write
	*/
	void writeToFile() override;

	/*
		Displays the playlist using Microsoft Excel
	*/
	void displayCart() const override;
};