#pragma once
#ifndef PROPERTRENCHCOATSGUI_H
#define PROPERTRENCHCOATSGUI_H

#include <QWidget>
#include "ui_ProperTrenchCoatsGUI.h"
#include "Controller.h"

class ProperTrenchCoatsGUI : public QWidget
{
	Q_OBJECT

public:
	ProperTrenchCoatsGUI(Controller& c, QWidget *parent = 0);
	~ProperTrenchCoatsGUI();
	void populateList();
	void colourPopulateList();
	void totalStock();

private:
	Ui::ProperTrenchCoatsGUI ui;
	Controller& ctrl;
	void connectSignalsandSlots();
	int getSelectedIndex();

	void addButtonHandler();
	void deleteButtonHandler();
	void updateButtonHandler();
};

#endif // PROPERTRENCHCOATSGUI_H