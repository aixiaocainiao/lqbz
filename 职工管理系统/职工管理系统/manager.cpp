#include "manager.h"

//���캯�� 
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}
//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ�����: " << this->m_Id << "\t";
	cout << "ְ������: " << this->m_Name << "\t";
	cout << "��λ: " << this->getDeptName() << "\t";
	cout << "��λְ������ϰ彻���������񣬲��·������Ա��" << endl;
}

//��ȡ��λ����
string Manager::getDeptName()
{
	return "����";
	//������return string("Ա��");

}