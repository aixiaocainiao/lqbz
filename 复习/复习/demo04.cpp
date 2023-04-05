////作用：** 结构体中的成员可以是另一个结构体
//
////** 例如：** 每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
//
////** 示例：
//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student s1;
//};
//int main()
//{
//	struct teacher t1;
//	t1.age = 50;
//	t1.id = 1;
//	t1.name = "谢老师";
//	t1.s1.name = "小明";
//	t1.s1.age = 18;
//	t1.s1.score = 80;
//	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
//
//	cout << "辅导学员 姓名： " << t1.s1.name << " 年龄：" << t1.s1.age << " 考试分数： " << t1.s1.score << endl;
//
//
//
//	system("pause");
//	return 0;
//}