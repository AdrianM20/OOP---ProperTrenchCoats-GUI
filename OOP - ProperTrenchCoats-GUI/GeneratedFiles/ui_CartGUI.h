/********************************************************************************
** Form generated from reading UI file 'CartGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTGUI_H
#define UI_CARTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartGUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *buyButton;
    QPushButton *emptyCartButton;
    QPushButton *shopButton;

    void setupUi(QWidget *CartGUI)
    {
        if (CartGUI->objectName().isEmpty())
            CartGUI->setObjectName(QStringLiteral("CartGUI"));
        CartGUI->resize(261, 161);
        verticalLayout = new QVBoxLayout(CartGUI);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CartGUI);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(CartGUI);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        buyButton = new QPushButton(CartGUI);
        buyButton->setObjectName(QStringLiteral("buyButton"));
        buyButton->setFont(font);

        verticalLayout->addWidget(buyButton);

        emptyCartButton = new QPushButton(CartGUI);
        emptyCartButton->setObjectName(QStringLiteral("emptyCartButton"));
        emptyCartButton->setFont(font);

        verticalLayout->addWidget(emptyCartButton);

        shopButton = new QPushButton(CartGUI);
        shopButton->setObjectName(QStringLiteral("shopButton"));
        shopButton->setFont(font);

        verticalLayout->addWidget(shopButton);


        retranslateUi(CartGUI);
        QObject::connect(shopButton, SIGNAL(clicked()), CartGUI, SLOT(close()));

        QMetaObject::connectSlotsByName(CartGUI);
    } // setupUi

    void retranslateUi(QWidget *CartGUI)
    {
        CartGUI->setWindowTitle(QApplication::translate("CartGUI", "Shopping Cart Menu", 0));
        label->setText(QApplication::translate("CartGUI", "Wait for the shopping cart to open", 0));
        label_2->setText(QApplication::translate("CartGUI", "and then choose your option", 0));
        buyButton->setText(QApplication::translate("CartGUI", "Buy Products", 0));
        emptyCartButton->setText(QApplication::translate("CartGUI", "Empty Cart", 0));
        shopButton->setText(QApplication::translate("CartGUI", "Continue Shopping", 0));
    } // retranslateUi

};

namespace Ui {
    class CartGUI: public Ui_CartGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTGUI_H
