#include <iostream>
#include <string>
using namespace std;
class Building;//�ȸ��߱�����  ���涨�岻Ҫ����
class GoodGay
{
public:

    GoodGay();
    void visit();//�ιۺ��� ����Building �е�����
    Building * building;//building��ָ�� building = new Building //*building ������
    //int* p;һ���İ�Building ���ָ��


};
class Building
{
    friend class GoodGay;
public:
    Building();

   /* Building()
    {
        m_sittingroom = "����";
        m_bedroom = "����";
    }
*/

public:
    string m_sittingroom;//����

private:

    string m_bedroom;//����


};
//����д��Ա����
Building::Building()//������
{
    m_sittingroom = "����";
    m_bedroom = "����";
}
//����д��Ա����
GoodGay::GoodGay()
{
    //û����
    building = new Building;//
    

}
void GoodGay::visit()
{

    cout << "�û������������  ��������:" << building->m_sittingroom << endl;

    cout << "�û������������  ��������:" << building->m_bedroom << endl;//friend class GoodGay
}
void test()
{
    GoodGay PP;
    PP.visit();
}
int main()
{
    test();

    system("pause");
    return 0;
}