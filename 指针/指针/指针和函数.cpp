#include <iostream>
using namespace std;
#include <string>
void swap(int a, int b);
void swap(int* a, int* b);
int main()
{
	int a = 10;
	int b = 15;
	//ֵ����
	/*swap(a, b);*/
	//ָ�봫��
	swap(&a, &b);

	/*cout << "ֵ���ݺ��a= " << a << endl;
	cout << "ֵ���ݺ��b= " << b << endl;*/
	cout << "ָ�봫�ݵ�a= " << a << endl;
	cout << "ָ�봫�ݵ�b= " << b << endl;






	system("pause");
	return 0;
}
//ֵ����
void swap(int a, int b)
{

	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "��ʱֵ���ݵ�a= " << a << endl;
	cout << "��ʱֵ���ݵ�b= " << b << endl;

}
//ָ�봫��
void swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

	cout << "��ʱ��ַ���ݵ�a= " << *a << endl;
	cout << "��ʱ��ַ���ݵ�b= " << *b << endl;

}
