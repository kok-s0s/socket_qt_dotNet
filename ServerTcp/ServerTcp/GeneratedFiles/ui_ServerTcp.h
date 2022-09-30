/********************************************************************************
** Form generated from reading UI file 'ServerTcp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERTCP_H
#define UI_SERVERTCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerTcpClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *ALL;
    QHBoxLayout *TOP;
    QVBoxLayout *INFO;
    QHBoxLayout *IP;
    QLabel *label_IP;
    QSpacerItem *horizontalSpacer_IP;
    QLabel *ipAddress;
    QHBoxLayout *PORT;
    QLabel *label_Port;
    QSpacerItem *horizontalSpacer_PORT;
    QLineEdit *lineEditPort;
    QFrame *line_INFO_SetPort;
    QVBoxLayout *verticalLayout_SetPort;
    QPushButton *btnSetPort;
    QFrame *line_TOP_BOTTOM;
    QVBoxLayout *BOTTOM;
    QHBoxLayout *CONNECT;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnListen;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTestStop;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *DATA;
    QHBoxLayout *GET;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_CNUM;
    QSpacerItem *horizontalSpacer_CNUM;
    QLineEdit *textEdit_Recv;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *POST;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_PSTR;
    QSpacerItem *horizontalSpacer_PSTR;
    QLineEdit *textEdit_Send;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QMainWindow *ServerTcpClass)
    {
        if (ServerTcpClass->objectName().isEmpty())
            ServerTcpClass->setObjectName(QString::fromUtf8("ServerTcpClass"));
        ServerTcpClass->resize(315, 264);
        ServerTcpClass->setMinimumSize(QSize(315, 264));
        ServerTcpClass->setMaximumSize(QSize(16666666, 16666666));
        QFont font;
        font.setPointSize(9);
        ServerTcpClass->setFont(font);
        centralWidget = new QWidget(ServerTcpClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 313, 263));
        groupBox->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 313, 263));
        ALL = new QVBoxLayout(verticalLayoutWidget_3);
        ALL->setSpacing(6);
        ALL->setContentsMargins(11, 11, 11, 11);
        ALL->setObjectName(QString::fromUtf8("ALL"));
        ALL->setContentsMargins(8, 8, 8, 8);
        TOP = new QHBoxLayout();
        TOP->setSpacing(6);
        TOP->setObjectName(QString::fromUtf8("TOP"));
        INFO = new QVBoxLayout();
        INFO->setSpacing(6);
        INFO->setObjectName(QString::fromUtf8("INFO"));
        INFO->setContentsMargins(16, -1, 8, -1);
        IP = new QHBoxLayout();
        IP->setSpacing(6);
        IP->setObjectName(QString::fromUtf8("IP"));
        label_IP = new QLabel(verticalLayoutWidget_3);
        label_IP->setObjectName(QString::fromUtf8("label_IP"));
        label_IP->setMinimumSize(QSize(20, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("3270Narrow Nerd Font Mono"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_IP->setFont(font2);
        label_IP->setLineWidth(0);
        label_IP->setAlignment(Qt::AlignCenter);

        IP->addWidget(label_IP);

        horizontalSpacer_IP = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        IP->addItem(horizontalSpacer_IP);

        ipAddress = new QLabel(verticalLayoutWidget_3);
        ipAddress->setObjectName(QString::fromUtf8("ipAddress"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("agave Nerd Font"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        ipAddress->setFont(font3);
        ipAddress->setAlignment(Qt::AlignCenter);

        IP->addWidget(ipAddress);


        INFO->addLayout(IP);

        PORT = new QHBoxLayout();
        PORT->setSpacing(8);
        PORT->setObjectName(QString::fromUtf8("PORT"));
        label_Port = new QLabel(verticalLayoutWidget_3);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));
        label_Port->setMinimumSize(QSize(40, 35));
        label_Port->setFont(font2);
        label_Port->setLineWidth(0);
        label_Port->setAlignment(Qt::AlignCenter);

        PORT->addWidget(label_Port);

        horizontalSpacer_PORT = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        PORT->addItem(horizontalSpacer_PORT);

        lineEditPort = new QLineEdit(verticalLayoutWidget_3);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setMaximumSize(QSize(70, 16777215));
        lineEditPort->setFont(font3);
        lineEditPort->setAlignment(Qt::AlignCenter);

        PORT->addWidget(lineEditPort);


        INFO->addLayout(PORT);


        TOP->addLayout(INFO);

        line_INFO_SetPort = new QFrame(verticalLayoutWidget_3);
        line_INFO_SetPort->setObjectName(QString::fromUtf8("line_INFO_SetPort"));
        line_INFO_SetPort->setMinimumSize(QSize(8, 0));
        line_INFO_SetPort->setFrameShape(QFrame::VLine);
        line_INFO_SetPort->setFrameShadow(QFrame::Sunken);

        TOP->addWidget(line_INFO_SetPort);

        verticalLayout_SetPort = new QVBoxLayout();
        verticalLayout_SetPort->setSpacing(6);
        verticalLayout_SetPort->setObjectName(QString::fromUtf8("verticalLayout_SetPort"));
        verticalLayout_SetPort->setContentsMargins(8, -1, 8, -1);
        btnSetPort = new QPushButton(verticalLayoutWidget_3);
        btnSetPort->setObjectName(QString::fromUtf8("btnSetPort"));
        btnSetPort->setMinimumSize(QSize(80, 30));
        btnSetPort->setFont(font1);

        verticalLayout_SetPort->addWidget(btnSetPort);


        TOP->addLayout(verticalLayout_SetPort);


        ALL->addLayout(TOP);

        line_TOP_BOTTOM = new QFrame(verticalLayoutWidget_3);
        line_TOP_BOTTOM->setObjectName(QString::fromUtf8("line_TOP_BOTTOM"));
        line_TOP_BOTTOM->setMinimumSize(QSize(0, 8));
        line_TOP_BOTTOM->setFrameShape(QFrame::HLine);
        line_TOP_BOTTOM->setFrameShadow(QFrame::Sunken);

        ALL->addWidget(line_TOP_BOTTOM);

        BOTTOM = new QVBoxLayout();
        BOTTOM->setSpacing(6);
        BOTTOM->setObjectName(QString::fromUtf8("BOTTOM"));
        CONNECT = new QHBoxLayout();
        CONNECT->setSpacing(6);
        CONNECT->setObjectName(QString::fromUtf8("CONNECT"));
        CONNECT->setContentsMargins(-1, -1, -1, 8);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CONNECT->addItem(horizontalSpacer_2);

        btnListen = new QPushButton(verticalLayoutWidget_3);
        btnListen->setObjectName(QString::fromUtf8("btnListen"));
        btnListen->setMinimumSize(QSize(136, 40));
        btnListen->setFont(font1);

        CONNECT->addWidget(btnListen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CONNECT->addItem(horizontalSpacer);

        btnTestStop = new QPushButton(verticalLayoutWidget_3);
        btnTestStop->setObjectName(QString::fromUtf8("btnTestStop"));
        btnTestStop->setMinimumSize(QSize(110, 40));
        QFont font4;
        font4.setPointSize(12);
        btnTestStop->setFont(font4);

        CONNECT->addWidget(btnTestStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CONNECT->addItem(horizontalSpacer_3);


        BOTTOM->addLayout(CONNECT);

        DATA = new QVBoxLayout();
        DATA->setSpacing(6);
        DATA->setObjectName(QString::fromUtf8("DATA"));
        GET = new QHBoxLayout();
        GET->setSpacing(6);
        GET->setObjectName(QString::fromUtf8("GET"));
        GET->setContentsMargins(-1, -1, -1, 8);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GET->addItem(horizontalSpacer_4);

        label_CNUM = new QLabel(verticalLayoutWidget_3);
        label_CNUM->setObjectName(QString::fromUtf8("label_CNUM"));
        label_CNUM->setFont(font1);

        GET->addWidget(label_CNUM);

        horizontalSpacer_CNUM = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GET->addItem(horizontalSpacer_CNUM);

        textEdit_Recv = new QLineEdit(verticalLayoutWidget_3);
        textEdit_Recv->setObjectName(QString::fromUtf8("textEdit_Recv"));
        textEdit_Recv->setMinimumSize(QSize(150, 25));
        textEdit_Recv->setMaximumSize(QSize(40, 25));
        textEdit_Recv->setAlignment(Qt::AlignCenter);
        textEdit_Recv->setReadOnly(false);

        GET->addWidget(textEdit_Recv);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GET->addItem(horizontalSpacer_5);


        DATA->addLayout(GET);

        POST = new QHBoxLayout();
        POST->setSpacing(6);
        POST->setObjectName(QString::fromUtf8("POST"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        POST->addItem(horizontalSpacer_6);

        label_PSTR = new QLabel(verticalLayoutWidget_3);
        label_PSTR->setObjectName(QString::fromUtf8("label_PSTR"));
        label_PSTR->setFont(font1);

        POST->addWidget(label_PSTR);

        horizontalSpacer_PSTR = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        POST->addItem(horizontalSpacer_PSTR);

        textEdit_Send = new QLineEdit(verticalLayoutWidget_3);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));
        textEdit_Send->setMinimumSize(QSize(150, 25));
        textEdit_Send->setMaximumSize(QSize(150, 25));
        textEdit_Send->setAlignment(Qt::AlignCenter);

        POST->addWidget(textEdit_Send);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        POST->addItem(horizontalSpacer_7);


        DATA->addLayout(POST);


        BOTTOM->addLayout(DATA);


        ALL->addLayout(BOTTOM);

        ServerTcpClass->setCentralWidget(centralWidget);

        retranslateUi(ServerTcpClass);

        QMetaObject::connectSlotsByName(ServerTcpClass);
    } // setupUi

    void retranslateUi(QMainWindow *ServerTcpClass)
    {
        ServerTcpClass->setWindowTitle(QCoreApplication::translate("ServerTcpClass", "ServerTcp", nullptr));
        groupBox->setTitle(QString());
        label_IP->setText(QCoreApplication::translate("ServerTcpClass", "IP", nullptr));
        ipAddress->setText(QCoreApplication::translate("ServerTcpClass", "192.168.233.233", nullptr));
        label_Port->setText(QCoreApplication::translate("ServerTcpClass", "PORT", nullptr));
        lineEditPort->setText(QCoreApplication::translate("ServerTcpClass", "88", nullptr));
        btnSetPort->setText(QCoreApplication::translate("ServerTcpClass", "Modify", nullptr));
        btnListen->setText(QCoreApplication::translate("ServerTcpClass", "Start Listening", nullptr));
        btnTestStop->setText(QCoreApplication::translate("ServerTcpClass", "Test Paused", nullptr));
        label_CNUM->setText(QCoreApplication::translate("ServerTcpClass", "control number", nullptr));
        label_PSTR->setText(QCoreApplication::translate("ServerTcpClass", "parameter list", nullptr));
        textEdit_Send->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ServerTcpClass: public Ui_ServerTcpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERTCP_H
