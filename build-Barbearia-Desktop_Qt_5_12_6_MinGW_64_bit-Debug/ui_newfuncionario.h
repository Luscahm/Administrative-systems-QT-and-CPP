/********************************************************************************
** Form generated from reading UI file 'newfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFUNCIONARIO_H
#define UI_NEWFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFuncionario
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QVBoxLayout *verticalLayout;
    QLineEdit *Nome;
    QLineEdit *CPF;
    QLineEdit *Cargo;
    QLineEdit *Salario;
    QSpinBox *Cadeira;
    QLabel *gravou;
    QPushButton *btnSalvar;

    void setupUi(QDialog *NewFuncionario)
    {
        if (NewFuncionario->objectName().isEmpty())
            NewFuncionario->setObjectName(QString::fromUtf8("NewFuncionario"));
        NewFuncionario->resize(263, 309);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/barbeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewFuncionario->setWindowIcon(icon);
        widget = new QWidget(NewFuncionario);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 201, 251));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label0 = new QLabel(widget);
        label0->setObjectName(QString::fromUtf8("label0"));

        verticalLayout_2->addWidget(label0);

        label1 = new QLabel(widget);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout_2->addWidget(label1);

        label2 = new QLabel(widget);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout_2->addWidget(label2);

        label3 = new QLabel(widget);
        label3->setObjectName(QString::fromUtf8("label3"));

        verticalLayout_2->addWidget(label3);

        label4 = new QLabel(widget);
        label4->setObjectName(QString::fromUtf8("label4"));

        verticalLayout_2->addWidget(label4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Nome = new QLineEdit(widget);
        Nome->setObjectName(QString::fromUtf8("Nome"));

        verticalLayout->addWidget(Nome);

        CPF = new QLineEdit(widget);
        CPF->setObjectName(QString::fromUtf8("CPF"));

        verticalLayout->addWidget(CPF);

        Cargo = new QLineEdit(widget);
        Cargo->setObjectName(QString::fromUtf8("Cargo"));

        verticalLayout->addWidget(Cargo);

        Salario = new QLineEdit(widget);
        Salario->setObjectName(QString::fromUtf8("Salario"));

        verticalLayout->addWidget(Salario);

        Cadeira = new QSpinBox(widget);
        Cadeira->setObjectName(QString::fromUtf8("Cadeira"));

        verticalLayout->addWidget(Cadeira);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        gravou = new QLabel(widget);
        gravou->setObjectName(QString::fromUtf8("gravou"));

        verticalLayout_3->addWidget(gravou);

        btnSalvar = new QPushButton(widget);
        btnSalvar->setObjectName(QString::fromUtf8("btnSalvar"));

        verticalLayout_3->addWidget(btnSalvar);


        retranslateUi(NewFuncionario);

        QMetaObject::connectSlotsByName(NewFuncionario);
    } // setupUi

    void retranslateUi(QDialog *NewFuncionario)
    {
        NewFuncionario->setWindowTitle(QApplication::translate("NewFuncionario", "Cadastro Funcion\303\241rio", nullptr));
        label0->setText(QApplication::translate("NewFuncionario", "Nome:", nullptr));
        label1->setText(QApplication::translate("NewFuncionario", "CPF:", nullptr));
        label2->setText(QApplication::translate("NewFuncionario", "Cargo:", nullptr));
        label3->setText(QApplication::translate("NewFuncionario", "Salario", nullptr));
        label4->setText(QApplication::translate("NewFuncionario", "Cadeira:", nullptr));
        gravou->setText(QString());
        btnSalvar->setText(QApplication::translate("NewFuncionario", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFuncionario: public Ui_NewFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFUNCIONARIO_H
