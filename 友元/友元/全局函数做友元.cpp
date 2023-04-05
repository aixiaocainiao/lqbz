//对象 p.set   指针p ->set 记一下
#include <iostream>
#include <string>
using namespace std;
//建筑物类
class Building
{
    //goodgay全局函数是Building 类好朋友 可以访问Building 中的私有成员
    friend void goodgay(Building* building);
public:
    Building()//初始化
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }

public:
    string m_sittingroom;
private:
    string m_bedroom;


};
//void goodgay(Building &building)引用和指针都是一样的
void goodgay(Building *building)//栈区数据  不可用局部变量返回地址或者引用
{
    cout << "好基友的全局函数 正在访问 :" << building->m_sittingroom << endl;
    cout << "好基友的全局函数 正在访问 :" << building->m_bedroom<< endl;
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