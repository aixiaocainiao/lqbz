#pragma once
//�������ļ�
#include <iostream>
#include <string>
using namespace std;
#include "worker.h"
class Manager : public Worker
{
public:

	//���캯�� 
	Manager(int id, string name, int dId);
	//��ʾ������Ϣ
	virtual void showInfo();//���麯��
	//��ȡ��λ����
	virtual string getDeptName();//���麯��


};