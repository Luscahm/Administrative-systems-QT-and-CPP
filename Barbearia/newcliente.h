#ifndef NEWCLIENTE_H
#define NEWCLIENTE_H

#include <QDialog>
#include "Cliente.h"
#include "Cadastro.h"

namespace Ui {
class NewCliente;
}

class NewCliente : public QDialog
{
    Q_OBJECT

public:
    explicit NewCliente(QWidget *parent = nullptr);
    ~NewCliente();

private slots:

    void on_btnSalvar_clicked();

private:
    Ui::NewCliente *ui;
};

#endif // NEWCLIENTE_H
