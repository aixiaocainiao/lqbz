#include <iostream>
#include <string>
using namespace std;
void showValue(const int& v)
{

	//v += 10��
	cout << v << endl;

}
int main()
{
	//int& ref = 10; ���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż����룬int temp = 10;const int &ref = temp;
	const int& ref = 10;
	//ref = 100;
	cout << ref << endl;
	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;

	showValue(a);

	system("pause");
	return 0;
}