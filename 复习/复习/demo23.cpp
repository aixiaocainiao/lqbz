//#include <iostream>
//using namespace std;
//class Animal {
//public:
//	int m_age;
//};
////�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
////��ʱ�����ĸ���Animal��Ϊ�����
//class Sheep : virtual public Animal
//{
//
//};
//class Tuo : virtual public Animal
//{
//
//};
//class SheeoTuo : public Sheep, public Tuo
//{
//
//};
//void test() {
//	SheeoTuo st;
//	st.Sheep::m_age = 100;
//	st.Tuo::m_age = 200;
//	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������
//	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
//	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
//	cout << "st.m_age = " << st.m_age << endl;
//	//�����������֪����ֻҪ��һ�ݾͿ��ԣ����μ̳е������������ݣ��˷���Դ
//}
//int main()
//{
//
//	test();
//
//
//	system("pause");
//	return 0;
//}