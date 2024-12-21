#include "winUsuario.h"
#include "ui_winUsuario.h"
#include "winoperacion.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formCuenta)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}





void Form::on_btnOp_clicked()
{
    this->hide(); // Oculta la ventana principal

    winOperacion *winOpM = new winOperacion(this);
    winOpM->setModal(true);
    winOpM->exec();

    this->show(); // Muestra la ventana principal nuevamente después de cerrar winOperacion
    delete winOpM;
}

