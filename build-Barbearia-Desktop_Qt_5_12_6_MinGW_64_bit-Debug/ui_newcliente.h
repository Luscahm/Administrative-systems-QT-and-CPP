/********************************************************************************
** Form generated from reading UI file 'newcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLIENTE_H
#define UI_NEWCLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCliente
{
public:
    QLabel *gravou;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label0;
    QLabel *label2;
    QLabel *label1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edtNome;
    QLineEdit *edtContato;
    QLineEdit *edtCpf;
    QPushButton *btnSalvar;

    void setupUi(QDialog *NewCliente)
    {
        if (NewCliente->objectName().isEmpty())
            NewCliente->setObjectName(QString::fromUtf8("NewCliente"));
        NewCliente->resize(240, 245);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/cliente.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewCliente->setWindowIcon(icon);
        gravou = new QLabel(NewCliente);
        gravou->setObjectName(QString::fromUtf8("gravou"));
        gravou->setGeometry(QRect(40, 210, 171, 20));
        layoutWidget = new QWidget(NewCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 201, 171));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label0 = new QLabel(layoutWidget);
        label0->setObjectName(QString::fromUtf8("label0"));

        verticalLayout->addWidget(label0);

        label2 = new QLabel(layoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout->addWidget(label2);

        label1 = new QLabel(layoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout->addWidget(label1);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        edtNome = new QLineEdit(layoutWidget);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        verticalLayout_2->addWidget(edtNome);

        edtContato = new QLineEdit(layoutWidget);
        edtContato->setObjectName(QString::fromUtf8("edtContato"));

        verticalLayout_2->addWidget(edtContato);

        edtCpf = new QLineEdit(layoutWidget);
        edtCpf->setObjectName(QString::fromUtf8("edtCpf"));

        verticalLayout_2->addWidget(edtCpf);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        btnSalvar = new QPushButton(layoutWidget);
        btnSalvar->setObjectName(QString::fromUtf8("btnSalvar"));

        verticalLayout_3->addWidget(btnSalvar);


        retranslateUi(NewCliente);

        QMetaObject::connectSlotsByName(NewCliente);
    } // setupUi

    void retranslateUi(QDialog *NewCliente)
    {
        NewCliente->setWindowTitle(QApplication::translate("NewCliente", "Cadastro Cliente", nullptr));
        gravou->setText(QString());
        label0->setText(QApplication::translate("NewCliente", "Nome:", nullptr));
        label2->setText(QApplication::translate("NewCliente", "Contato:", nullptr));
        label1->setText(QApplication::translate("NewCliente", "CPF:", nullptr));
        btnSalvar->setText(QApplication::translate("NewCliente", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCliente: public Ui_NewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLIENTE_H
