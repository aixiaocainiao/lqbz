#include "boss.h"

//���캯�� 
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}
//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ�����: " << this->m_Id << "\t";
	cout << "ְ������: " << this->m_Name << "\t";
	cout << "��λ: " << this->getDeptName() << "\t";
	cout << "��λְ�𣺹���˾���е�����" << endl;
}

//��ȡ��λ����
string Boss::getDeptName()
{
	return "�ϰ�";
	//������return string("Ա��");

}
