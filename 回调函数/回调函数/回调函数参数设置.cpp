#include <iostream>
#include <string>
using namespace std;
//��һ�ַ�ʽ ����
void zs(int a)
{

	cout << "a = " << a << "��Ҫ��������Ͷ�ڱ�� " << endl;

}
void ls(int a)
{

	cout << "a = " << a << "����һֱСС�� " << endl;

}
//void show(void (*pf)(int))
void show(void (*pf)(int),int b)
{

	cout << "���֮ǰ��׼������" << endl;
	//int b = 3;
	pf(b);
	cout << "���֮�����β�����Ѿ���� " << endl;

}
void test()
{
	show(zs, 3);
	show(ls, 4);
	//show(zs);
	//show(ls);

}
int main()
{

	test();

	system("pause");
	return 0;
}