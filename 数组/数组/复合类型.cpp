#include <iostream>
#include <string>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;




};
int main()
{
	char str1[20];
	cin.getline(str1, 20);
	cout << str1[20];
	string arr;
	getline(cin, arr);
	cout << arr << endl;
	//cin >> arr;
	//cout << arr << endl;
	inflatable str[2] = { {"л�·�",3.1,2.52},
						   {"��˼��",3.2,2.53}
	};

	cout << "����Ϊ��" << str[0].name
		<< " ����Ϊ�� " << str[0].volume
		<< " �۸�Ϊ�� " << str[0].price << endl;
	cout << "����Ϊ��" << str[1].name
		<< " ����Ϊ�� " << str[1].volume
		<< " �۸�Ϊ�� " << str[1].price << endl;

	//������ һ��ֻ�ܴ�һ�����͵�����



	system("pause");
	return 0;
}