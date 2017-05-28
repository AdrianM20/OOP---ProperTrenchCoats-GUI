#ifndef UPDATECOAT_H
#define UPDATECOAT_H

#include <QWidget>
#include "ui_UpdateCoat.h"
#include "Controller.h"

class UpdateCoat : public QWidget
{
	Q_OBJECT

public:
	UpdateCoat(Controller& ,QWidget *parent = 0);
	~UpdateCoat();

private:
	Controller& mCont;
	Ui::UpdateCoat ui;
	QWidget* parent;

public slots:
	
	void update();
};

#endif // UPDATECOAT_H
