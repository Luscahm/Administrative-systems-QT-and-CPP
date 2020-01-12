#ifndef VIEWSERVICOS_H
#define VIEWSERVICOS_H

#include <QDialog>
#include "Servico.h"
#include "Cadastro.h"
#include <vector>
#include <qstring.h>
#include <QDebug>
#include <cstring>
#include <math.h>



namespace Ui {
class viewServicos;
}
class viewServicos : public QDialog , public Cadastro
{
    Q_OBJECT

public:
    explicit viewServicos(QWidget *parent = nullptr);
    ~viewServicos();

private slots:
    void on_save_clicked();

    void on_edit_clicked();

private:
    Ui::viewServicos *ui;
};

#endif // VIEWSERVICOS_H
