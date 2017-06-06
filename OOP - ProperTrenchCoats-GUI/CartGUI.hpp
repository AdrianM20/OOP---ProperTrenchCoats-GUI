#pragma once
#ifndef CARTGUI_H
#define CARTGUI_H

#include <QWidget>
#include "ui_CartGUI.h"
#include "Controller.h"

class CartGUI : public QWidget 
{
	
	Q_OBJECT

public:
	CartGUI(Controller& c, QWidget * parent = 0);
	~CartGUI();

private:
	Ui::CartGUI ui;
	Controller& cont;
	QWidget* parent;

	void connectSignalsandSlots();

public slots:

	void buy();
	void clearCart();
};

#endif // CARTGUI_H
