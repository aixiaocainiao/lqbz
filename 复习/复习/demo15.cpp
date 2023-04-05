//#include <iostream>
//using namespace std;
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	
//	Person(int m_a,int m_b) {
//		this->m_a = m_a;
//		this->m_b = m_b;
//
//	}
//	//利用成员函数重载 左移运算符 p.operator(p)  不会利用成员函数重载<<运算符，因为无法实现 cout 在右侧
//	//成员函数实现不了 p<<cout 不是我们想要的效果
//	//void operator<<(Person &p){ }
//
//
//private:
//	int m_a;
//	int m_b;
//
//};
////只能利用全局函数重载实现左移运算符
////ostream 对象只能有一个
////out 是 cout 的别名 引用懂得吧
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a: " << p.m_a << " b: " << p.m_b << endl;
//	return out;
//}
//void test() {
//	Person p(10,20);
//	//cout << endl; //cout << p 传入后 返回的还是cout 和 后面的 <<  又可以输出了
//	cout << p << "hello world" << endl;//链式编程
//}
//int main()
//{
//	test();
//
//
//
//	system("pause");
//	return 0;
//}