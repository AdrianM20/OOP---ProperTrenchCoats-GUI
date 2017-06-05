#include "ProperTrenchCoatsGUI.h"
#include <vector>
#include <sstream>
#include <iomanip>
#include "NewCoat.h"
#include "UpdateCoat.h"
#include <QMessageBox>
#include <QDebug>


using namespace std;

ProperTrenchCoatsGUI::ProperTrenchCoatsGUI(Controller& c, QWidget *mParent)
	: parent(mParent), ctrl {c}
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
	if (this->ui.sortedButton->isChecked())
		std::sort(coats.begin(), coats.end(), [](Coat c1, Coat c2) { return c1.getPrice() < c2.getPrice(); });
	if (this->ui.shuffledButton->isChecked())
		std::random_shuffle(coats.begin(), coats.end());
	for (auto c : coats) {
		double price = c.getPrice();
		stringstream stream;
		stream << fixed << setprecision(2) << price;
		string str_price = stream.str();
		string coatString = c.getID() + " | " + to_string(c.getSize()) + " | " + c.getColour() + " | " + str_price + " | " + to_string(c.getQuantity());

		this->ui.coatsList->addItem(QString::fromStdString(coatString));
	}
}

void ProperTrenchCoatsGUI::colourPopulateList()
{
	this->ui.coatsList->clear();
	vector<Coat> coats = this->ctrl.getRepo().getCoats();
	for (auto c : coats) {
		double price = c.getPrice();
		stringstream stream;
		stream << fixed << setprecision(2) << price;
		string str_price = stream.str();
		string coatString = c.getID() + " | " + to_string(c.getSize()) + " | " + c.getColour() + " | " + str_price + " | " + to_string(c.getQuantity());
		QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(coatString));
		if (c.getQuantity() == 0)
			item->setBackgroundColor(QColor("Red"));
		this->ui.coatsList->addItem(item);
	}
}

void ProperTrenchCoatsGUI::totalStock()
{
	this->ui.stockTotalTextBox->clear();
	vector<Coat> coats = this->ctrl.getRepo().getCoats();
	int stock = 0;
	for (auto c : coats)
		stock += c.getQuantity();
	string str_stock(to_string(stock));
	this->ui.stockTotalTextBox->insert(QString::fromStdString(str_stock));
}

void ProperTrenchCoatsGUI::connectSignalsandSlots()
{
	// connect add coat button
	connect(this->ui.addButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::addButtonHandler);

	// connect delete coat button
	connect(this->ui.deleteButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::deleteButtonHandler);

	// connect update coat button
	connect(this->ui.updateButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::updateButtonHandler);

	// connect redcolour button
	connect(this->ui.colourButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::colourPopulateList);

	// connect stock count button
	connect(this->ui.stockTotalButton, &QPushButton::clicked, this, &ProperTrenchCoatsGUI::totalStock);

	// connect radio buttons to populate list
	connect(this->ui.sortedButton, &QRadioButton::toggled, this, &ProperTrenchCoatsGUI::populateList);
	connect(this->ui.shuffledButton, &QRadioButton::toggled, this, &ProperTrenchCoatsGUI::populateList);
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
