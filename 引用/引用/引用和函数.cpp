//#include <iostream>
//using namespace std;
//
////1. ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2. ��ַ����
//void mySwap02(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////���ô���
//void mySwap(int& a,int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
////д����ʽ��ֵ���ݵ���ʽһ��
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	mySwap01(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap02(&a, &b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	system("pause");
//
//	return 0;
//}
////�ܽ᣺ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������