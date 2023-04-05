#include <iostream>
#include <fstream>
using namespace std;
class Person
{
public:
    char name[64];
    int m_age;

};
int main()
{

    //1、包含头文件

    //2、创建流对象
    ifstream ifs;
    //3、打开文件 判断文件是否打开成功
    ifs.open("Person.txt", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "打开文件失败" << endl;
       
    }
    //4、读文件文件
       //标准结构
    Person p;
    ifs.read((char*)&p, sizeof(Person));//和下面的一样的
       //标准结构
    //ifs.read((char*)&p, sizeof(p));
    cout << "姓名为:" << p.name << " 性别为 " << p.m_age << endl;
    
    system("pause");
    return 0;
}