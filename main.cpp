#include <QApplication>
#include "VentanaPrincipal.h"
#include "BaseDeDatos.h"
#include "winUsuario.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Cargar la base de datos desde el archivo CSV
    BaseDeDatos::getInstance()->cargarClientes("csv/clientes.csv");

    // Crear e iniciar la ventana principal
    Form ventana;
    ventana.show();

    return app.exec();
}
