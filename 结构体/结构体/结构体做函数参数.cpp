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
	struct student s1 = { "лС��",23,85 };
	//ֵ����

	//Printfstudent(s1);
	//ָ�봫��
	Printfstudent1(&s1);


	cout << "ѧ��������: " << s1.name
		<< " ���䣺 " << s1.age
		<< " �ɼ���" << s1.score << endl;


	system("pause");
	return 0;

}
//ֵ����
/*void Printfstudent(struct student s1)
{
	s1.age = 12;

	cout << "ѧ��������: " << s1.name
		<< " ���䣺 " << s1.age
		<< " �ɼ���" << s1.score << endl;


}
*/
//ָ�봫��
void Printfstudent1(struct student *s1)
{
	s1->age = 15;

	cout << "ѧ��������: " << s1->name
		<< " ���䣺 " << s1->age
		<< " �ɼ���" << s1->score  << endl;

}
//��������޸ĺ����е�������ֵ���ݣ���֮����ָ�봫��