/*
	有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取
平均分。

*/
/*
1  创建五名选手，放到vector中
2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
3. sort算法对deque容器中分数排序，去除最高和最低分
4. deque容器遍历一遍，累加总分
5. 获取平均分

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
//创建选手
void creat(vector<Person>& v)
{
	
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手: ";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//将创建的Person对象放入到容器中
		v.push_back(p);

	}

}
//打分
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到deque容器中
		deque<int>s;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100之间
			s.push_back(score);

		}

		for (deque<int>::const_iterator vit = s.begin(); vit != s.end(); vit++)
		{

			cout << "分数: " << *vit << " ";

		}
		cout << endl;
		//排序
		sort(s.begin(), s.end());

		//去除最高分 去除最低分
		s.pop_back();
		s.pop_front();


		//取平均分
		int num = 0;
		for (deque<int>::const_iterator itr = s.begin(); itr != s.end(); itr++)
		{

			num += *itr;

		}
		int average = num / s.size();
		//cout << "平均分为: " << average << endl;
		


		//将平均分赋值给选手身上
		it->m_score = average;

	}


}
void showScore(vector<Person>&v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << "平均分为：" << it->m_score << " ";

	}
	cout << endl;

}
//排序
void test()
{
	//1.创建5名选手
	vector<Person>v;//存放选手容器
	creat(v);

	//测试
	for (vector<Person>::iterator it1 = v.begin(); it1 != v.end(); it1++)
	{

		//cout << "姓名: " << it1->m_name << " 初始分数为: " << it1->m_score << " ";
		cout << "姓名: " << it1->m_name <<  " ";

	}
	cout << endl;
	//2.给五名选手打分
	setscore(v);

	//3.显示最终得分

	showScore(v);

}
int main()
{

	test();

	system("pause");
	return 0;
}
