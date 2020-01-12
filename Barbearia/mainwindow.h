#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QMessageBox>
#include "newfuncionario.h"
#include "viewfuncionario.h"
#include "newcliente.h"
#include "viewcliente.h"
#include "newservico.h"
#include "viewservicos.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_novoFuncionario_triggered();

    void on_adicionarCliente_triggered();
    void on_buscarCliente_triggered();

    void on_adicionarServico_triggered();

    void on_excluirFuncionario_triggered();

    void on_actionAtualizar_triggered();

    void on_actionAjuda_triggered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
