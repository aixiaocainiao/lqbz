#include "employee.h"

//���캯�� 
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}
//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ�����: " << this->m_Id << "\t";
	cout << "ְ������: " << this->m_Name << "\t";
	cout << "��λ: " << this->getDeptName() << "\t";
	cout << "��λְ����ɾ�������������" << endl;
}

//��ȡ��λ����
string Employee::getDeptName()
{
	return "Ա��";
	//������return string("Ա��");

}
