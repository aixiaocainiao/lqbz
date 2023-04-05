//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    Person(int age)
//    {
//        //this指针指向 被调用的成员函数  所属的对象
//       this->age = age;
//
//    }
//   Person& PersonAddage(const Person &p)//如果是  Person  返回值是 
//    {
//        this->age += p.age;
//        //this 指向p2的指针 ，而*this指向的就是p2这个对象本体
//        return *this;
//    }
//   Person PersonAddage1(const Person& p)//如果是  Person  返回值是 
//   {
//       this->age += p.age;
//       return *this;//这里看一下值返回   第三种 拷贝返回    108集
//   }
//
//public:
//    int age;
//
//
//};
//void test()
//{
//    Person p(10);
//    Person p1(10);
//    cout << "p.age = " << p.age << endl;
//    cout << "p1.age = " << p1.age << endl;
//
//
//}
//void test1()
//{
//    Person p(10);
//    Person p1(10);
//    //将p的值加到p1上
//    p1.PersonAddage(p);
//    cout << "p1.age = " << p1.age << endl;
//    p1.PersonAddage(p).PersonAddage(p).PersonAddage(p);
//    cout << "p1.age = " << p1.age << endl;
//    p1.PersonAddage1(p).PersonAddage1(p).PersonAddage1(p);
//    cout << "p1.age = " << p1.age << endl;
//}
//int main()
//{
//    // test();
//    test1();
//
//    system("pause");
//    return 0;
//}