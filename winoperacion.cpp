#include "winoperacion.h"
#include "ui_winoperacion.h"
#include "winUsuario.h"

winOperacion::winOperacion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::winOperacion)
{
    ui->setupUi(this);
}

winOperacion::~winOperacion()
{
    delete ui;
}

void winOperacion::on_btnConfirmar_accepted()
{

}


void winOperacion::on_btnCancelar_clicked()
{
    // Cierra la ventana actual
    // Cierra la ventana actual
    this->close();

    // Asegúrate de que el parent sea un puntero a la ventana anterior (Form)
    if (parentWidget()) {
        parentWidget()->show(); // Vuelve a mostrar la ventana principal
    }
}

