//��������(�º���)��һ���࣬����һ������
//������������  һ���Լ�����
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
/*
	����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
	�������󳬳���ͨ�����ĸ����������������Լ���״̬
	�������������Ϊ��������


*/
//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class Myadd {
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;

	}


};
//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
void test()
{
	Myadd myadd;
	cout << myadd(10, 10) << endl;


}
//�������󳬳���ͨ�����ĸ����������������Լ���״̬
class Myprint
{
public:
	Myprint()
	{
		this->count = 0;

	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}

public:
	int count;
};
//�������󳬳���ͨ�����ĸ����������������Լ���״̬
void test02()
{
	Myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint���ô���Ϊ : " << myprint.count << endl;

}
//�������������Ϊ��������
void doPrint(Myprint &myprint,string test)
{

	myprint(test);//ת����40�� �൱�ں���ʹ��

}
void test03()
{
	Myprint myprint;
	doPrint(myprint,"hello C++");

}
/*
	����bool���͵ķº�����Ϊν��
	���operator()����һ����������ô����һԪν��
	���operator()����������������ô������Ԫν��


*/
//һԪν��
class GreateFive
{
public:
	bool operator()(int val)
	{
		return val > 5;


	}


};
void test04()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{

		v.push_back(i);

	}
	//���������У���û�д���5������
	// GreateFive()������������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());

	if (it == v.end())
	{
		cout << "δ�ҵ�����5������"  << endl;
	}
	else
	{
		cout << "�ҵ��˴���5������ �����ǣ�" << *it << endl;
	}
}
//��Ԫν��
class Mycompare
{
public:
	bool operator()(int val1,int val2)
	{


		return val1 > val2;
	}

};
void test05()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(50);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(30);
	//����ǰ
	cout << "-----------------------------------------" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
		

	}
	cout << endl;
	//�Ӵ�С�����
	cout << "-----------------------------------------" << endl;
	sort(v1.begin(), v1.end());
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
	

	}
	sort(v1.begin(),v1.end(),Mycompare());
	//��С���������
	cout << "-----------------------------------------" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
		

	}
	cout << endl;
}
int main()
{

	test();
	test02();
	test03();
	test04();
	test05();
	system("pause");
	return 0;
}