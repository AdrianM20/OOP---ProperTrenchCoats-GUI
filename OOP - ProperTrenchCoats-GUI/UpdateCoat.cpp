#include "UpdateCoat.h"
#include "ProperTrenchCoatsGUI.h"
#include <qmessagebox.h>
#include <sstream>

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
	catch (CoatException ce) {
		std::vector<std::string> errors = ce.getErrors();
		std::stringstream ss;
		for (auto er : errors) {
			ss << er << "\n";
		}
		std::string err_msg = ss.str();
		QMessageBox::warning(this, "Update Error", QString::fromStdString(err_msg), QMessageBox::Close);
	}
	catch (RepositoryException re) {
		QMessageBox::warning(this, "Repository Exception", re.what(), QMessageBox::Close);
	}
	catch (FileException fe) {
		QMessageBox::critical(this, "File Exception", fe.what(), QMessageBox::Close);
	}
	ProperTrenchCoatsGUI* mParent = dynamic_cast<ProperTrenchCoatsGUI*>(this->parent);

	if (mParent != nullptr)
		mParent->populateList();

	close();
}