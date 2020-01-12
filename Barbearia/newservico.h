#ifndef NEWSERVICO_H
#define NEWSERVICO_H

#include <QDialog>
#include <QCompleter>
#include <QMessageBox>
#include "Cadastro.h"
#include "Servico.h"
namespace Ui {
class NewServico;
}

class NewServico : public QDialog
{
    Q_OBJECT

public:
    explicit NewServico(QWidget *parent = nullptr);
    ~NewServico();
private slots:
    void on_btnSalvar_clicked();

private:
    Ui::NewServico *ui;
};

#endif // NEWSERVICO_H
