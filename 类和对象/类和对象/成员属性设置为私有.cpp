//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	void setName(string name)//写
//	{
//
//		m_name = name;
//
//	}
//	string getName()//读
//	{
//		return m_name;
//	}
//	void setAge(int age)//写
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "您的输入年龄有误！" << endl;
//			return;//自己想一下   这个用法是啥意思
//			//return;的作用相当于break;用于中断循环的作用，
//			//而return 0;则是return的另一种用法，专用于返回值非void的函数返回其值。
//			//break;//break只用于循环和开关中
//		}
//		m_age = age;
//
//	}
//	int getAge()//读
//	{
//		return m_age;
//	}
//	void setLover(string lover)//只写不读
//	{
//		m_lover = lover;
//
//	}
//
//private:
//	string m_name;//设置为 可读可写
//	int m_age;//设置为 可读可写
//	string m_lover;//设置为只写
//
//
//};
//int main()
//{
//	Person p;
//	//m_name = "谢包子"； 这是错误的
//
//	p.setName("谢新芳");
//	cout << "姓名为:" << p.getName() << endl;
//	p.setAge(15);
//	cout <<"年龄为:" << p.getAge() << endl;
//	p.setLover("仓井");
//	//cout << getLover() << endl;  错误
//
//
//
//
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//
//}