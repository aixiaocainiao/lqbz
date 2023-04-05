////继承的方式 class 子类：继承方式 父类
//// 1.class 子类：public 父类 
//// 2. class 子类：private 父类
//// 3. class 子类：protected 父类
////三者 父类私有都无法访问  Public 该咋样就咋样 protected 都是保护权限 private 都是私有
//#include <iostream>
//#include <string>
//using namespace std;
//class base
//{
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//};
//class son :public base
//{
//public:
//    void func()
//    {
//        m_A = 10; //可访问 public权限
//        m_B = 20; //可访问 protected权限
//        //m_C; //不可访问
//        cout << m_A << endl;
//    }
//    
//};
//void myClass()
//{
//    son s1;
//    s1.func(); //其他类只能访问到公共权限
//}
//int main()
//{
//    myClass();
//
//    system("pause");
//    return 0;
//}
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2:protected Base2
//{
//public:
//	void func()
//	{
//		m_A; //可访问 protected权限
//		m_B; //可访问 protected权限
//		//m_C; //不可访问
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //不可访问
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3:private Base3
//{
//public:
//	void func()
//	{
//		m_A; //可访问 private权限
//		m_B; //可访问 private权限
//		//m_C; //不可访问
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};