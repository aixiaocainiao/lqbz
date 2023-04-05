////空指针访问成员函数
//#include <iostream>
//using namespace std;
//class Person {
//public:
//	void show() {
//		cout << "这是一个函数" << endl;
//	}
//	void maker()
//	{
//		if (this == NULL) {
//			return;
//		}
//		//cout << "年纪为: " << this->m_age << endl;
//		cout << "年纪为: " << m_age << endl;//相当于this->m_age this为空指针无法正常打印输出
//	}
//
//
//
//
//public:
//	int m_age;
//
//
//};
//void test()
//{
//	Person* p = NULL;
//	p->show();
//	//p->maker();
//	p->maker();
//
//
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