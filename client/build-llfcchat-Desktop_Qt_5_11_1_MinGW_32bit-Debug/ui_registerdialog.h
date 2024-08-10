/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <timerbtn.h>
#include "clickedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_label;
    QLineEdit *pass_edit;
    ClickedLabel *pass_visible;
    QHBoxLayout *horizontalLayout_5;
    QLabel *confirm_label;
    QLineEdit *confirm_edit;
    ClickedLabel *confirm_visible;
    QHBoxLayout *horizontalLayout_6;
    QLabel *varify_label;
    QLineEdit *varify_edit;
    TimerBtn *get_code;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *sure_btn;
    QPushButton *cancel_btn;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QLabel *tip_lb;
    QLabel *tip2_lb;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *return_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        err_tip = new QLabel(widget);
        err_tip->setObjectName(QStringLiteral("err_tip"));
        err_tip->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(err_tip);


        verticalLayout_3->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        user_label = new QLabel(page);
        user_label->setObjectName(QStringLiteral("user_label"));
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(page);
        user_edit->setObjectName(QStringLiteral("user_edit"));
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        email_label = new QLabel(page);
        email_label->setObjectName(QStringLiteral("email_label"));
        email_label->setMinimumSize(QSize(0, 25));
        email_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(email_label);

        email_edit = new QLineEdit(page);
        email_edit->setObjectName(QStringLiteral("email_edit"));
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(email_edit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pass_label = new QLabel(page);
        pass_label->setObjectName(QStringLiteral("pass_label"));
        pass_label->setMinimumSize(QSize(0, 25));
        pass_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(pass_label);

        pass_edit = new QLineEdit(page);
        pass_edit->setObjectName(QStringLiteral("pass_edit"));
        pass_edit->setMinimumSize(QSize(0, 25));
        pass_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(pass_edit);

        pass_visible = new ClickedLabel(page);
        pass_visible->setObjectName(QStringLiteral("pass_visible"));
        pass_visible->setMinimumSize(QSize(20, 20));
        pass_visible->setMaximumSize(QSize(20, 20));
        pass_visible->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pass_visible);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        confirm_label = new QLabel(page);
        confirm_label->setObjectName(QStringLiteral("confirm_label"));
        confirm_label->setMinimumSize(QSize(0, 25));
        confirm_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(confirm_label);

        confirm_edit = new QLineEdit(page);
        confirm_edit->setObjectName(QStringLiteral("confirm_edit"));
        confirm_edit->setMinimumSize(QSize(0, 25));
        confirm_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(confirm_edit);

        confirm_visible = new ClickedLabel(page);
        confirm_visible->setObjectName(QStringLiteral("confirm_visible"));
        confirm_visible->setMinimumSize(QSize(20, 20));
        confirm_visible->setMaximumSize(QSize(20, 20));
        confirm_visible->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(confirm_visible);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        varify_label = new QLabel(page);
        varify_label->setObjectName(QStringLiteral("varify_label"));
        varify_label->setMinimumSize(QSize(0, 25));
        varify_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_label);

        varify_edit = new QLineEdit(page);
        varify_edit->setObjectName(QStringLiteral("varify_edit"));
        varify_edit->setMinimumSize(QSize(0, 25));
        varify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_edit);

        get_code = new TimerBtn(page);
        get_code->setObjectName(QStringLiteral("get_code"));
        get_code->setMinimumSize(QSize(0, 25));
        get_code->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(get_code);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        sure_btn = new QPushButton(page);
        sure_btn->setObjectName(QStringLiteral("sure_btn"));
        sure_btn->setMinimumSize(QSize(0, 25));
        sure_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(sure_btn);

        cancel_btn = new QPushButton(page);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));
        cancel_btn->setMinimumSize(QSize(0, 25));
        cancel_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(cancel_btn);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        tip_lb = new QLabel(page_2);
        tip_lb->setObjectName(QStringLiteral("tip_lb"));
        tip_lb->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(tip_lb);

        tip2_lb = new QLabel(page_2);
        tip2_lb->setObjectName(QStringLiteral("tip2_lb"));
        tip2_lb->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(tip2_lb);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        return_btn = new QPushButton(widget_2);
        return_btn->setObjectName(QStringLiteral("return_btn"));
        return_btn->setMinimumSize(QSize(0, 25));
        return_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(return_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(widget_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", nullptr));
        err_tip->setText(QApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QApplication::translate("RegisterDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        email_label->setText(QApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_label->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        pass_visible->setText(QString());
        confirm_label->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\357\274\232", nullptr));
        confirm_visible->setText(QString());
        varify_label->setText(QApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        get_code->setText(QApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        sure_btn->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
        tip_lb->setText(QApplication::translate("RegisterDialog", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\2145 s\345\220\216\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        tip2_lb->setText(QApplication::translate("RegisterDialog", "\345\217\257\347\202\271\345\207\273\350\277\224\345\233\236\346\214\211\351\222\256\347\233\264\346\216\245\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        return_btn->setText(QApplication::translate("RegisterDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
