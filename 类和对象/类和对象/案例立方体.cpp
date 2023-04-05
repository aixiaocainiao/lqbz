#include <iostream>
#include <string>
using namespace std;
class Cube
{     //行为
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
	// 立方体的面积
	double area()
	{
		return 2 * (m_L*m_H+ m_L *m_W + m_H* m_W);

	}
	
	//立方体的体积
	double volume()
	{
		return m_L * m_W * m_H;

	}
	//成员函数调用
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

	// 属性
private:
	double m_L;//可读可写
	double m_W; // 可读可写
	double m_H; //可读可写


};
//全局函数判定
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
	cout << "面积为: " << c1.area();
	cout << "体积为: " << c1.volume() << endl;

	Cube c2;
	c2.setM_L(10);
	c2.setM_W(10);
	c2.setM_H(10);
	

	//全局函数调用
	bool ret = isSame(c1, c2);
	if (ret == 1)
	{
		cout << "全局函数调用下： c1 和 c2 相同" << endl;
	}
	else
	{
		cout << "全局函数调用下： c1 和 c2 不同" << endl;

	}

	//成员函数调用
	bool ref = c1.isSamebyclass(c2);//c1.isSamebyclass   
	if (ret == 1)
	{
		cout << "成员函数调用下： c1 和 c2 相同" << endl;
	}
	else
	{
		cout << "成员函数调用下： c1 和 c2 不同" << endl;

	}
	system("pause");
	return 0;
}