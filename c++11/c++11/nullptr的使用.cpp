////nullptrֻ�ܸ�ָ�븳ֵ
//#include <iostream>
//using namespace std;
//void func(int a)
//{
//
//	cout << __LINE__ << endl;
//
//}
////����
//void func(int* a)
//{
//
//	cout << __LINE__ << endl;
//
//}
//int main()
//{
//	int* p = NULL;
//	int* p1 = 0;//������һ����
//
//	func(0);//����ȷ��
//	func(NULL);//����ȷ��
//
//	//nullptrֻ�ܸ�ָ�븳ֵ
//	func(nullptr);//
//	int p = NULL;
//	int* p1 = 0;
//	 p1 = nullptr;
//	 if (p == p1)
//	 {
//		 cout << "һ��" << endl;
//	 }
//	 //int p2 = nullptr; ���� nullptr���ܸ�һ����ͨ���α���
//
//	system("pause");
//	return 0;
//}