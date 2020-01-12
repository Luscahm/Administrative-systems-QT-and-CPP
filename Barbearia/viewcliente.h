#ifndef VIEWCLIENTE_H
#define VIEWCLIENTE_H

#include <QDialog>
#include "Cliente.h"
#include "Cadastro.h"
#include <vector>
#include <QString>
#include <QDebug>
#include<string.h>
#include <cstring> //trabalhar com array de chars como string, igual no C
namespace Ui {
class viewCliente;
}

class viewCliente : public QDialog, public Cadastro
{
    Q_OBJECT

public:
    explicit viewCliente(QWidget *parent = nullptr);
    ~viewCliente();

private slots:
    void on_btnBuscar_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewCliente *ui;
};

#endif // VIEWCLIENTE_H
