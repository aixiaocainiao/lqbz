/*
	��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡ
ƽ���֡�

*/
/*
1  ��������ѡ�֣��ŵ�vector��
2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
4. deque��������һ�飬�ۼ��ܷ�
5. ��ȡƽ����

*/
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
class Person {
public:
	Person(string name, int score)
	{

		this->m_name = name;
		this->m_score = score;

	}

public:
	string m_name;
	int m_score;

};
//����ѡ��
void creat(vector<Person>& v)
{
	
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��: ";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//��������Person������뵽������
		v.push_back(p);

	}

}
//���
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽deque������
		deque<int>s;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100֮��
			s.push_back(score);

		}

		for (deque<int>::const_iterator vit = s.begin(); vit != s.end(); vit++)
		{

			cout << "����: " << *vit << " ";

		}
		cout << endl;
		//����
		sort(s.begin(), s.end());

		//ȥ����߷� ȥ����ͷ�
		s.pop_back();
		s.pop_front();


		//ȡƽ����
		int num = 0;
		for (deque<int>::const_iterator itr = s.begin(); itr != s.end(); itr++)
		{

			num += *itr;

		}
		int average = num / s.size();
		//cout << "ƽ����Ϊ: " << average << endl;
		


		//��ƽ���ָ�ֵ��ѡ������
		it->m_score = average;

	}


}
void showScore(vector<Person>&v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << "ƽ����Ϊ��" << it->m_score << " ";

	}
	cout << endl;

}
//����
void test()
{
	//1.����5��ѡ��
	vector<Person>v;//���ѡ������
	creat(v);

	//����
	for (vector<Person>::iterator it1 = v.begin(); it1 != v.end(); it1++)
	{

		//cout << "����: " << it1->m_name << " ��ʼ����Ϊ: " << it1->m_score << " ";
		cout << "����: " << it1->m_name <<  " ";

	}
	cout << endl;
	//2.������ѡ�ִ��
	setscore(v);

	//3.��ʾ���յ÷�

	showScore(v);

}
int main()
{

	test();

	system("pause");
	return 0;
}
