#include <iostream>
using namespace std;
int main()
{
	//ǿ����ö�� enun�������class����struct����
	enum class Status{ok,err};
	enum struct Status1{ok,err};

	//Status flag = ok;����ö�����͵�������
	Status flag = Status::ok;

	//ǿ����ö�� ����ָ����Ա����������
	enum class Status02:char{ok,err};
	cout << sizeof(Status02::ok) << endl;

	system("pause");
	return 0;
}
int main01()
{
	enum Status{ok,err};

	//enum status1{ok,err};  �ض��� ��ǰ�Ķ�����ö����

	Status flag = Status::ok;
	
	cout << sizeof(ok) << endl;//���ʾ������� 0 1 
	
	system("pause");
	return 0;
}