#include <iostream>
#include <fstream>//��д����

using namespace std;
//д
void test()
{
	//����������
	fstream ofs;
	//���ļ�
	ofs.open("test.txt", ios::out);
	//д����
	ofs << "���ѽ" << endl;
	ofs << "���ѽ" << endl;
	ofs << "���ѽ" << endl;



	ofs.close();


}
//��
void test01()
{
	fstream ifs;
	ifs.open("test.txt",ios::in);
	if (!ifs.is_open())
	{

		cout << "�ļ���ʧ��" << endl;
		return;

	}
	//��һ�ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
	char ch;
	while (ch = ifs.get() != EOF)
	{
		cout << ch;
	}
	ifs.close();


}
int main()
{

	test();

	system("pause");
	return 0;
}
//- ���ļ��������� ifstream  ������fstream��
//- ����is_open���������ж��ļ��Ƿ�򿪳ɹ�
//- close �ر��ļ�

