/********************************************************************************
** Form generated from reading UI file 'stereo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREO_H
#define UI_STEREO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StereoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *cbStereo;
    QLabel *label;
    QDoubleSpinBox *sbIODistance;
    QLabel *label_3;
    QDoubleSpinBox *sbScreenWidth;
    QLabel *label_2;
    QDoubleSpinBox *sbScreenDistance;
    QLabel *label_4;
    QDoubleSpinBox *sbFocal;

    void setupUi(QDialog *StereoDialog)
    {
        if (StereoDialog->objectName().isEmpty())
            StereoDialog->setObjectName(QString::fromUtf8("StereoDialog"));
        StereoDialog->resize(305, 167);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StereoDialog->sizePolicy().hasHeightForWidth());
        StereoDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(StereoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbStereo = new QCheckBox(StereoDialog);
        cbStereo->setObjectName(QString::fromUtf8("cbStereo"));
        cbStereo->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(cbStereo, 0, 0, 1, 1);

        label = new QLabel(StereoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        sbIODistance = new QDoubleSpinBox(StereoDialog);
        sbIODistance->setObjectName(QString::fromUtf8("sbIODistance"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sbIODistance->sizePolicy().hasHeightForWidth());
        sbIODistance->setSizePolicy(sizePolicy1);
        sbIODistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbIODistance->setValue(6.200000000000000);
        sbIODistance->setDecimals(1);
        sbIODistance->setSingleStep(0.100000000000000);

        gridLayout->addWidget(sbIODistance, 1, 1, 1, 1);

        label_3 = new QLabel(StereoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sbScreenWidth = new QDoubleSpinBox(StereoDialog);
        sbScreenWidth->setObjectName(QString::fromUtf8("sbScreenWidth"));
        sizePolicy1.setHeightForWidth(sbScreenWidth->sizePolicy().hasHeightForWidth());
        sbScreenWidth->setSizePolicy(sizePolicy1);
        sbScreenWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScreenWidth->setValue(0.400000000000000);
        sbScreenWidth->setSingleStep(0.010000000000000);

        gridLayout->addWidget(sbScreenWidth, 2, 1, 1, 1);

        label_2 = new QLabel(StereoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        sbScreenDistance = new QDoubleSpinBox(StereoDialog);
        sbScreenDistance->setObjectName(QString::fromUtf8("sbScreenDistance"));
        sizePolicy1.setHeightForWidth(sbScreenDistance->sizePolicy().hasHeightForWidth());
        sbScreenDistance->setSizePolicy(sizePolicy1);
        sbScreenDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScreenDistance->setValue(0.500000000000000);
        sbScreenDistance->setSingleStep(0.010000000000000);

        gridLayout->addWidget(sbScreenDistance, 3, 1, 1, 1);

        label_4 = new QLabel(StereoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        sbFocal = new QDoubleSpinBox(StereoDialog);
        sbFocal->setObjectName(QString::fromUtf8("sbFocal"));
        sbFocal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbFocal->setValue(99.989999999999995);
        sbFocal->setDecimals(2);
        sbFocal->setMaximum(99000.000000000000000);

        gridLayout->addWidget(sbFocal, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(StereoDialog);

        QMetaObject::connectSlotsByName(StereoDialog);
    } // setupUi

    void retranslateUi(QDialog *StereoDialog)
    {
        StereoDialog->setWindowTitle(QApplication::translate("StereoDialog", "R\303\251glages st\303\251r\303\251o", nullptr));
        cbStereo->setText(QApplication::translate("StereoDialog", "Stereo enabled", nullptr));
        label->setText(QApplication::translate("StereoDialog", "Interocular distance (cm)", nullptr));
        label_3->setText(QApplication::translate("StereoDialog", "Screen width (m)", nullptr));
        label_2->setText(QApplication::translate("StereoDialog", "Distance to screen (m)", nullptr));
        label_4->setText(QApplication::translate("StereoDialog", "Focal distance (OpenGL units)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StereoDialog: public Ui_StereoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREO_H
