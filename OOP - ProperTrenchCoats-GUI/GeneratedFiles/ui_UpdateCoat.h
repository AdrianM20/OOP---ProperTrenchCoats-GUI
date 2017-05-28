/********************************************************************************
** Form generated from reading UI file 'UpdateCoat.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECOAT_H
#define UI_UPDATECOAT_H

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

class Ui_UpdateCoat
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLineEdit *idTextBox;
    QSpacerItem *horizontalSpacer;
    QLabel *newpriceLabel;
    QLineEdit *newpriceTextBox;
    QLabel *newquantityLabel;
    QLineEdit *newquantityTextBox;
    QLabel *newlinkLabel;
    QLineEdit *newlinkTextBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *closeButton;

    void setupUi(QWidget *UpdateCoat)
    {
        if (UpdateCoat->objectName().isEmpty())
            UpdateCoat->setObjectName(QStringLiteral("UpdateCoat"));
        UpdateCoat->resize(353, 221);
        verticalLayout = new QVBoxLayout(UpdateCoat);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        idLabel = new QLabel(UpdateCoat);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        QFont font;
        font.setPointSize(11);
        idLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, idLabel);

        idTextBox = new QLineEdit(UpdateCoat);
        idTextBox->setObjectName(QStringLiteral("idTextBox"));
        idTextBox->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, idTextBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::SpanningRole, horizontalSpacer);

        newpriceLabel = new QLabel(UpdateCoat);
        newpriceLabel->setObjectName(QStringLiteral("newpriceLabel"));
        newpriceLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, newpriceLabel);

        newpriceTextBox = new QLineEdit(UpdateCoat);
        newpriceTextBox->setObjectName(QStringLiteral("newpriceTextBox"));
        newpriceTextBox->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, newpriceTextBox);

        newquantityLabel = new QLabel(UpdateCoat);
        newquantityLabel->setObjectName(QStringLiteral("newquantityLabel"));
        newquantityLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, newquantityLabel);

        newquantityTextBox = new QLineEdit(UpdateCoat);
        newquantityTextBox->setObjectName(QStringLiteral("newquantityTextBox"));
        newquantityTextBox->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, newquantityTextBox);

        newlinkLabel = new QLabel(UpdateCoat);
        newlinkLabel->setObjectName(QStringLiteral("newlinkLabel"));
        newlinkLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, newlinkLabel);

        newlinkTextBox = new QLineEdit(UpdateCoat);
        newlinkTextBox->setObjectName(QStringLiteral("newlinkTextBox"));
        newlinkTextBox->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, newlinkTextBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        updateButton = new QPushButton(UpdateCoat);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout->addWidget(updateButton);

        closeButton = new QPushButton(UpdateCoat);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateCoat);
        QObject::connect(closeButton, SIGNAL(clicked()), UpdateCoat, SLOT(close()));

        QMetaObject::connectSlotsByName(UpdateCoat);
    } // setupUi

    void retranslateUi(QWidget *UpdateCoat)
    {
        UpdateCoat->setWindowTitle(QApplication::translate("UpdateCoat", "UpdateCoat", 0));
        idLabel->setText(QApplication::translate("UpdateCoat", "ID:", 0));
        newpriceLabel->setText(QApplication::translate("UpdateCoat", "New Price:", 0));
        newquantityLabel->setText(QApplication::translate("UpdateCoat", "New Quantity:", 0));
        newlinkLabel->setText(QApplication::translate("UpdateCoat", "New Link:", 0));
        updateButton->setText(QApplication::translate("UpdateCoat", "Update Coat", 0));
        closeButton->setText(QApplication::translate("UpdateCoat", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateCoat: public Ui_UpdateCoat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECOAT_H
