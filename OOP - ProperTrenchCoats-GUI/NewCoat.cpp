#include "NewCoat.h"
#include "ProperTrenchCoatsGUI.h"
#include <qmessagebox.h>

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
	ProperTrenchCoatsGUI* mParent = dynamic_cast<ProperTrenchCoatsGUI*>(this->parent);

	if (mParent != nullptr)
		mParent->populateList();

	close();
}