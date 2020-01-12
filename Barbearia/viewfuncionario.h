#ifndef VIEWFUNCIONARIO_H
#define VIEWFUNCIONARIO_H

#include <QDialog>
#include<fstream>
#include <QString>
#include <QDebug>
#include "Profissional.h"
#include "Cadastro.h"
namespace Ui {
class viewfuncionario;
}

class viewfuncionario : public QDialog
{
    Q_OBJECT

public:
    explicit viewfuncionario(QWidget *parent = nullptr);
    ~viewfuncionario();


private slots:
    void on_btnBuscar_clicked();

    void on_delete_2_clicked();
    //void le();

    void on_edit_clicked();

private:
    Ui::viewfuncionario *ui;
};

#endif // VIEWFUNCIONARIO_H
