/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *ImgDes;
    QLabel *ImgOrg;
    QPushButton *RedetectButton;
    QPushButton *StartButton;
    QPushButton *ClearButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1328, 709);
        ImgDes = new QLabel(Dialog);
        ImgDes->setObjectName(QStringLiteral("ImgDes"));
        ImgDes->setGeometry(QRect(10, 20, 640, 480));
        ImgDes->setFrameShape(QFrame::Box);
        ImgOrg = new QLabel(Dialog);
        ImgOrg->setObjectName(QStringLiteral("ImgOrg"));
        ImgOrg->setGeometry(QRect(670, 20, 640, 480));
        ImgOrg->setFrameShape(QFrame::Box);
        RedetectButton = new QPushButton(Dialog);
        RedetectButton->setObjectName(QStringLiteral("RedetectButton"));
        RedetectButton->setGeometry(QRect(840, 550, 111, 51));
        StartButton = new QPushButton(Dialog);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(370, 550, 111, 51));
        ClearButton = new QPushButton(Dialog);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setGeometry(QRect(600, 550, 111, 51));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        ImgDes->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        ImgOrg->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        RedetectButton->setText(QApplication::translate("Dialog", "Redetect", Q_NULLPTR));
        StartButton->setText(QApplication::translate("Dialog", "Start", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("Dialog", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
