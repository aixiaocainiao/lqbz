//#include <iostream>
//#include <string>
//using namespace std;
//////Java页面
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "JAVA学科视频" << endl;
////	}
////};
//////Python页面
////class Python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Python学科视频" << endl;
////	}
////};
//////C++页面
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "CPP学科视频" << endl;
////	}
////};
//
////继承的方式
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//
//};
//class Java :public basepage//第一种继承方式
//{
//public:
//	void content()
//	{
//		cout << "Jave学科视频" << endl;
//	}
//
//};
//class Python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//
//};
//class CPP :public basepage
//{
//public:
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//
//};
//void test()
//{
//	Java ja;
//	ja.header();
//	ja.content();
//	ja.left();
//	ja.footer();
//	Python py;
//	py.header();
//	py.content();
//	py.left();
//	py.footer();
//	CPP cp;
//	cp.header();
//	cp.content();
//	cp.left();
//	cp.footer();
//
//
//}
//int main()
//{
//	test();
//
//    system("pause");
//    return 0;
//}
////总结
////继承的好处：== 可以减少重复的代码
////class A public B
////A类称为子类 或派生类
////B类称为父类 或基类
//// 
//// 
////派生类的成员  包含两部分
////一类是从基类继承过来的 一类是自己增加的成员
////从基类继承过来的表现其共性 而新曾的 成员体现了其共性