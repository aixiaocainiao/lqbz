////���麯�� 
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص�
//	//1.�޷�ʵ��������
//	//2.����������࣬����Ҫ��д�����ֵĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//class Son : public Base {
//public:
//	virtual void func() {
//		cout << "Son func() �ĵ��� " << endl;
//	}
//};
//void test() {
//	
//	//Base b;  //1.�޷�ʵ��������
//	//new Base;//���������޷�ʵ��������
//	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������
//	Base* base = new Son;
//	base->func();
//	delete base;//�ǵ�����
//}
//int main()
//{
//
//	test();
//
//
//	system("pause");
//	return 0;
//}