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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProperTrenchCoatsGUI
{
public:
    QVBoxLayout *verticalLayout_3;
    QListWidget *coatsList;
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
        ProperTrenchCoatsGUI->resize(354, 529);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProperTrenchCoatsGUI->sizePolicy().hasHeightForWidth());
        ProperTrenchCoatsGUI->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(ProperTrenchCoatsGUI);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        coatsList = new QListWidget(ProperTrenchCoatsGUI);
        coatsList->setObjectName(QStringLiteral("coatsList"));
        QFont font;
        font.setPointSize(12);
        coatsList->setFont(font);

        verticalLayout_3->addWidget(coatsList);

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

        verticalLayout->addWidget(addButton);

        updateButton = new QPushButton(ProperTrenchCoatsGUI);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMinimumSize(QSize(100, 40));

        verticalLayout->addWidget(updateButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        deleteButton = new QPushButton(ProperTrenchCoatsGUI);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));

        verticalLayout_2->addWidget(deleteButton);

        closeButton = new QPushButton(ProperTrenchCoatsGUI);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(100, 40));

        verticalLayout_2->addWidget(closeButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ProperTrenchCoatsGUI);
        QObject::connect(closeButton, SIGNAL(clicked()), ProperTrenchCoatsGUI, SLOT(close()));

        QMetaObject::connectSlotsByName(ProperTrenchCoatsGUI);
    } // setupUi

    void retranslateUi(QWidget *ProperTrenchCoatsGUI)
    {
        ProperTrenchCoatsGUI->setWindowTitle(QApplication::translate("ProperTrenchCoatsGUI", "Proper Trench Coats", 0));
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
