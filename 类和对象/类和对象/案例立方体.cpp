#include <iostream>
#include <string>
using namespace std;
class Cube
{     //��Ϊ
public:
	void setM_L(double lon)
	{
		m_L = lon;
	}
	double getM_L()
	{
		return m_L;
	}
	void setM_W(double wid)
	{
		m_W = wid;
	}
	double getM_W()
	{
		return m_W;
	}
	void setM_H(double hig)
	{
		m_H = hig;
	}
	double getM_H()
	{
		return m_H;
	}
	// ����������
	double area()
	{
		return 2 * (m_L*m_H+ m_L *m_W + m_H* m_W);

	}
	
	//����������
	double volume()
	{
		return m_L * m_W * m_H;

	}
	//��Ա��������
	bool isSamebyclass(Cube &c)
	{
		if (m_L == c.getM_L() && m_H == c.getM_H() && m_W == c.getM_W())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// ����
private:
	double m_L;//�ɶ���д
	double m_W; // �ɶ���д
	double m_H; //�ɶ���д


};
//ȫ�ֺ����ж�
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getM_L() == c2.getM_L() && c1.getM_H() == c2.getM_H() && c1.getM_W() == c2.getM_W())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Cube c1;
	c1.setM_L(10);
	c1.setM_W(10);
	c1.setM_H(10);
	cout << "���Ϊ: " << c1.area();
	cout << "���Ϊ: " << c1.volume() << endl;

	Cube c2;
	c2.setM_L(10);
	c2.setM_W(10);
	c2.setM_H(10);
	

	//ȫ�ֺ�������
	bool ret = isSame(c1, c2);
	if (ret == 1)
	{
		cout << "ȫ�ֺ��������£� c1 �� c2 ��ͬ" << endl;
	}
	else
	{
		cout << "ȫ�ֺ��������£� c1 �� c2 ��ͬ" << endl;

	}

	//��Ա��������
	bool ref = c1.isSamebyclass(c2);//c1.isSamebyclass   
	if (ret == 1)
	{
		cout << "��Ա���������£� c1 �� c2 ��ͬ" << endl;
	}
	else
	{
		cout << "��Ա���������£� c1 �� c2 ��ͬ" << endl;

	}
	system("pause");
	return 0;
}