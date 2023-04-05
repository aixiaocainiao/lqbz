#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//#include <ifstream>
int main()
{
    //1、包含头文件

    //2、创建流对象
    ifstream ifs;

    //3、打开文件 判断文件是否成功
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())//ifs.is_open() == 1 表示打开成功
    {
        cout << "文件打开失败" << endl;
    }

    //4、读数据

    ////第一种方式
    //char buf[1024] = { 0 };//数组元素全部初始化为0
    //while (ifs >> buf)
    //{
    //    cout << buf << endl;
    //}
    ////第二种方式
    //char buf[1024] = { 0 };
    //while (ifs.getline(buf, sizeof(buf)))
    //{
    //    cout << buf << endl;

    //}
    //第三种方式  喜欢用这个
    string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;

    }
    //4、第四种方式  不推荐使用
    char c;
    while ((c = ifs.get()) != EOF)//EOF end of file
    {
        cout << c;
    }

    //5、关闭文件
    ifs.close();

    system("pause");
    return 0;
}
