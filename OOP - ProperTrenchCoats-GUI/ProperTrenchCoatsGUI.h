#pragma once

#include <QWidget>
#include "ui_ProperTrenchCoatsGUI.h"

class ProperTrenchCoatsGUI : public QWidget
{
	Q_OBJECT

public:
	ProperTrenchCoatsGUI(QWidget *parent = Q_NULLPTR);
	~ProperTrenchCoatsGUI();

private:
	Ui::ProperTrenchCoatsGUI ui;
};
