#include <iostream>
#include <string>
using namespace std;
class Building;
class GoodGay
{
public:
    Building * building;
public:
    GoodGay();
   
    void visit();
    


};
class Building
{
   friend class GoodGay;
public:
    Building()
    {
        m_sittingroom = "����";
        m_bedroom = "����";

    }

public:
    string m_sittingroom;

private:

    string m_bedroom;

    
};
GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "�û�������ͨ������� ���з���: " << building->m_sittingroom << endl;
    cout << "�û�������ͨ������� ���з���: " << building->m_bedroom << endl;

}

void test()
{
    GoodGay pp;
    pp.visit();
}
int main()
{
    test();

    system("pause");
    return 0;
}