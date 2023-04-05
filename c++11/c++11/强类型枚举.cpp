#include <iostream>
using namespace std;
int main()
{
	//强类型枚举 enun后面加上class或者struct修饰
	enum class Status{ok,err};
	enum struct Status1{ok,err};

	//Status flag = ok;必须枚举类型的作用域
	Status flag = Status::ok;

	//强类型枚举 可以指定成员变量的类型
	enum class Status02:char{ok,err};
	cout << sizeof(Status02::ok) << endl;

	system("pause");
	return 0;
}
int main01()
{
	enum Status{ok,err};

	//enum status1{ok,err};  重定义 以前的定义是枚举数

	Status flag = Status::ok;
	
	cout << sizeof(ok) << endl;//本质就是整数 0 1 
	
	system("pause");
	return 0;
}