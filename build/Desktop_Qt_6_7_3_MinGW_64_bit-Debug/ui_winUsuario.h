/********************************************************************************
** Form generated from reading UI file 'winUsuario.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINUSUARIO_H
#define UI_WINUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formCuenta
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnSalir;
    QPushButton *btnEstCuenta;
    QPushButton *btnOp;

    void setupUi(QWidget *formCuenta)
    {
        if (formCuenta->objectName().isEmpty())
            formCuenta->setObjectName("formCuenta");
        formCuenta->resize(604, 356);
        gridLayoutWidget = new QWidget(formCuenta);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(110, 70, 365, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 0, 0);
        btnSalir = new QPushButton(gridLayoutWidget);
        btnSalir->setObjectName("btnSalir");
        QFont font;
        font.setPointSize(18);
        btnSalir->setFont(font);

        gridLayout->addWidget(btnSalir, 2, 0, 1, 1);

        btnEstCuenta = new QPushButton(gridLayoutWidget);
        btnEstCuenta->setObjectName("btnEstCuenta");
        btnEstCuenta->setFont(font);

        gridLayout->addWidget(btnEstCuenta, 0, 0, 1, 1);

        btnOp = new QPushButton(gridLayoutWidget);
        btnOp->setObjectName("btnOp");
        btnOp->setFont(font);

        gridLayout->addWidget(btnOp, 1, 0, 1, 1);


        retranslateUi(formCuenta);

        QMetaObject::connectSlotsByName(formCuenta);
    } // setupUi

    void retranslateUi(QWidget *formCuenta)
    {
        formCuenta->setWindowTitle(QCoreApplication::translate("formCuenta", "Form", nullptr));
        btnSalir->setText(QCoreApplication::translate("formCuenta", "Salir", nullptr));
        btnEstCuenta->setText(QCoreApplication::translate("formCuenta", "Solicitar Estado de Cuenta", nullptr));
        btnOp->setText(QCoreApplication::translate("formCuenta", "Realizar Operaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formCuenta: public Ui_formCuenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINUSUARIO_H
