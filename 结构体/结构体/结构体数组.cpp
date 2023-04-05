//#include <iostream>
//#include <string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	//第一种结构体数组
//	struct student stuarry[3]
//	{
//		{"宋小胖",22,100},
//		{"谢大胖",23,99},
//		{"宋宋",0,60}
//
//
//	};
//	stuarry[2].name = "谢宋宋";
//	stuarry[2].age = 1;
//	stuarry[2].score = 75;
//	//第二种结构体数组
//	/*struct student stuarry[3];
//	stuarry[0].name = "宋小胖";
//	stuarry[0].age = 22;
//	stuarry[0].score = 100;
//	stuarry[1].name = "谢大胖";
//	stuarry[1].age = 23;
//	stuarry[1].score = 99;
//	stuarry[2].name = "宋宋";
//	stuarry[2].age = 0;
//	stuarry[2].score = 60;*/
//
//	for (int i = 0; i < 3; i++)
//	{
//
//		cout << "姓名为： " << stuarry[i].name
//			<< " 年纪为： " << stuarry[i].age
//			<< " 成绩为:  " << stuarry[i].score << endl;
//
//	}
//
//	struct student s1 = { "谢一宋",0,56 };
//	struct student * p = &s1;
//	cout << "姓名为：" << p->name
//		<< " 年纪为：" << p->age
//		<< " 成绩为: " << p->score << endl;
//
//
//
//	system("pause");
//	return 0;
//}