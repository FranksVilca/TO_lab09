#ifndef WINOPERACION_H
#define WINOPERACION_H

#include <QDialog>

namespace Ui {
class winOperacion;
}

class winOperacion : public QDialog
{
    Q_OBJECT

public:
    explicit winOperacion(QWidget *parent = nullptr);
    ~winOperacion();

private slots:
    void on_btnConfirmar_accepted();

    void on_btnCancelar_clicked();

private:
    Ui::winOperacion *ui;
};

#endif // WINOPERACION_H
