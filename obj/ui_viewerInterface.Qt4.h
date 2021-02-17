/********************************************************************************
** Form generated from reading UI file 'viewerInterface.Qt4.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERINTERFACE_H
#define UI_VIEWERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "Viewer.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    Viewer *viewer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *tracesSpinBox;
    QLabel *label_2;
    QSpinBox *delaySpinBox;
    QCheckBox *axisCheckBox;
    QLabel *label_3;
    QSpinBox *sphereSizeSpinBox;
    QLabel *label_4;
    QSpinBox *axisSizeSpinBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *portButton;
    QPushButton *pauseButton;
    QPushButton *clearButton;
    QPushButton *stereoButton;
    QSpacerItem *spacerItem;
    QPushButton *aboutButton;
    QPushButton *quitButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(753, 475);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        viewer = new Viewer(Dialog);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(viewer->sizePolicy().hasHeightForWidth());
        viewer->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(viewer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        tracesSpinBox = new QSpinBox(Dialog);
        tracesSpinBox->setObjectName(QString::fromUtf8("tracesSpinBox"));
        tracesSpinBox->setMinimum(1);
        tracesSpinBox->setMaximum(1500);
        tracesSpinBox->setValue(10);

        horizontalLayout_2->addWidget(tracesSpinBox);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        delaySpinBox = new QSpinBox(Dialog);
        delaySpinBox->setObjectName(QString::fromUtf8("delaySpinBox"));
        delaySpinBox->setMaximum(500);

        horizontalLayout_2->addWidget(delaySpinBox);

        axisCheckBox = new QCheckBox(Dialog);
        axisCheckBox->setObjectName(QString::fromUtf8("axisCheckBox"));
        axisCheckBox->setEnabled(true);
        axisCheckBox->setLayoutDirection(Qt::RightToLeft);
        axisCheckBox->setChecked(false);

        horizontalLayout_2->addWidget(axisCheckBox);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        sphereSizeSpinBox = new QSpinBox(Dialog);
        sphereSizeSpinBox->setObjectName(QString::fromUtf8("sphereSizeSpinBox"));
        sphereSizeSpinBox->setMinimum(1);
        sphereSizeSpinBox->setMaximum(1000);
        sphereSizeSpinBox->setValue(10);

        horizontalLayout_2->addWidget(sphereSizeSpinBox);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        axisSizeSpinBox = new QSpinBox(Dialog);
        axisSizeSpinBox->setObjectName(QString::fromUtf8("axisSizeSpinBox"));
        axisSizeSpinBox->setEnabled(true);
        axisSizeSpinBox->setMinimum(1);
        axisSizeSpinBox->setMaximum(1000);
        axisSizeSpinBox->setValue(99);

        horizontalLayout_2->addWidget(axisSizeSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        portButton = new QPushButton(Dialog);
        portButton->setObjectName(QString::fromUtf8("portButton"));

        horizontalLayout->addWidget(portButton);

        pauseButton = new QPushButton(Dialog);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setCheckable(true);
        pauseButton->setChecked(true);

        horizontalLayout->addWidget(pauseButton);

        clearButton = new QPushButton(Dialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout->addWidget(clearButton);

        stereoButton = new QPushButton(Dialog);
        stereoButton->setObjectName(QString::fromUtf8("stereoButton"));
        stereoButton->setCheckable(false);

        horizontalLayout->addWidget(stereoButton);

        spacerItem = new QSpacerItem(141, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        aboutButton = new QPushButton(Dialog);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));

        horizontalLayout->addWidget(aboutButton);

        quitButton = new QPushButton(Dialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);
        QObject::connect(axisCheckBox, SIGNAL(toggled(bool)), viewer, SLOT(setAxisDrawing(bool)));
        QObject::connect(axisSizeSpinBox, SIGNAL(valueChanged(int)), viewer, SLOT(axisSizeChanged(int)));
        QObject::connect(stereoButton, SIGNAL(clicked()), viewer, SLOT(showStereoDialog()));
        QObject::connect(portButton, SIGNAL(clicked()), viewer, SLOT(changePort()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "DTracking (SRV Centre Image)", nullptr));
        label->setText(QApplication::translate("Dialog", "Traces", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Delay", nullptr));
        axisCheckBox->setText(QApplication::translate("Dialog", "Axis", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Sphere size", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Axis size", nullptr));
        portButton->setText(QApplication::translate("Dialog", "Port", nullptr));
        pauseButton->setText(QApplication::translate("Dialog", "Pause", nullptr));
        clearButton->setText(QApplication::translate("Dialog", "Clear", nullptr));
        stereoButton->setText(QApplication::translate("Dialog", "Stereo...", nullptr));
        aboutButton->setText(QApplication::translate("Dialog", "About...", nullptr));
        quitButton->setText(QApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERINTERFACE_H
