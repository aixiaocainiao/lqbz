//#include <iostream>
//using namespace std;
//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ���ܸı�
//	const int* p = &a;
//	p = &b;
//	//const���ε��ǳ�����ָ��ָ�򲻿��Ը��ģ�ָ��ָ���ֵ���Ըı�
//	int* const p1 = &a;
//	*p1 = 50;//a��ֵ�Ѿ������˸ı�
//	//const �����γ���������ָ��
//	const int* const p2 = &a;
//	//�����ܸ���
//	int ary[] = { 1,2,3,4,5,6,7 };
//	int* p3 = ary;
//	cout << "��һ��Ԫ��" << ary[0] << endl;
//	cout << "ָ��ָ���һ��Ԫ��" << *p3 << endl;
//	for (int i = 0; i < 7; i++)
//	{
//
//		cout << *p3 << endl;
//		p3++;
//
//
//	}
//
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}