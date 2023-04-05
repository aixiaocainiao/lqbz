////前置递增返回的是引用  后置递增返回的是值
//#include <iostream>
//using namespace std;
//class MyInter {
//	friend ostream& operator<<(ostream& cout, MyInter myint);
//public:
//	MyInter() {
//		m_Num = 0;
//	}
//	//重载前置++运算符
//	//& 链式编程规则 返回引用为了一直对一个数据进行递增操作
//	MyInter& operator++(){
//		//先进行++运算
//		m_Num++;
//		//再将自身做返回
//		return *this;
//	}
//	//重载后置++运算符
//	//void operator++(int) int 表示占位参数 可以用于区分前置和后置
//	//后置递增返回的是值 前置递增返回的是引用 因为后置局部变量如果引用 会被释放掉
//	MyInter operator++(int) {
//		//先 记录当时结果
//		MyInter temp = *this;
//		//后 递增
//		m_Num++;
//
//		//最后将记录结果做返回
//		return temp;
//
//
//	}
//private:
//	int m_Num;
//
//};
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInter myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//void test() {
//	MyInter myint;
//	//cout << ++myint << endl;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//
//
//}
//void test01() {
//	MyInter myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//int main()
//{
//	/*int a = 0;
//	cout << ++(++a) << endl;
//	cout << a << endl;*/
//	//test();
//	test01();
//
//	system("pause");
//	return 0;
//}