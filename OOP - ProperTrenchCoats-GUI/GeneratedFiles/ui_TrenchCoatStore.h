/********************************************************************************
** Form generated from reading UI file 'TrenchCoatStore.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRENCHCOATSTORE_H
#define UI_TRENCHCOATSTORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrenchCoatStore
{
public:
    QPushButton *adminButton;

    void setupUi(QWidget *TrenchCoatStore)
    {
        if (TrenchCoatStore->objectName().isEmpty())
            TrenchCoatStore->setObjectName(QStringLiteral("TrenchCoatStore"));
        TrenchCoatStore->resize(400, 300);
        adminButton = new QPushButton(TrenchCoatStore);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(280, 10, 111, 31));
        QFont font;
        font.setPointSize(11);
        adminButton->setFont(font);

        retranslateUi(TrenchCoatStore);

        QMetaObject::connectSlotsByName(TrenchCoatStore);
    } // setupUi

    void retranslateUi(QWidget *TrenchCoatStore)
    {
        TrenchCoatStore->setWindowTitle(QApplication::translate("TrenchCoatStore", "TrenchCoatStore", 0));
        adminButton->setText(QApplication::translate("TrenchCoatStore", "Admin Mode", 0));
    } // retranslateUi

};

namespace Ui {
    class TrenchCoatStore: public Ui_TrenchCoatStore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRENCHCOATSTORE_H
