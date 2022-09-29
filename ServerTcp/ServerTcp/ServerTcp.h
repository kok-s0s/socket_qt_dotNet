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
	Ui::ServerTcpClass				ui;							// UI ��ͼ
	QTcpServer*						m_pTcpServer;				// Server �����
	QTcpSocket*						m_pTcpSocket;				// Socket ����
	QMap<int, QString>				m_testTypesTable;			// ���Բ�����
	int								m_testTypesCount;			// ���Բ���������
	QString							m_currentTestItem;			// ��ǰ���Բ��������к�

private slots:
	/**
	* @brief ����˿�ʼ����
	*/
	void on_btnListen_clicked();

	/**
	* @brief �жϲ��ԣ����� pause ��Ϣ
	*/
	void on_btnTestStop_clicked();

	/**
	* @brief ����������ļ����˿ں�
	*/
	void on_btnSetPort_clicked();

	/**
	* @brief �����µ�ͨѶ����
	*/
	void server_New_Connect();

	/**
	* @brief ��ȡ�ͻ��˷��͵�����
	*/
	void socket_Read_Data();

	/**
	* @brief �ж�ͨѶ����
	*/
	void socket_Disconnected();
};
