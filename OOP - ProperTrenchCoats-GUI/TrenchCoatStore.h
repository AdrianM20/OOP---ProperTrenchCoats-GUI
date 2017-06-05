#ifndef TRENCHCOATSTORE_H
#define TRENCHCOATSTORE_H

#include <QWidget>
#include "ui_TrenchCoatStore.h"
#include "Controller.h"

class TrenchCoatStore : public QWidget
{
	Q_OBJECT

public:
	TrenchCoatStore(Controller& c, QWidget *parent = 0);
	~TrenchCoatStore();

private:
	Ui::TrenchCoatStore ui;
	Controller& ctrl;
	void connectSignalsandSlots();

	void openAdminButtonHandler();
};

#endif // TRENCHCOATSTORE_H
