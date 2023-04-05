//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：ostream& write((const char *)buffer,int len)
//buffer 是数组 的首地址 数组名是数组第一个元素的首地址
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person
{
public:
    char name[64];//别用string c++这种形式 底层是由c语言写的  会出现问题
    int m_age;

};
//二进制文件  写文件
int main()
{
    //1、包含头文件

    //2、创建流对象
    ofstream ofs;
    //3、打开文件
    ofs.open("Person.txt", ios::out | ios::binary);
    //4、写文件
         //标准结构
    Person p = { "张三",18 };//相当于结构体的用法
    ofs.write((const char*)&p, sizeof(Person));
         //标准结构
    //5、关闭文件
    ofs.close();
    system("pause");
    return 0;
}
//文件输出流对象 可以通过write函数  以二进制方式写数据