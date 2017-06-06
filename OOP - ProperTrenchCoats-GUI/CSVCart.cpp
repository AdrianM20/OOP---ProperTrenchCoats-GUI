#include "CSVCart.h"
#include <fstream>
#include <Windows.h>
#include <RepositoryExceptions.h>

using namespace std;

void CSVCart::writeToFile()
{
	ofstream f(this->filename);

	if (!f.is_open())
		throw FileException("The CSVCart file could not be opened!");

	for (auto c : this->cart)
		f << c;

	f.close();
}

void CSVCart::displayCart() const
{
	string aux = "\"" + this->filename + "\""; //if the path contains spaces, it must be put inside quotations
	ShellExecuteA(NULL, NULL, "notepad.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
}
