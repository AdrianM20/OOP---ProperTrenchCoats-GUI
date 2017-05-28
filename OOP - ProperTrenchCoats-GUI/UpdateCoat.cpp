#include "UpdateCoat.h"
#include "ProperTrenchCoatsGUI.h"
#include <qmessagebox.h>

UpdateCoat::UpdateCoat(Controller& cont, QWidget *mParent)
	: parent(mParent), mCont(cont)
{
	ui.setupUi(this);
	connect(ui.updateButton, SIGNAL(clicked()), this, SLOT(update()));
}

UpdateCoat::~UpdateCoat()
{

}

void UpdateCoat::update()
{
	try {
		QMessageBox::StandardButton reply;
		reply = QMessageBox::question(this, "Update Coat", "Are you sure you want to change this coat's information?",
			QMessageBox::Yes | QMessageBox::No);
		if (reply == QMessageBox::Yes)
			mCont.updateCoatToRepository(ui.idTextBox->text().toStdString(), ui.newpriceTextBox->text().toDouble(),
				ui.newquantityTextBox->text().toInt(), ui.newlinkTextBox->text().toStdString());
		else
			close();
	}
	catch (const char* msg) {
		QMessageBox::warning(this, "Update Error", msg, QMessageBox::Close);
	}
	ProperTrenchCoatsGUI* mParent = dynamic_cast<ProperTrenchCoatsGUI*>(this->parent);

	if (mParent != nullptr)
		mParent->populateList();

	close();
}