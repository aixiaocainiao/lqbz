//#include <iostream>
//#include <string>
//using namespace std;
//
//
////2、值传递的方式给函数参数传值
//
////3、值得方式返回局部对象
//
//
//class Person
//{
//public:
//    Person()
//    {
//        cout << "Person 默认构造函数的调用: " << endl;
//
//
//    }
//    Person(int a)
//    {
//        m_age = a;
//
//        cout << "Person 有参构造函数的调用: " << endl;
//
//
//    }
//    Person(const Person& p)
//    {
//
//        cout << "Person 拷贝构造函数的调用: " << endl;
//        m_age = p.m_age;
//    }
//    ~Person()
//    {
//        cout << "析构函数的调用: " << endl;
//    }
//public:
//    int m_age;
//
//};
////1、使用一个已经创建完毕的对象来初始化一个新对象
//
//void test01()
//{
//    Person p1(20);
//    Person p2(p1);
//    cout << "m_age 的值为：" << p1.m_age << endl;
//    cout << "p2.m_age 的值为：" << p2.m_age << endl;
//     
//}
//void dowork(Person p)
//{
//    Person p3;
//    p3.m_age = p.m_age;
//    cout << "p3.m_age的值: " << p3.m_age << endl;
//    
//}
//void test02()
//{
//    Person p(10);
//    dowork(p);
//
//}
//Person dowork02()
//{
//    Person p1;
//    return p1;
//
//}
//void test03()
//{
//    Person p = dowork02();//相当于Person p(dowork());
//}
//int main()
//{
//
//   // test01();
//    //test02();
//    test03();
//    system("pause");
//    return 0;
//}