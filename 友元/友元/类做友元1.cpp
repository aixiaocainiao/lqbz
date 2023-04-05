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
        m_sittingroom = "客厅";
        m_bedroom = "卧室";

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
    cout << "好基友正在通过类访问 进行访问: " << building->m_sittingroom << endl;
    cout << "好基友正在通过类访问 进行访问: " << building->m_bedroom << endl;

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