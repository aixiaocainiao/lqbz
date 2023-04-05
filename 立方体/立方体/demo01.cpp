#include <iostream>
using namespace std;
#include "string"
class Person
{

public:
	//静态成员变量 类内声明类外初始化
	static int m_A; //静态成员变量 

	//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据

private:
	static int m_B; //静态成员变量也是有访问权限的
};
//类外初始化
int Person::m_A = 50;
int Person::m_B = 20;

void test01()
{
	//静态成员变量两种访问方式

	//1、通过对象
	Person p1;
	p1.m_A = 100;
	//Person p2;
	//p2.m_B = 10;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	//重点  所有对象共享一份数据 一个对象去改变数据 所有对象调用时都会使用调用后的数据

	cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据
	cout << "p2.m_A = " << p2.m_A << endl;

	//2、通过类名
	cout << "m_A = " << Person::m_A << endl;


	//cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
}

int main() {

	test01();

	system("pause");

	return 0;
}