#include "employee.h"

//构造函数 
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}
//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号: " << this->m_Id << "\t";
	cout << "职工姓名: " << this->m_Name << "\t";
	cout << "岗位: " << this->getDeptName() << "\t";
	cout << "岗位职责：完成经理交代给的任务" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
	return "员工";
	//或者是return string("员工");

}
