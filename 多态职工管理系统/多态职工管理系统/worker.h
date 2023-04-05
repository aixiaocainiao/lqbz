#pragma once
//纯虚函数构造出来的类 不能写实现 自然也就没有.cpp
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位职责
	virtual void getDeptName() = 0;


public:
	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};