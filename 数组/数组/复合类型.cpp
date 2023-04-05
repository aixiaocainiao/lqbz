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
	inflatable str[2] = { {"谢新芳",3.1,2.52},
						   {"宋思云",3.2,2.53}
	};

	cout << "姓名为：" << str[0].name
		<< " 容量为： " << str[0].volume
		<< " 价格为： " << str[0].price << endl;
	cout << "姓名为：" << str[1].name
		<< " 容量为： " << str[1].volume
		<< " 价格为： " << str[1].price << endl;

	//共用体 一次只能存一种类型的数据



	system("pause");
	return 0;
}