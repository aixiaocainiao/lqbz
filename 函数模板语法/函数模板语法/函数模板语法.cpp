#include <iostream>
#include <string>
using namespace std;
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
void swapDouble(double & a, double& b)
{
	double temp = a;
	a = b;
	b = temp;

}
//����ģ��
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;


}
void test()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);

	//���ú���ģ�彻��
	//���ַ�ʽʹ�ú���ģ��
	
	//1���Զ������Ƶ�
	//mySwap(a, b);

	//2����ʾָ������
	mySwap<int>(a, b);//int ָ����T������


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*double a = 10;
	double b = 20;
	swapDouble(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

}
int main()
{
	test();



	system("pause");
	return 0;



}