#include <iostream>
#include <string>
using namespace std;
#include <fstream>
//#include <ifstream>
int main()
{
    //1������ͷ�ļ�

    //2������������
    ifstream ifs;

    //3�����ļ� �ж��ļ��Ƿ�ɹ�
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())//ifs.is_open() == 1 ��ʾ�򿪳ɹ�
    {
        cout << "�ļ���ʧ��" << endl;
    }

    //4��������

    ////��һ�ַ�ʽ
    //char buf[1024] = { 0 };//����Ԫ��ȫ����ʼ��Ϊ0
    //while (ifs >> buf)
    //{
    //    cout << buf << endl;
    //}
    ////�ڶ��ַ�ʽ
    //char buf[1024] = { 0 };
    //while (ifs.getline(buf, sizeof(buf)))
    //{
    //    cout << buf << endl;

    //}
    //�����ַ�ʽ  ϲ�������
    string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;

    }
    //4�������ַ�ʽ  ���Ƽ�ʹ��
    char c;
    while ((c = ifs.get()) != EOF)//EOF end of file
    {
        cout << c;
    }

    //5���ر��ļ�
    ifs.close();

    system("pause");
    return 0;
}
