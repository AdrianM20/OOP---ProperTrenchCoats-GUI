#ifndef NEWCOAT_H
#define NEWCOAT_H

#include <QWidget>
#include "ui_NewCoat.h"
#include "Controller.h"

class NewCoat : public QWidget
{
	Q_OBJECT

public:
	NewCoat(Controller& ,QWidget *parent = 0);
	~NewCoat();

private:
	Controller& mCont;
	Ui::NewCoat ui;
	QWidget* parent;

public slots:

	void add();
};

#endif // NEWCOAT_H
