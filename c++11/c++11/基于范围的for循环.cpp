//#include <iostream>
//using namespace std;
////void func(int *a)��� �β��е����鲻������ ����ָ��������޷�ȷ��Ԫ�ظ���
//void func(int a[])  
//{
//	//���ڷ�Χ��forѭ���������ΧҪȷ�������ʹ��
//	for (auto tmp : a)//���
//	{
//		cout << tmp << endl;
//	}
//
//}
//int main()
//{
//	int a[]{ 1,2,3,4,5 };
//	int b = sizeof(a) / sizeof(*a);//Ԫ�ظ���
//	//1.
//#if 0
//	//ֵ���� 
//	for (int i = 0; i < b; i++)
//	{
//		int tmp = a[i];
//		cout << tmp << " , ";
//
//	}
//	cout << endl;
//
//	for (int tmp : a)
//	{
//		cout << tmp << " , ";
//
//	}
//	cout << endl;
//#endif
//	//���� ���Ըı���ֵ��
//	for (int i = 0; i < b; i++)
//	{
//		int& tmp = a[i];
//		tmp *= 2;
//		cout << tmp << ",";
//
//	}
//	cout << endl;
//	for (int& tmp : a)
//	{
//		tmp *= 2;
//		cout << tmp << ",";
//
//	}
//	cout << endl;
//
//	func(a);
//	system("pause");
//	return 0;
//}