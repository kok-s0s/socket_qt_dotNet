#pragma once

#include <QtWidgets/QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include "ui_ServerTcp.h"

class ServerTcp : public QMainWindow
{
	Q_OBJECT

public:
	ServerTcp(QWidget *parent = Q_NULLPTR);
	~ServerTcp();

private:
	Ui::ServerTcpClass				ui;							// UI 视图
	QTcpServer*						m_pTcpServer;				// Server 服务端
	QTcpSocket*						m_pTcpSocket;				// Socket 服务
	QMap<int, QString>				m_testTypesTable;			// 测试参数表
	int								m_testTypesCount;			// 测试参数表数量
	QString							m_currentTestItem;			// 当前测试参数的序列号

private slots:
	/**
	* @brief 服务端开始监听
	*/
	void on_btnListen_clicked();

	/**
	* @brief 中断测试，发送 pause 信息
	*/
	void on_btnTestStop_clicked();

	/**
	* @brief 重设服务器的监听端口号
	*/
	void on_btnSetPort_clicked();

	/**
	* @brief 建立新的通讯连接
	*/
	void server_New_Connect();

	/**
	* @brief 读取客户端发送的数据
	*/
	void socket_Read_Data();

	/**
	* @brief 中断通讯连接
	*/
	void socket_Disconnected();
};
