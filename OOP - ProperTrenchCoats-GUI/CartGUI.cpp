#include "CartGUI.hpp"
#include <QMessageBox>

CartGUI::CartGUI(Controller& c, QWidget * mParent) 
	: parent(mParent), cont{c}
{
	ui.setupUi(this);
	this->connectSignalsandSlots();
	//if (this->cont.getCart().isEmpty())
		//QMessageBox::warning(this, "Empty cart", "The shopping cart is empty!", QMessageBox::Close);
}

CartGUI::~CartGUI() {
	
}

void CartGUI::connectSignalsandSlots()
{
	// connect buy button
	connect(this->ui.buyButton, &QPushButton::clicked, this, &CartGUI::buy);
	// TODO connect clear button
	connect(this->ui.emptyCartButton, &QPushButton::clicked, this, &CartGUI::clearCart);
}

void CartGUI::buy()
{
	if (this->cont.getCart()->isEmpty())
		QMessageBox::warning(this, "Buy Error", "Cannot buy because cart is empty!", QMessageBox::Close);
	else
		this->cont.buyProducts();
}

void CartGUI::clearCart()
{
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "Clear Cart", "Are you sure you want to clear the shopping cart?", QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes)
		this->cont.eraseCart();
}