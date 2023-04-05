//普通员工文件
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class Employee : public Worker
{
public:

	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位职责
	virtual void getDeptName() = 0;



};