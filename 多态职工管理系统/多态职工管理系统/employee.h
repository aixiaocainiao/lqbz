//��ͨԱ���ļ�
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class Employee : public Worker
{
public:

	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λְ��
	virtual void getDeptName() = 0;



};