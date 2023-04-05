#include "manager.h"

//构造函数 
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}
//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号: " << this->m_Id << "\t";
	cout << "职工姓名: " << this->m_Name << "\t";
	cout << "岗位: " << this->getDeptName() << "\t";
	cout << "岗位职责：完成老板交代给的任务，并下发任务给员工" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{
	return "经理";
	//或者是return string("员工");

}