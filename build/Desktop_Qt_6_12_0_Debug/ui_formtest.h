/********************************************************************************
** Form generated from reading UI file 'formtest.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTEST_H
#define UI_FORMTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTest
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *txtMsg;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnHome;
    QPushButton *btnQuickTest;
    QPushButton *btnFullTest;
    QPushButton *btnImit;
    QPushButton *btnReadGCode;
    QPushButton *btnMemTest;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *btnConn;
    QPushButton *btnGCode;
    QPushButton *btnHelp;

    void setupUi(QWidget *FormTest)
    {
        if (FormTest->objectName().isEmpty())
            FormTest->setObjectName("FormTest");
        FormTest->resize(1253, 633);
        verticalLayout_2 = new QVBoxLayout(FormTest);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txtMsg = new QTextEdit(FormTest);
        txtMsg->setObjectName("txtMsg");
        txtMsg->setReadOnly(true);

        verticalLayout->addWidget(txtMsg);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnHome = new QPushButton(FormTest);
        btnHome->setObjectName("btnHome");

        horizontalLayout->addWidget(btnHome);

        btnQuickTest = new QPushButton(FormTest);
        btnQuickTest->setObjectName("btnQuickTest");

        horizontalLayout->addWidget(btnQuickTest);

        btnFullTest = new QPushButton(FormTest);
        btnFullTest->setObjectName("btnFullTest");

        horizontalLayout->addWidget(btnFullTest);

        btnImit = new QPushButton(FormTest);
        btnImit->setObjectName("btnImit");

        horizontalLayout->addWidget(btnImit);

        btnReadGCode = new QPushButton(FormTest);
        btnReadGCode->setObjectName("btnReadGCode");

        horizontalLayout->addWidget(btnReadGCode);

        btnMemTest = new QPushButton(FormTest);
        btnMemTest->setObjectName("btnMemTest");

        horizontalLayout->addWidget(btnMemTest);

        pushButton_7 = new QPushButton(FormTest);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setEnabled(false);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(FormTest);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setEnabled(false);

        horizontalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(FormTest);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setEnabled(false);

        horizontalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(FormTest);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setEnabled(false);

        horizontalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(FormTest);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setEnabled(false);

        horizontalLayout->addWidget(pushButton_11);

        btnConn = new QPushButton(FormTest);
        btnConn->setObjectName("btnConn");
        btnConn->setEnabled(true);

        horizontalLayout->addWidget(btnConn);

        btnGCode = new QPushButton(FormTest);
        btnGCode->setObjectName("btnGCode");

        horizontalLayout->addWidget(btnGCode);

        btnHelp = new QPushButton(FormTest);
        btnHelp->setObjectName("btnHelp");

        horizontalLayout->addWidget(btnHelp);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FormTest);

        QMetaObject::connectSlotsByName(FormTest);
    } // setupUi

    void retranslateUi(QWidget *FormTest)
    {
        FormTest->setWindowTitle(QCoreApplication::translate("FormTest", "Form", nullptr));
        btnHome->setText(QCoreApplication::translate("FormTest", "Home", nullptr));
        btnQuickTest->setText(QCoreApplication::translate("FormTest", "Quick Test", nullptr));
        btnFullTest->setText(QCoreApplication::translate("FormTest", "Full Test", nullptr));
        btnImit->setText(QCoreApplication::translate("FormTest", "Imitation", nullptr));
        btnReadGCode->setText(QCoreApplication::translate("FormTest", "Read CNC", nullptr));
        btnMemTest->setText(QCoreApplication::translate("FormTest", "Memtest", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        btnConn->setText(QCoreApplication::translate("FormTest", "Reconnect", nullptr));
        btnGCode->setText(QCoreApplication::translate("FormTest", "G-code", nullptr));
        btnHelp->setText(QCoreApplication::translate("FormTest", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTest: public Ui_FormTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTEST_H
