/********************************************************************************
** Form generated from reading UI file 'ProperTrenchCoatsGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTRENCHCOATSGUI_H
#define UI_PROPERTRENCHCOATSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProperTrenchCoatsGUI
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *sortedButton;
    QRadioButton *shuffledButton;
    QListWidget *coatsList;
    QPushButton *colourButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *stockTotalButton;
    QLineEdit *stockTotalTextBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *updateButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deleteButton;
    QPushButton *closeButton;

    void setupUi(QWidget *ProperTrenchCoatsGUI)
    {
        if (ProperTrenchCoatsGUI->objectName().isEmpty())
            ProperTrenchCoatsGUI->setObjectName(QStringLiteral("ProperTrenchCoatsGUI"));
        ProperTrenchCoatsGUI->resize(355, 563);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProperTrenchCoatsGUI->sizePolicy().hasHeightForWidth());
        ProperTrenchCoatsGUI->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(ProperTrenchCoatsGUI);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sortedButton = new QRadioButton(ProperTrenchCoatsGUI);
        sortedButton->setObjectName(QStringLiteral("sortedButton"));
        QFont font;
        font.setPointSize(10);
        sortedButton->setFont(font);

        horizontalLayout_3->addWidget(sortedButton);

        shuffledButton = new QRadioButton(ProperTrenchCoatsGUI);
        shuffledButton->setObjectName(QStringLiteral("shuffledButton"));
        shuffledButton->setFont(font);

        horizontalLayout_3->addWidget(shuffledButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        coatsList = new QListWidget(ProperTrenchCoatsGUI);
        coatsList->setObjectName(QStringLiteral("coatsList"));
        QFont font1;
        font1.setPointSize(12);
        coatsList->setFont(font1);

        verticalLayout_3->addWidget(coatsList);

        colourButton = new QPushButton(ProperTrenchCoatsGUI);
        colourButton->setObjectName(QStringLiteral("colourButton"));
        colourButton->setFont(font);

        verticalLayout_3->addWidget(colourButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        stockTotalButton = new QPushButton(ProperTrenchCoatsGUI);
        stockTotalButton->setObjectName(QStringLiteral("stockTotalButton"));
        stockTotalButton->setMinimumSize(QSize(0, 0));
        stockTotalButton->setFont(font);

        horizontalLayout_2->addWidget(stockTotalButton);

        stockTotalTextBox = new QLineEdit(ProperTrenchCoatsGUI);
        stockTotalTextBox->setObjectName(QStringLiteral("stockTotalTextBox"));
        stockTotalTextBox->setEnabled(false);
        stockTotalTextBox->setFont(font);

        horizontalLayout_2->addWidget(stockTotalTextBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addButton = new QPushButton(ProperTrenchCoatsGUI);
        addButton->setObjectName(QStringLiteral("addButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);
        addButton->setMinimumSize(QSize(100, 40));
        addButton->setFont(font1);

        verticalLayout->addWidget(addButton);

        updateButton = new QPushButton(ProperTrenchCoatsGUI);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMinimumSize(QSize(100, 40));
        updateButton->setFont(font1);

        verticalLayout->addWidget(updateButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        deleteButton = new QPushButton(ProperTrenchCoatsGUI);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));
        deleteButton->setFont(font1);

        verticalLayout_2->addWidget(deleteButton);

        closeButton = new QPushButton(ProperTrenchCoatsGUI);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(100, 40));
        closeButton->setFont(font1);

        verticalLayout_2->addWidget(closeButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ProperTrenchCoatsGUI);
        QObject::connect(closeButton, SIGNAL(clicked()), ProperTrenchCoatsGUI, SLOT(close()));

        QMetaObject::connectSlotsByName(ProperTrenchCoatsGUI);
    } // setupUi

    void retranslateUi(QWidget *ProperTrenchCoatsGUI)
    {
        ProperTrenchCoatsGUI->setWindowTitle(QApplication::translate("ProperTrenchCoatsGUI", "Administration Window", 0));
        sortedButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Sorted", 0));
        shuffledButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Shuffled", 0));
        colourButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Highlight out of stock coats", 0));
        stockTotalButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Stock Total", 0));
        addButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Add Coat", 0));
        updateButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Update Coat", 0));
        deleteButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Delete Coat", 0));
        closeButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ProperTrenchCoatsGUI: public Ui_ProperTrenchCoatsGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTRENCHCOATSGUI_H
