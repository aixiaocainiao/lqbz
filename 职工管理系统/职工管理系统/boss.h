#pragma once
// �ϰ��ļ�
#include <iostream>
#include <string>
using namespace std;
#include "worker.h"
class Boss : public Worker
{
public:

	//���캯�� 
	Boss(int id, string name, int dId);
	//��ʾ������Ϣ
	virtual void showInfo();//���麯��
	//��ȡ��λ����
	virtual string getDeptName();//���麯��


};