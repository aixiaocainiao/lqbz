//#include <iostream>
//using namespace std;
////���ؾֲ���������
//int& test01()
//{
//	static int a = 10;//�ֲ����� ����ڶ��У�ֻ��ʹ��һ��
//	return a;
//
//}
//int& test02()
//{
//	static int a = 10;
//	return a;
//
//}
//int main()
//{
//	int& ref = test01();
//	cout << "ref��ֵΪ: " << ref << endl;
//	//cout << "ref��ֵΪ: " << ref << endl;//�����ֵ���Ե�
//
//
//	int& ref1 = test02();
//
//	test02() = 20;
//	cout << "ref1��ֵΪ: " << ref1 << endl;
//
//
//
//	system("pause");
//	return 0;
//}