//#include <iostream>
//using namespace std;
//class Animal {
//public:
//	int m_age;
//};
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
//class Sheep : virtual public Animal
//{
//
//};
//class Tuo : virtual public Animal
//{
//
//};
//class SheeoTuo : public Sheep, public Tuo
//{
//
//};
//void test() {
//	SheeoTuo st;
//	st.Sheep::m_age = 100;
//	st.Tuo::m_age = 200;
//	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分
//	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
//	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
//	cout << "st.m_age = " << st.m_age << endl;
//	//这份数据我们知道，只要有一份就可以，菱形继承导致数据由两份，浪费资源
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