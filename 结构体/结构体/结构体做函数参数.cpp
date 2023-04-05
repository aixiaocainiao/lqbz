#include <iostream>
using namespace std;
#include <string>
struct student
{
	string name;
	int age;
	int score;


};
//void Printfstudent(struct student s1);
void Printfstudent1(struct student *s1);
int main()
{
	struct student s1 = { "谢小胖",23,85 };
	//值传递

	//Printfstudent(s1);
	//指针传递
	Printfstudent1(&s1);


	cout << "学生的名字: " << s1.name
		<< " 年龄： " << s1.age
		<< " 成绩：" << s1.score << endl;


	system("pause");
	return 0;

}
//值传递
/*void Printfstudent(struct student s1)
{
	s1.age = 12;

	cout << "学生的名字: " << s1.name
		<< " 年龄： " << s1.age
		<< " 成绩：" << s1.score << endl;


}
*/
//指针传递
void Printfstudent1(struct student *s1)
{
	s1->age = 15;

	cout << "学生的名字: " << s1->name
		<< " 年龄： " << s1->age
		<< " 成绩：" << s1->score  << endl;

}
//如果不想修改函数中的数据用值传递，反之则用指针传递