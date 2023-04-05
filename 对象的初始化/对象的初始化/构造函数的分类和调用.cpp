//#include <iostream>
//#include <string>
//using namespace std;
////构造函数分类
////按照参数分类 分为有参和无参 无参又称为默认构造函数
////按类型为     普通构造和拷贝构造
//class Person
//{
//public:
//    int age;
//public:
//    Person()//无参构造    又称为默认构造函数
//    {
//        cout << "无参构造函数" << endl;
//
//    }
//    //有参
//    Person(int a)
//    {
//         age = a;
//        cout << "有参构造函数" << endl;
//
//    }
//    //拷贝构造函数
//    Person(const Person& p)
//    {
//        age = p.age;//将传入的人身上的所有属性  拷贝到我的身上
//
//    }
//    //析构函数
//    ~Person()
//    {
//        cout << "析构函数调用" << endl;
//    }
//
//
//
//
//
//};
////无参构造函数的调用
//void test01()
//{
//    Person p;//无参构造函数调用   也称为默认函数构造调用
//
//
//}
////有参构造函数的调用
//void test02()
//{
//    //1 、括号法 常用    用这个就行
//    Person p1(10);
//
//    //注意  调用无参构造函数不能加括号   如果加了 编译器会默认这是一个函数声明
//    /*Person p2();*/ //
//    // void func();函数声明
//    //2 、显式法
//    Person p2 = Person(10);
//    Person p3 = Person(p2);//（拷贝构造函数调用）  有参构造函数调用
//    //注意
//    // Person(10);//单独写就是匿名对象 当前行结束之后 ，马上析构
//    //隐式转换法
//    Person p4 = 10; //Person p4 = Person(10);
//    Person p5 = p4;// Person p5 = Person(p4);
//
//    //注意 不能利用拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//    //Person p5(p4);
//}
//
//int main()
//{
//    test01();
//    test02();
//
//    system("pause");
//    return 0;
//}