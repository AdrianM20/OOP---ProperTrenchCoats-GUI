#include "ProperTrenchCoatsGUI.h"
#include <vector>
#include "NewCoat.h"

using namespace std;

ProperTrenchCoatsGUI::ProperTrenchCoatsGUI(Controller& c, QWidget *parent)
	: QWidget(parent), ctrl {c}
{
	this->ui.setupUi(this);
	this->populateList();
	this->connectSignalsandSlots();
	
}

ProperTrenchCoatsGUI::~ProperTrenchCoatsGUI()
{
}

void ProperTrenchCoatsGUI::populateList()
{
	this->ui.coatsList->clear();
	vector<Coat> coats = this->ctrl.getRepo().getCoats();
	for (auto c : coats) {
		string coatString = c.getID() + " | " + to_string(c.getSize()) + " | " + c.getColour() + " | " + to_string(c.getPrice()) + " | " + to_string(c.getQuantity());
		this->ui.coatsList->addItem(QString::fromStdString(coatString));
	}
}

void ProperTrenchCoatsGUI::connectSignalsandSlots()
{
	// connect add coat button
	connect(this->ui.addButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::addButtonHandler);
}

void ProperTrenchCoatsGUI::addButtonHandler()
{
	NewCoat *coatWindow = new NewCoat{ this->ctrl, this };
	coatWindow->show();
}
