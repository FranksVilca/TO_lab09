/********************************************************************************
** Form generated from reading UI file 'winoperacion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINOPERACION_H
#define UI_WINOPERACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winOperacion
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QComboBox *comboCuenta;
    QComboBox *comboOp;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QTextEdit *textEdit;
    QPushButton *btnConfirmar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *winOperacion)
    {
        if (winOperacion->objectName().isEmpty())
            winOperacion->setObjectName("winOperacion");
        winOperacion->resize(577, 399);
        formLayoutWidget = new QWidget(winOperacion);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 60, 471, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(100);
        formLayout->setContentsMargins(0, 0, 0, 0);
        comboCuenta = new QComboBox(formLayoutWidget);
        comboCuenta->setObjectName("comboCuenta");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboCuenta);

        comboOp = new QComboBox(formLayoutWidget);
        comboOp->addItem(QString());
        comboOp->addItem(QString());
        comboOp->addItem(QString());
        comboOp->setObjectName("comboOp");

        formLayout->setWidget(1, QFormLayout::FieldRole, comboOp);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        frame = new QFrame(winOperacion);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 150, 471, 161));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 471, 153));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(30);
        gridLayout->setContentsMargins(-1, -1, 11, -1);
        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        btnConfirmar = new QPushButton(winOperacion);
        btnConfirmar->setObjectName("btnConfirmar");
        btnConfirmar->setGeometry(QRect(190, 330, 83, 29));
        btnCancelar = new QPushButton(winOperacion);
        btnCancelar->setObjectName("btnCancelar");
        btnCancelar->setGeometry(QRect(290, 330, 83, 29));

        retranslateUi(winOperacion);

        QMetaObject::connectSlotsByName(winOperacion);
    } // setupUi

    void retranslateUi(QDialog *winOperacion)
    {
        winOperacion->setWindowTitle(QCoreApplication::translate("winOperacion", "Dialog", nullptr));
        comboOp->setItemText(0, QCoreApplication::translate("winOperacion", "-Seleccionar-", nullptr));
        comboOp->setItemText(1, QCoreApplication::translate("winOperacion", "Deposito", nullptr));
        comboOp->setItemText(2, QCoreApplication::translate("winOperacion", "Retiro", nullptr));

        label_2->setText(QCoreApplication::translate("winOperacion", "Cuenta", nullptr));
        label_3->setText(QCoreApplication::translate("winOperacion", "Operacion", nullptr));
        label->setText(QCoreApplication::translate("winOperacion", "Monto", nullptr));
        label_4->setText(QCoreApplication::translate("winOperacion", "Tipo", nullptr));
        label_5->setText(QCoreApplication::translate("winOperacion", "Descripcion", nullptr));
        btnConfirmar->setText(QCoreApplication::translate("winOperacion", "Confirmar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("winOperacion", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winOperacion: public Ui_winOperacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINOPERACION_H
