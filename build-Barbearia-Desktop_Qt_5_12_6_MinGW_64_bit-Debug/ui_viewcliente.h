/********************************************************************************
** Form generated from reading UI file 'viewcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTE_H
#define UI_VIEWCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewCliente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QTableWidget *tbwCliente;
    QPushButton *pushButton;

    void setupUi(QDialog *viewCliente)
    {
        if (viewCliente->objectName().isEmpty())
            viewCliente->setObjectName(QString::fromUtf8("viewCliente"));
        viewCliente->resize(452, 388);
        layoutWidget = new QWidget(viewCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 411, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtBuscar = new QLineEdit(layoutWidget);
        edtBuscar->setObjectName(QString::fromUtf8("edtBuscar"));

        horizontalLayout->addWidget(edtBuscar);

        btnBuscar = new QPushButton(layoutWidget);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout);

        tbwCliente = new QTableWidget(layoutWidget);
        tbwCliente->setObjectName(QString::fromUtf8("tbwCliente"));

        verticalLayout->addWidget(tbwCliente);

        pushButton = new QPushButton(viewCliente);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 360, 121, 21));

        retranslateUi(viewCliente);

        QMetaObject::connectSlotsByName(viewCliente);
    } // setupUi

    void retranslateUi(QDialog *viewCliente)
    {
        viewCliente->setWindowTitle(QApplication::translate("viewCliente", "Ver Cliente", nullptr));
        label->setText(QApplication::translate("viewCliente", "Nome:", nullptr));
        btnBuscar->setText(QApplication::translate("viewCliente", "Buscar", nullptr));
        pushButton->setText(QApplication::translate("viewCliente", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewCliente: public Ui_viewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTE_H
