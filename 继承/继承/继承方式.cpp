////�̳еķ�ʽ class ���ࣺ�̳з�ʽ ����
//// 1.class ���ࣺpublic ���� 
//// 2. class ���ࣺprivate ����
//// 3. class ���ࣺprotected ����
////���� ����˽�ж��޷�����  Public ��զ����զ�� protected ���Ǳ���Ȩ�� private ����˽��
//#include <iostream>
//#include <string>
//using namespace std;
//class base
//{
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//};
//class son :public base
//{
//public:
//    void func()
//    {
//        m_A = 10; //�ɷ��� publicȨ��
//        m_B = 20; //�ɷ��� protectedȨ��
//        //m_C; //���ɷ���
//        cout << m_A << endl;
//    }
//    
//};
//void myClass()
//{
//    son s1;
//    s1.func(); //������ֻ�ܷ��ʵ�����Ȩ��
//}
//int main()
//{
//    myClass();
//
//    system("pause");
//    return 0;
//}
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2:protected Base2
//{
//public:
//	void func()
//	{
//		m_A; //�ɷ��� protectedȨ��
//		m_B; //�ɷ��� protectedȨ��
//		//m_C; //���ɷ���
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A; //���ɷ���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3:private Base3
//{
//public:
//	void func()
//	{
//		m_A; //�ɷ��� privateȨ��
//		m_B; //�ɷ��� privateȨ��
//		//m_C; //���ɷ���
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};