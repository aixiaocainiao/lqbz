//#include <iostream>
//#include <string>
//using namespace std;
//#include <fstream>
////#include <ofstream>
//void test()
//{
//    //1、包含头文件
//
//    //2、创建流对象
//
//    ofstream ofs;//名称自取
//
//    //3、打开文件 指定方式
//    ofs.open("test.txt", ios::out);
//    //**注意：** 文件打开方式可以配合使用，利用|操作符
//
//    //**例如：** 用二进制方式写文件 ios::binary | ios::out
//
//
//
//    //4、写内容
//    ofs << "姓名：张三" << endl;
//    ofs << "性别：男" << endl;
//    ofs << "年龄：18" << endl;
//    //5、关闭文件
//    ofs.close();
//}
//int main()
//{
//    test();
//
//    system("pause");
//    return 0;
//}
////文件操作必须包含头文件 fstream
////读文件可以利用ofstream ,或者fstream类
////打开文件时候需要指定操作文件的路径，以及打开方式
////利用<<可以向文件中写数据
////操作完毕 ，要关闭文件