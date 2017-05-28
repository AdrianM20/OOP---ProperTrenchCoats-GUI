#include "ProperTrenchCoatsGUI.h"
#include <vector>
#include "NewCoat.h"
#include "UpdateCoat.h"
#include <qmessagebox.h>
#include <qdebug.h>

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

	// connect delete coat button
	connect(this->ui.deleteButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::deleteButtonHandler);

	// connect update coat button
	connect(this->ui.updateButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::updateButtonHandler);
}

int ProperTrenchCoatsGUI::getSelectedIndex()
{
	if (this->ui.coatsList->count() == 0)
		return -1;

	// get selected index
	QModelIndexList index = this->ui.coatsList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
		return -1;

	int idx = index.at(0).row();
	return idx;
}

void ProperTrenchCoatsGUI::addButtonHandler()
{
	NewCoat *addcoatWindow = new NewCoat{ this->ctrl, this };
	addcoatWindow->show();
}

void ProperTrenchCoatsGUI::deleteButtonHandler()
{
	int idx = this->getSelectedIndex();

	if (idx < 0 || idx >= this->ctrl.getAllCoats().size())
		return;

	try {
		QMessageBox::StandardButton reply;
		reply = QMessageBox::question(this, "Delete Coat",
			"Are you sure you want to delete this coat?", QMessageBox::Yes | QMessageBox::No);
		if (reply == QMessageBox::Yes)
			this->ctrl.removeCoatFromRepository(this->ctrl.getAllCoats()[idx].getID());
		else
			qDebug() << "Coat wasn't deleted";
	}
	catch (const char* msg) {
		//QMessageBox::StandardButton reply;
		//reply = 
		QMessageBox::warning(this, "Delete Error", msg, QMessageBox::Close);
	}
	this->populateList();
}

void ProperTrenchCoatsGUI::updateButtonHandler()
{
	UpdateCoat *updateCoatWindow = new UpdateCoat{ this->ctrl,this };
	updateCoatWindow->show();
}
