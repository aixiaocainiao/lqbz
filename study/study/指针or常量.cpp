//#include <iostream>
//#include <string>
//using namespace std;
////��ַ����
//void swap(int *a,int *b)
//{
//	int temp = *a;
//	*b = *a;
//	*a = temp;
//
//
//}
//int main()
//{
//
//
//	
//	/*
//		const����ָ�����������:
//			const����ָ�� ����ָ��
//			const���γ��� ָ�볣��
//			const�����γ��� ������ָ��
//	
//	 
//	*/
//	string str = "hello_world";
//	int a = 10;
//	int b = 20;
//	//const���ε���ָ��  ָ��ָ����Ըı� ָ��ָ���ֵ�����Ըı�
//	const int* p = &a;
//	p = &b;
//	cout << *p << endl;//��ȷ�� ָ����Ըı��
//
//	//const ���ε��ǳ��� ָ��ָ�򲻿��Ըı� ָ��ָ���ֵ���Ըı�
//	int* const p1 = &b;
//	*p1 = 50;
//	//p1 = &a; �����
//	//const ������ָ�� �����γ���
//	const int* const p2 = &b;
//	/*p2 = &a;
//	*p2 = 12;*/
//	swap(&a,&b);
//	system("pause");
//	return 0;
//}