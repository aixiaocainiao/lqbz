////��̬��̬
//#include <iostream>
//using namespace std;
////������
//class Animal {
//public:
//	//�麯��  
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
//	virtual void Speak()
//	{
//		cout << "Animal��˵�� " << endl;
//	}
//};
////è��
//class Cat : public Animal {
//public:
//	//��д ��������ֵ���� ������ �����б���ȫ��ͬ �����virtual ��д�ɲ�д��
//	//virtual void Speak() �������һ����
//	void Speak() {
//		cout << "Cat��˵�� " << endl;
//	}
//};
////����
//class Dog : public Animal {
//public:
//	//��д ��������ֵ���� ������ �����б���ȫ��ͬ �����virtual ��д�ɲ�д��
//	//virtual void Speak() �������һ����
//	void Speak() {
//		cout << "Dog��˵�� " << endl;
//	}
//};
////ִ��˵���ĺ���
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ����è˵�� ����ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.������д������麯��
//
////��̬��̬ʹ��.
////�����ָ��������� ָ���������
//void doSpeak(Animal& animal) //Animal& animal = cat
//{
//	animal.Speak();
//}
//void test() {
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//
//}
//void test01() {
//	cout << "sizeof(Animal) " << sizeof(Animal) << endl;
//}
//int main()
//{
//	
//	//test();
//
//	test01();
//	system("pause");
//	return 0;
//}