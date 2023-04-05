#include <iostream>
#include <string>
using namespace std;
//string 的构造函数
/*string(); //创建一个空的字符串 例如：string str;
string(const char *s); //使用字符串s初始化
 
 

 */
int main()
{
    string s1;//默认构造

    const char* str = "hello world";
    string s2(str);
    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;

    system("pause");
    return 0;
}

//string的多种构造方式没有可比性，灵活使用即可