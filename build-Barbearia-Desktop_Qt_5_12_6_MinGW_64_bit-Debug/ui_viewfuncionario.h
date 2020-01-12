/********************************************************************************
** Form generated from reading UI file 'viewfuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFUNCIONARIO_H
#define UI_VIEWFUNCIONARIO_H

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

class Ui_viewfuncionario
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBuscar;
    QPushButton *btnBuscar;
    QTableWidget *tbwFuncionario;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *delete_2;
    QPushButton *edit;

    void setupUi(QDialog *viewfuncionario)
    {
        if (viewfuncionario->objectName().isEmpty())
            viewfuncionario->setObjectName(QString::fromUtf8("viewfuncionario"));
        viewfuncionario->resize(452, 400);
        layoutWidget = new QWidget(viewfuncionario);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(23, 10, 401, 371));
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

        tbwFuncionario = new QTableWidget(layoutWidget);
        tbwFuncionario->setObjectName(QString::fromUtf8("tbwFuncionario"));

        verticalLayout->addWidget(tbwFuncionario);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        delete_2 = new QPushButton(layoutWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        horizontalLayout_2->addWidget(delete_2);

        edit = new QPushButton(layoutWidget);
        edit->setObjectName(QString::fromUtf8("edit"));

        horizontalLayout_2->addWidget(edit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(viewfuncionario);

        QMetaObject::connectSlotsByName(viewfuncionario);
    } // setupUi

    void retranslateUi(QDialog *viewfuncionario)
    {
        viewfuncionario->setWindowTitle(QApplication::translate("viewfuncionario", "Dialog", nullptr));
        label->setText(QApplication::translate("viewfuncionario", "Nome:", nullptr));
        btnBuscar->setText(QApplication::translate("viewfuncionario", "Buscar", nullptr));
        delete_2->setText(QApplication::translate("viewfuncionario", "Excuir funcion\303\241rio", nullptr));
        edit->setText(QApplication::translate("viewfuncionario", "Salvar edi\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewfuncionario: public Ui_viewfuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFUNCIONARIO_H
