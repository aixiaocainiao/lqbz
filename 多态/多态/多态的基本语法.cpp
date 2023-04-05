#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    //虚函数
    virtual void func()
    {
        cout << "动物在说话" << endl;
    }

};
//猫类
class Cat :public Animal
{
public:
    void func()
    {
        cout << "小猫在说话" << endl;

    }

};
//狗类
class Dog :public Animal
{
public:
    //重写 函数返回值类型 函数名 参数列表 完全相同
    void func()// virtual void func()//virtual 可写可不写
    {
        cout << "小狗在说话" << endl;
    }

};
//我们希望传入什么对象 那么久调用什么对象的函数
//如果函数地址在编译阶段就能确定 那么静态联编
//如果函数地址在运行阶段 才能确定 就是动态联编



//执行说话的函数
//地址早绑定  在编译阶段确定函数地址
//如果想执行让猫说话 ，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，也就是地址晚绑定


//动态多态满足条件
//有继承关系
//子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用  指向子类对象
void Dospeak(Animal& animal)
{
    animal.func();

}
void test()
{
    Cat cat;
    Dospeak(cat);

    Dog dog;
    Dospeak(dog);

}
int main()
{
    test();

    system("pause");
    return 0;
}
/*总结：

多态满足条件

* 有继承关系
* 子类重写父类中的虚函数

多态使用条件

* 父类指针或引用指向子类对象

重写：函数返回值类型  函数名 参数列表 完全一致称为重写*/