#include <iostream>
#include <string>
using namespace std;
//string �Ĺ��캯��
/*string(); //����һ���յ��ַ��� ���磺string str;
string(const char *s); //ʹ���ַ���s��ʼ��
 
 

 */
int main()
{
    string s1;//Ĭ�Ϲ���

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

//string�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���