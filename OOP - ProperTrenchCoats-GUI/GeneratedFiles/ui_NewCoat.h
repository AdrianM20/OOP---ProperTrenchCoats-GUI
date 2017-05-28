/********************************************************************************
** Form generated from reading UI file 'NewCoat.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOAT_H
#define UI_NEWCOAT_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCoat
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLabel *sizeLabel;
    QLabel *colourLabel;
    QLabel *priceLabel;
    QLabel *quantityLabel;
    QLabel *linkLabel;
    QLineEdit *idTextBox;
    QLineEdit *sizeTextBox;
    QLineEdit *colourTextBox;
    QLineEdit *priceTextBox;
    QLineEdit *quantityTextBox;
    QLineEdit *linkTextBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *NewCoat)
    {
        if (NewCoat->objectName().isEmpty())
            NewCoat->setObjectName(QStringLiteral("NewCoat"));
        NewCoat->resize(354, 227);
        verticalLayout = new QVBoxLayout(NewCoat);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        idLabel = new QLabel(NewCoat);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        QFont font;
        font.setPointSize(11);
        idLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, idLabel);

        sizeLabel = new QLabel(NewCoat);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, sizeLabel);

        colourLabel = new QLabel(NewCoat);
        colourLabel->setObjectName(QStringLiteral("colourLabel"));
        colourLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, colourLabel);

        priceLabel = new QLabel(NewCoat);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, priceLabel);

        quantityLabel = new QLabel(NewCoat);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));
        quantityLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, quantityLabel);

        linkLabel = new QLabel(NewCoat);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));
        linkLabel->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, linkLabel);

        idTextBox = new QLineEdit(NewCoat);
        idTextBox->setObjectName(QStringLiteral("idTextBox"));
        idTextBox->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, idTextBox);

        sizeTextBox = new QLineEdit(NewCoat);
        sizeTextBox->setObjectName(QStringLiteral("sizeTextBox"));
        sizeTextBox->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeTextBox);

        colourTextBox = new QLineEdit(NewCoat);
        colourTextBox->setObjectName(QStringLiteral("colourTextBox"));
        colourTextBox->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, colourTextBox);

        priceTextBox = new QLineEdit(NewCoat);
        priceTextBox->setObjectName(QStringLiteral("priceTextBox"));
        priceTextBox->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, priceTextBox);

        quantityTextBox = new QLineEdit(NewCoat);
        quantityTextBox->setObjectName(QStringLiteral("quantityTextBox"));
        quantityTextBox->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, quantityTextBox);

        linkTextBox = new QLineEdit(NewCoat);
        linkTextBox->setObjectName(QStringLiteral("linkTextBox"));
        linkTextBox->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, linkTextBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(NewCoat);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        cancelButton = new QPushButton(NewCoat);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(NewCoat);
        QObject::connect(cancelButton, SIGNAL(clicked()), NewCoat, SLOT(close()));

        QMetaObject::connectSlotsByName(NewCoat);
    } // setupUi

    void retranslateUi(QWidget *NewCoat)
    {
        NewCoat->setWindowTitle(QApplication::translate("NewCoat", "Add New Coat", 0));
        idLabel->setText(QApplication::translate("NewCoat", "ID:", 0));
        sizeLabel->setText(QApplication::translate("NewCoat", "Size: ", 0));
        colourLabel->setText(QApplication::translate("NewCoat", "Colour:", 0));
        priceLabel->setText(QApplication::translate("NewCoat", "Price:", 0));
        quantityLabel->setText(QApplication::translate("NewCoat", "Quantity:", 0));
        linkLabel->setText(QApplication::translate("NewCoat", "Link:", 0));
        addButton->setText(QApplication::translate("NewCoat", "Add Coat", 0));
        cancelButton->setText(QApplication::translate("NewCoat", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class NewCoat: public Ui_NewCoat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOAT_H
