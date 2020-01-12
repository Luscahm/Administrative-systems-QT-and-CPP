#ifndef NEWFUNCIONARIO_H
#define NEWFUNCIONARIO_H

#include <QDialog>
#include "Profissional.h"
#include "Cadastro.h"
namespace Ui {
class NewFuncionario;
}

class NewFuncionario : public QDialog
{
    Q_OBJECT

public:
    explicit NewFuncionario(QWidget *parent = nullptr);
    ~NewFuncionario();

private slots:
    void on_btnSalvar_clicked();

private:
    Ui::NewFuncionario *ui;
};

#endif // NEWFUNCIONARIO_H
