////ǰ�õ������ص�������  ���õ������ص���ֵ
//#include <iostream>
//using namespace std;
//class MyInter {
//	friend ostream& operator<<(ostream& cout, MyInter myint);
//public:
//	MyInter() {
//		m_Num = 0;
//	}
//	//����ǰ��++�����
//	//& ��ʽ��̹��� ��������Ϊ��һֱ��һ�����ݽ��е�������
//	MyInter& operator++(){
//		//�Ƚ���++����
//		m_Num++;
//		//�ٽ�����������
//		return *this;
//	}
//	//���غ���++�����
//	//void operator++(int) int ��ʾռλ���� ������������ǰ�úͺ���
//	//���õ������ص���ֵ ǰ�õ������ص������� ��Ϊ���þֲ������������ �ᱻ�ͷŵ�
//	MyInter operator++(int) {
//		//�� ��¼��ʱ���
//		MyInter temp = *this;
//		//�� ����
//		m_Num++;
//
//		//��󽫼�¼���������
//		return temp;
//
//
//	}
//private:
//	int m_Num;
//
//};
////����<<�����
//ostream& operator<<(ostream& cout, MyInter myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//void test() {
//	MyInter myint;
//	//cout << ++myint << endl;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//
//
//}
//void test01() {
//	MyInter myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//int main()
//{
//	/*int a = 0;
//	cout << ++(++a) << endl;
//	cout << a << endl;*/
//	//test();
//	test01();
//
//	system("pause");
//	return 0;
//}