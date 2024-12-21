#ifndef WINUSUARIO_H
#define WINUSUARIO_H

#include <QWidget>

namespace Ui {
class formCuenta;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_btnOp_clicked();

private:
    Ui::formCuenta *ui;
};

#endif // WINUSUARIO_H
