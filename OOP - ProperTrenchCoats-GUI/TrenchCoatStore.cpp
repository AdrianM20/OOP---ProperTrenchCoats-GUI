#include "TrenchCoatStore.h"
#include <QMessageBox>
#include "ProperTrenchCoatsGUI.h"
#include "CartGUI.hpp"
#include <QDebug>
#include <exception>
#include <sstream>
#include <iomanip>

using namespace std;

TrenchCoatStore::TrenchCoatStore(Controller& c, QWidget *parent)
	: QWidget(parent), ctrl {c}
{
	ui.setupUi(this);
	this->connectSignalsandSlots();
}

TrenchCoatStore::~TrenchCoatStore()
{

}

	// SIGNALS AND SLOTS
void TrenchCoatStore::connectSignalsandSlots()
{
	// connect admin button to open admin panel
	connect(this->ui.adminButton, &QPushButton::clicked, this, &TrenchCoatStore::openAdminButtonHandler);

	// connect start shopping button
	connect(this->ui.startShoppingButton, &QPushButton::clicked, this, &TrenchCoatStore::startShoppingButtonHandler);

	// connect next coat button
	connect(this->ui.nextProductButton, &QPushButton::clicked, this, &TrenchCoatStore::nextProductButtonHandler);

	// connect add to cart button
	connect(this->ui.addToCartButton, &QPushButton::clicked, this, &TrenchCoatStore::addToCartButtonHandler);

	// connect open cart button
	connect(this->ui.openCartButton, &QPushButton::clicked, this, &TrenchCoatStore::openCartButtonHandler);

	// connect save cart button
	connect(this->ui.saveCartButton, &QPushButton::clicked, this, &TrenchCoatStore::saveCartToFileButtonHandler);
}

bool TrenchCoatStore::is_number(const std::string & s)
{
	return std::all_of(s.begin(), s.end(), ::isdigit);
}

void TrenchCoatStore::clearFields()
{
	this->ui.clientSizeTextBox->clear();
	this->ui.sizeTextBox->clear();
	this->ui.colourTextBox->clear();
	this->ui.priceTextBox->clear();
	this->ui.availabiilityTextBox->clear();
	this->ui.totalCostTextBox->clear();
}

void TrenchCoatStore::openAdminButtonHandler()
{
	try {
		ProperTrenchCoatsGUI *adminWindow = new ProperTrenchCoatsGUI{ this->ctrl,this };
		adminWindow->show();
	}
	catch (exception ec) {
		QMessageBox::warning(this, "Unknown Exception Thrown", ec.what(), QMessageBox::Close);
	}
}

void TrenchCoatStore::startShoppingButtonHandler()
{
	this->setClientSize();
	this->clearFields();
	if (this->ctrl.getCart()->noProducts()) {
		QMessageBox::warning(this, "No products error", "No coats available!", QMessageBox::Close);
	}
	else {
		this->ctrl.startShopping();
		Coat c = this->ctrl.getCart()->getCurrentCoat();
		this->ui.sizeTextBox->insert(QString::fromStdString(to_string(c.getSize())));
		this->ui.colourTextBox->insert(QString::fromStdString(c.getColour()));
		
		// price with only 2 decimals
		double price = c.getPrice();
		stringstream stream;
		stream << fixed << setprecision(2) << price;
		string str_price = stream.str();
		this->ui.priceTextBox->insert(QString::fromStdString(str_price));
		// this->ui.priceTextBox->insert(QString::fromStdString(std::to_string(c.getPrice())));
		
		std::string availability;
		if (c.getQuantity() > 3)
			availability = "In Stock";
		else if (c.getQuantity() <= 3 && c.getQuantity() > 0)
			availability = "Limited Stock";
		else availability = "Out of Stock";
		this->ui.availabiilityTextBox->insert(QString::fromStdString(availability));

		// total cost with only 2 decimals
		stream.str("");
		double cost = this->ctrl.getCart()->totalCost();
		stream << fixed << setprecision(2) << cost;
		string str_cost = stream.str();
		this->ui.totalCostTextBox->insert(QString::fromStdString(str_cost));
		// this->ui.totalCostTextBox->insert(QString::fromStdString(std::to_string(this->ctrl.getCart().totalCost())));
	}
}

void TrenchCoatStore::addToCartButtonHandler()
{
	if (!this->ctrl.getCart()->noProducts()) {
		if (this->ctrl.getCart()->getCurrentCoat().getQuantity() < 1) {
			QMessageBox::warning(this, "No products error", "No coats available!", QMessageBox::Close);
		}
		else {
			Coat c = this->ctrl.getCart()->getCurrentCoat();
			this->ctrl.addCoatToCart(c);

			// total cost with 2 decimals
			stringstream stream;
			double cost = this->ctrl.getCart()->totalCost();
			stream << fixed << setprecision(2) << cost;
			string str_cost = stream.str();
			this->ui.totalCostTextBox->clear();
			this->ui.totalCostTextBox->insert(QString::fromStdString(str_cost));
		}
	}
	else
		QMessageBox::warning(this, "No products error", "No coats available! Make sure you start shopping first.", QMessageBox::Close);
}

void TrenchCoatStore::nextProductButtonHandler()
{
	this->clearFields();
	if (this->ctrl.getCart()->noProducts()) {
		QMessageBox::StandardButton reply;
		reply = QMessageBox::warning(this, "No products error", "No coats available!", QMessageBox::Close);
	}
	else {
		this->ctrl.nextCoatShopping();
		Coat c = this->ctrl.getCart()->getCurrentCoat();
		this->ui.sizeTextBox->insert(QString::fromStdString(to_string(c.getSize())));
		this->ui.colourTextBox->insert(QString::fromStdString(c.getColour()));

		// price with only 2 decimals
		double price = c.getPrice();
		stringstream stream;
		stream << fixed << setprecision(2) << price;
		string str_price = stream.str();
		this->ui.priceTextBox->insert(QString::fromStdString(str_price));
		// this->ui.priceTextBox->insert(QString::fromStdString(std::to_string(c.getPrice())));

		string availability;
		if (c.getQuantity() > 3)
			availability = "In Stock";
		else if (c.getQuantity() <= 3 && c.getQuantity() > 0)
			availability = "Limited Stock";
		else
			availability = "Out of Stock";
		this->ui.availabiilityTextBox->insert(QString::fromStdString(availability));

		// total cost with only 2 decimals
		stream.str("");
		double cost = this->ctrl.getCart()->totalCost();
		stream << fixed << setprecision(2) << cost;
		string str_cost = stream.str();
		this->ui.totalCostTextBox->insert(QString::fromStdString(str_cost));
		// this->ui.totalCostTextBox->insert(QString::fromStdString(std::to_string(this->ctrl.getCart().totalCost())));
	}
}

void TrenchCoatStore::saveCartToFileButtonHandler()
{
	std::string filename = "ShoppingCart.csv";
	try {
		this->ctrl.saveCart(filename);

		if (this->ctrl.getCart() == nullptr)
		{
			QMessageBox::warning(this, "Shopping Cart Error", "Shopping Cart cannot be displayed!", QMessageBox::Close);
		}
	}
	catch (FileException fe) {
		QMessageBox::critical(this, "File Error", fe.what(), QMessageBox::Close);
	}
}

void TrenchCoatStore::openCartButtonHandler()
{
	try {
		CartGUI *cartWindow = new CartGUI{ this->ctrl, this };
		this->ctrl.openCart();
		cartWindow->show();
	}
	catch (exception ec) {
		QMessageBox::warning(this, "Unknown Exception Thrown", ec.what(), QMessageBox::Close);
	}
}

void TrenchCoatStore::setClientSize()
{
	std::string sz = this->ui.clientSizeTextBox->text().toStdString();
	if (sz.empty()) {
		this->ctrl.clearProducts();
		this->ctrl.addAllAvailableCoats();
	}
	else
		if (this->is_number(sz)) {
			int size = stoi(sz);
			this->ctrl.clearProducts();
			this->ctrl.addAllSizeCoats(size);
		}
		else
			throw std::exception("Wrong input for coat size. Make sure you type in just numbers.");
}
