#pragma once
//���麯������������� ����дʵ�� ��ȻҲ��û��.cpp
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λְ��
	virtual void getDeptName() = 0;


public:
	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};