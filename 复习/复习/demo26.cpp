//#include <iostream>
//#include <string>
//using namespace std;
//class Calculator {
//public:
//	int getResult(string oper) {
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//
//	}
//	int m_Num1;
//	int m_Num2;
//};
////void test() {
////	//��ͨʵ�ֲ���
////	Calculator c;
////	c.m_Num1 = 10;
////	c.m_Num2 = 10;
////	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
////
////	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
////
////	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
////	/*Yuansuan y;
////	y.m_Num1 = 20;
////	y.m_Num2 = 10;*/
////}
////��̬
//class Acalculator {
//public:
//	//virtual int getResult() = 0;  �Ժ�ֱ��д���
//	virtual int getResult() {
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//class Add : public Acalculator {
//public:
//	virtual int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
////����������
//class SubCalculator :public Acalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MulCalculator :public Acalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//void test01() {
//	//�ӷ�
//	Acalculator* abc = new Add;
//	abc->m_Num1 = 20;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//abc->getResult();
//	delete abc;//����ǵ��ͷ�
//	//��������������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�����˷�������
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//int main()
//{
//	//test();
//	test01();
//
//
//	system("pause");
//	return 0;
//}