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
    QListWidget *coatsList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *updateButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deleteButton;
    QPushButton *cancelButton;

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
        coatsList = new QListWidget(ProperTrenchCoatsGUI);
        coatsList->setObjectName(QStringLiteral("coatsList"));
        coatsList->setGeometry(QRect(10, 10, 331, 401));
        QFont font;
        font.setPointSize(12);
        coatsList->setFont(font);
        horizontalLayoutWidget = new QWidget(ProperTrenchCoatsGUI);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 420, 331, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addButton = new QPushButton(horizontalLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);
        addButton->setMinimumSize(QSize(100, 40));

        verticalLayout->addWidget(addButton);

        updateButton = new QPushButton(horizontalLayoutWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMinimumSize(QSize(100, 40));

        verticalLayout->addWidget(updateButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        deleteButton = new QPushButton(horizontalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(100, 40));

        verticalLayout_2->addWidget(deleteButton);

        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(100, 40));

        verticalLayout_2->addWidget(cancelButton);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ProperTrenchCoatsGUI);

        QMetaObject::connectSlotsByName(ProperTrenchCoatsGUI);
    } // setupUi

    void retranslateUi(QWidget *ProperTrenchCoatsGUI)
    {
        ProperTrenchCoatsGUI->setWindowTitle(QApplication::translate("ProperTrenchCoatsGUI", "Proper Trench Coats", 0));
        addButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Add Coat", 0));
        updateButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Update Coat", 0));
        deleteButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Delete Coat", 0));
        cancelButton->setText(QApplication::translate("ProperTrenchCoatsGUI", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ProperTrenchCoatsGUI: public Ui_ProperTrenchCoatsGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTRENCHCOATSGUI_H
