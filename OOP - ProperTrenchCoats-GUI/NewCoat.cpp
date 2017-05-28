#include "NewCoat.h"
#include "ProperTrenchCoatsGUI.h"

NewCoat::NewCoat(Controller& cont, QWidget *mParent)
	: QWidget(mParent), mCont(cont)
{
	ui.setupUi(this);
}

NewCoat::~NewCoat()
{

}

void NewCoat::add() 
{

}