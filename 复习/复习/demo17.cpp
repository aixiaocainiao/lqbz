////�ݼ����������
//#include <iostream>
//using namespace std;
//class Myreduce {
//	friend ostream& operator<<(ostream& cout, Myreduce re);
//public:
//	Myreduce() {
//		m_a = 10;
//	}
//	//ǰ�õݼ�
//	Myreduce& operator--() {
//
//		m_a--;
//		return *this;
//	}
//	//���õݼ�
//	Myreduce operator--(int) {
//		Myreduce temp = *this;
//		m_a--;
//		return temp;
//
//
//	}
//
//
//private:
//	int m_a;
//};
//ostream& operator<<(ostream& cout, Myreduce re) {
//	cout << re.m_a << endl;
//	return cout;
//}
//void test() {
//	Myreduce re;
//	cout << --re << endl;
//	cout << re << endl;
//
//
//}
//void test01() {
//	Myreduce re;
//	cout << re-- << endl;
//	cout << re << endl;
//
//}
//int main()
//{
//
//	//test();
//	test01();
//
//	system("pause");
//	return 0;
//}