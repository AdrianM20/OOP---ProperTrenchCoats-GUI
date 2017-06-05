#include "TrenchCoatStore.h"
#include <QMessageBox>
#include "ProperTrenchCoatsGUI.h"
#include <QDebug>

TrenchCoatStore::TrenchCoatStore(Controller& c, QWidget *parent)
	: QWidget(parent), ctrl {c}
{
	ui.setupUi(this);
	this->connectSignalsandSlots();
}

TrenchCoatStore::~TrenchCoatStore()
{

}

void TrenchCoatStore::connectSignalsandSlots()
{
	connect(this->ui.adminButton, &QPushButton::clicked, this, &TrenchCoatStore::openAdminButtonHandler);
}

void TrenchCoatStore::openAdminButtonHandler()
{
	ProperTrenchCoatsGUI *adminWindow = new ProperTrenchCoatsGUI{ this->ctrl,this };
	adminWindow->show();
}
