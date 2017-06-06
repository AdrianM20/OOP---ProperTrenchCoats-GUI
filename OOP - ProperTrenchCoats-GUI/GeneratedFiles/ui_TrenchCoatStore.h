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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrenchCoatStore
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *startShoppingButton;
    QLineEdit *clientSizeTextBox;
    QPushButton *adminButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *currentProductLabel;
    QFormLayout *formLayout;
    QLabel *sizeLabel;
    QLabel *colourLabel;
    QLabel *priceLabel;
    QLabel *availabilityLabel;
    QLineEdit *sizeTextBox;
    QLineEdit *colourTextBox;
    QLineEdit *priceTextBox;
    QLineEdit *availabiilityTextBox;
    QLabel *totalCostLabel;
    QLineEdit *totalCostTextBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addToCartButton;
    QPushButton *openCartButton;
    QVBoxLayout *verticalLayout_3;
    QPushButton *nextProductButton;
    QPushButton *saveCartButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *TrenchCoatStore)
    {
        if (TrenchCoatStore->objectName().isEmpty())
            TrenchCoatStore->setObjectName(QStringLiteral("TrenchCoatStore"));
        TrenchCoatStore->resize(396, 422);
        verticalLayout_4 = new QVBoxLayout(TrenchCoatStore);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(TrenchCoatStore);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startShoppingButton = new QPushButton(TrenchCoatStore);
        startShoppingButton->setObjectName(QStringLiteral("startShoppingButton"));
        startShoppingButton->setFont(font);

        horizontalLayout->addWidget(startShoppingButton);

        clientSizeTextBox = new QLineEdit(TrenchCoatStore);
        clientSizeTextBox->setObjectName(QStringLiteral("clientSizeTextBox"));
        clientSizeTextBox->setFont(font);

        horizontalLayout->addWidget(clientSizeTextBox);

        adminButton = new QPushButton(TrenchCoatStore);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setFont(font);

        horizontalLayout->addWidget(adminButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentProductLabel = new QLabel(TrenchCoatStore);
        currentProductLabel->setObjectName(QStringLiteral("currentProductLabel"));
        currentProductLabel->setFont(font);

        verticalLayout->addWidget(currentProductLabel);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        sizeLabel = new QLabel(TrenchCoatStore);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, sizeLabel);

        colourLabel = new QLabel(TrenchCoatStore);
        colourLabel->setObjectName(QStringLiteral("colourLabel"));
        colourLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, colourLabel);

        priceLabel = new QLabel(TrenchCoatStore);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, priceLabel);

        availabilityLabel = new QLabel(TrenchCoatStore);
        availabilityLabel->setObjectName(QStringLiteral("availabilityLabel"));
        availabilityLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, availabilityLabel);

        sizeTextBox = new QLineEdit(TrenchCoatStore);
        sizeTextBox->setObjectName(QStringLiteral("sizeTextBox"));
        sizeTextBox->setEnabled(false);
        sizeTextBox->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, sizeTextBox);

        colourTextBox = new QLineEdit(TrenchCoatStore);
        colourTextBox->setObjectName(QStringLiteral("colourTextBox"));
        colourTextBox->setEnabled(false);
        colourTextBox->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, colourTextBox);

        priceTextBox = new QLineEdit(TrenchCoatStore);
        priceTextBox->setObjectName(QStringLiteral("priceTextBox"));
        priceTextBox->setEnabled(false);
        priceTextBox->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, priceTextBox);

        availabiilityTextBox = new QLineEdit(TrenchCoatStore);
        availabiilityTextBox->setObjectName(QStringLiteral("availabiilityTextBox"));
        availabiilityTextBox->setEnabled(false);
        availabiilityTextBox->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, availabiilityTextBox);

        totalCostLabel = new QLabel(TrenchCoatStore);
        totalCostLabel->setObjectName(QStringLiteral("totalCostLabel"));
        totalCostLabel->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, totalCostLabel);

        totalCostTextBox = new QLineEdit(TrenchCoatStore);
        totalCostTextBox->setObjectName(QStringLiteral("totalCostTextBox"));
        totalCostTextBox->setEnabled(false);
        totalCostTextBox->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, totalCostTextBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(4, QFormLayout::SpanningRole, horizontalSpacer);


        verticalLayout->addLayout(formLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        addToCartButton = new QPushButton(TrenchCoatStore);
        addToCartButton->setObjectName(QStringLiteral("addToCartButton"));
        addToCartButton->setFont(font);

        verticalLayout_2->addWidget(addToCartButton);

        openCartButton = new QPushButton(TrenchCoatStore);
        openCartButton->setObjectName(QStringLiteral("openCartButton"));
        openCartButton->setFont(font);

        verticalLayout_2->addWidget(openCartButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        nextProductButton = new QPushButton(TrenchCoatStore);
        nextProductButton->setObjectName(QStringLiteral("nextProductButton"));
        nextProductButton->setFont(font);

        verticalLayout_3->addWidget(nextProductButton);

        saveCartButton = new QPushButton(TrenchCoatStore);
        saveCartButton->setObjectName(QStringLiteral("saveCartButton"));
        saveCartButton->setFont(font);

        verticalLayout_3->addWidget(saveCartButton);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        cancelButton = new QPushButton(TrenchCoatStore);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setFont(font);

        verticalLayout_4->addWidget(cancelButton);


        retranslateUi(TrenchCoatStore);
        QObject::connect(cancelButton, SIGNAL(clicked()), TrenchCoatStore, SLOT(close()));

        QMetaObject::connectSlotsByName(TrenchCoatStore);
    } // setupUi

    void retranslateUi(QWidget *TrenchCoatStore)
    {
        TrenchCoatStore->setWindowTitle(QApplication::translate("TrenchCoatStore", "Proper Trench Coats Store", 0));
        label->setText(QApplication::translate("TrenchCoatStore", "Before starting shopping insert the wanted size below", 0));
        startShoppingButton->setText(QApplication::translate("TrenchCoatStore", "Start Shopping", 0));
        adminButton->setText(QApplication::translate("TrenchCoatStore", "Admin Mode", 0));
        currentProductLabel->setText(QApplication::translate("TrenchCoatStore", "Current Product:", 0));
        sizeLabel->setText(QApplication::translate("TrenchCoatStore", "Size:", 0));
        colourLabel->setText(QApplication::translate("TrenchCoatStore", "Colour", 0));
        priceLabel->setText(QApplication::translate("TrenchCoatStore", "Price", 0));
        availabilityLabel->setText(QApplication::translate("TrenchCoatStore", "Availability:", 0));
        totalCostLabel->setText(QApplication::translate("TrenchCoatStore", "Total cost:", 0));
        addToCartButton->setText(QApplication::translate("TrenchCoatStore", "Add to cart", 0));
        openCartButton->setText(QApplication::translate("TrenchCoatStore", "Open Cart", 0));
        nextProductButton->setText(QApplication::translate("TrenchCoatStore", "Next product", 0));
        saveCartButton->setText(QApplication::translate("TrenchCoatStore", "Save cart to file", 0));
        cancelButton->setText(QApplication::translate("TrenchCoatStore", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TrenchCoatStore: public Ui_TrenchCoatStore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRENCHCOATSTORE_H
