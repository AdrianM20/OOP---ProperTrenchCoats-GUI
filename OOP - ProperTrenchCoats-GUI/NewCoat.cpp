#include "NewCoat.h"
#include "ProperTrenchCoatsGUI.h"
#include <qmessagebox.h>
#include <sstream>

NewCoat::NewCoat(Controller& cont, QWidget *mParent)
	: parent(mParent), mCont(cont)
{
	ui.setupUi(this);
	connect(ui.addButton, SIGNAL(clicked()), this, SLOT(add()));
}

NewCoat::~NewCoat()
{

}

void NewCoat::add() 
{
	try {
		mCont.addCoatToRepository(ui.idTextBox->text().toStdString(), ui.sizeTextBox->text().toInt(),
			ui.colourTextBox->text().toStdString(), ui.priceTextBox->text().toDouble(), ui.quantityTextBox->text().toInt(),
			ui.linkTextBox->text().toStdString());
	}
	catch (const char* msg) {
		QMessageBox::warning(this, "Add Error", msg, QMessageBox::Close);
	}
	catch (CoatException ce) {
		std::vector<std::string> errors = ce.getErrors();
		std::stringstream ss;
		for (auto er : errors) {
			ss << er << "\n";
		}
		std::string err_msg = ss.str();
		QMessageBox::warning(this, "Add Error", QString::fromStdString(err_msg), QMessageBox::Close);
	}
	ProperTrenchCoatsGUI* mParent = dynamic_cast<ProperTrenchCoatsGUI*>(this->parent);

	if (mParent != nullptr)
		mParent->populateList();

	close();
}