//���� p.set   ָ��p ->set ��һ��
#include <iostream>
#include <string>
using namespace std;
//��������
class Building
{
    //goodgayȫ�ֺ�����Building ������� ���Է���Building �е�˽�г�Ա
    friend void goodgay(Building* building);
public:
    Building()//��ʼ��
    {
        m_sittingroom = "����";
        m_bedroom = "����";
    }

public:
    string m_sittingroom;
private:
    string m_bedroom;


};
//void goodgay(Building &building)���ú�ָ�붼��һ����
void goodgay(Building *building)//ջ������  �����þֲ��������ص�ַ��������
{
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��� :" << building->m_sittingroom << endl;
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��� :" << building->m_bedroom<< endl;
}
void test()
{

    Building building;
    goodgay(&building);

}
int main()
{
    test();


    system("pause");
    return 0;
}