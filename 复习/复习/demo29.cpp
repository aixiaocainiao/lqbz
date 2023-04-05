//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person() {};
//	Person(int a, int b)
//	{
//		this->m_a = a;
//		this->m_b = b;
//
//	}
//	//成员函数实现+号运算符的重载
//
//	Person operator+(const Person& p)
//	{
//		Person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//
//public:
//	int m_a;
//	int m_b;
//
//};
//namespace Jill
//{
//	double bucket(double n) { return 0; }
//	double fetch;
//	struct Hill
//	{
//
//	};
//
//}
//using Jill::fetch;
////char fetch;
//namespace element {
//	namespace fire {
//		int flame;
//	}
//	float water;
//}
//namespace MEF = element::fire;
//using MEF::flame;
//namespace  my_very_favorite_things{
//
//}
//namespace mvft = my_very_favorite_things;
//namespace myth
//{
//	using Jill::fetch;
//	using namespace element;
//	using std::cout;
//	using std::cin;
//}
//void other()
//{
//	cout << "fetch = " << fetch;
//
//
//}
//int main()
//{
//	using namespace Jill;
//	//using namespace element::fire;
//	using element::fire::flame;
//	cin >> flame;
//	//using Jill::fetch;
//
//	cin >> fetch;
//	other();
//	/*cin >> ::fetch;
//	cout << "::fetch = " << ::fetch;*/
//	//可以给命名空间创建别名 
//	
//	Person P;
//	P.m_a = 10;
//	P.m_b = 20;
//	Person P1(20,30);
//	Person P2;
//	P2 = P + P1;
//	cout << "P2.m_a = " << P2.m_a << endl;
//	cout << "P2.m_b = " << P2.m_b << endl;
//
//	system("pause");
//	return 0;
//}
