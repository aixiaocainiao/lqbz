#include <iostream>
using namespace std;

//前面使用const 表示返回值为const
class FunctionConst {
public:
    int value;
    FunctionConst();
    virtual ~FunctionConst();
    const  int getValue();
    int getValue2()  const;
};
FunctionConst::FunctionConst() :value(100)//随便初始化value
{
    // TODO Auto-generated constructor stub

}
FunctionConst ::~FunctionConst() {
    // TODO Auto-generated destructor stub
}

const  int FunctionConst::getValue() {
    return value; //返回值是 const, 使用指针时很有用.
}

int FunctionConst::getValue2()  const {
    //此函数不能修改class FunctionConst的成员函数 value
    value = 15; //错误的, 因为函数后面加 const
    return value;
}
//用于申明类中的成员函数为“只读”函数，即函数后面加了const之后该函数不能改变类的数据成员。
class aa {
    int num;
public:
    aa() {
        int b = 10;
        num = b;
    };
    int out1() {
        cout << num << endl;
    }
    void out2() const {
        cout << num << endl;
    }
    void out3() const {
        num += 10; //出错，const函数不能修改其数据成员
        cout << num << endl;
    }

};

int _tmain(int argc, char* argv[])
{
    aa a1;
    a1.out1();
    a1.out2();
    a1.out3();
    const aa a2;
    a2.out1(); // 错误，const的成员 不能访问非const的函数
    a2.out2();
    a2.out3();
    return 0;
}
class Circle
{
public:
    Circle() :m_dPi(3.14) {} // 正确，使用初始化列表
private:
    const double m_dPi;
}
//无法对于我们的静态成员变量在构造函数中赋初值，解决方案: 在初始化列表中赋初值。
const double m_dPi;  常量 不能修改