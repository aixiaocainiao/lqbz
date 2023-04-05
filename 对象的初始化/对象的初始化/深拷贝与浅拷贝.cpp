//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    Person()
//    {
//        cout << "默认构造函数的调用" << endl;
//    }
//    Person(int age,int hight)
//    {
//        
//        cout << "有参构造函数的调用" << endl;
//        m_age = age;
//        m_hight = new int(hight);
//    }
//    Person(const Person& p)
//    {
//        m_age = p.m_age;
//        m_hight = new int (*p.m_hight);// 好好看
//        cout << "拷贝构造函数的调用" << endl;
//    }
//    ~Person()
//    {
//        cout << "析构函数的调用" << endl;
//        if (m_hight != NULL)
//        {
//            delete m_hight;
//
//        }
//    }
//public:
//    int m_age;
//    int *m_hight;//new 的使用 方法  忘记了   自己再看一下
//
//};
//void test01()
//{
//    Person p(10,160);
//    Person p1(p);
//    cout << "p的年龄: " << p.m_age << endl;
//    cout << "p1的年龄: " << p1.m_age << endl;
//    cout << "p的体重: " << *p.m_hight << endl;
//    cout << "p1的体重: " << *p1.m_hight << endl;
//
//}
//int main()
//{
//    test01();
//
//    system("pause");
//    return 0;
//}
////如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题