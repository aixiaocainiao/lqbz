#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    //�麯��
    virtual void func()
    {
        cout << "������˵��" << endl;
    }

};
//è��
class Cat :public Animal
{
public:
    void func()
    {
        cout << "Сè��˵��" << endl;

    }

};
//����
class Dog :public Animal
{
public:
    //��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
    void func()// virtual void func()//virtual ��д�ɲ�д
    {
        cout << "С����˵��" << endl;
    }

};
//����ϣ������ʲô���� ��ô�õ���ʲô����ĺ���
//���������ַ�ڱ���׶ξ���ȷ�� ��ô��̬����
//���������ַ�����н׶� ����ȷ�� ���Ƕ�̬����



//ִ��˵���ĺ���
//��ַ���  �ڱ���׶�ȷ��������ַ
//�����ִ����è˵�� ����ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�Ҳ���ǵ�ַ���


//��̬��̬��������
//�м̳й�ϵ
//������д������麯��

//��̬��̬ʹ��
//�����ָ���������  ָ���������
void Dospeak(Animal& animal)
{
    animal.func();

}
void test()
{
    Cat cat;
    Dospeak(cat);

    Dog dog;
    Dospeak(dog);

}
int main()
{
    test();

    system("pause");
    return 0;
}
/*�ܽ᣺

��̬��������

* �м̳й�ϵ
* ������д�����е��麯��

��̬ʹ������

* ����ָ�������ָ���������

��д����������ֵ����  ������ �����б� ��ȫһ�³�Ϊ��д*/