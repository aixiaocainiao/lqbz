//#include <iostream>
//#include <string>
//using namespace std;
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
//};
//
////公共继承
//class Son :public Base
//{
//public:
//	int m_D;
//};
////利用开发人员命令提示工具查看对象模型
////跳转盘符 F：
////跳转文件路径 cd 具体路径下
////查看命令
////cl /d1 reportSingleClassLayout类名 文件名
//void test01()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
////父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到