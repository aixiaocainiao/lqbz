#include <iostream>
#include <string>
using namespace std;
#define Max 1000//最大人数
void showMenu()
{
    cout << "***********************" << endl;
    cout << "***** 1、添加联系人 ****" << endl;
    cout << "***** 2、显示联系人 ****" << endl;
    cout << "***** 3、删除联系人 ****" << endl;
    cout << "***** 4、查找联系人 ****" << endl;
    cout << "***** 5、修改联系人 ****" << endl;
    cout << "***** 6、清空联系人 ****" << endl;
    cout << "***** 0、退出通讯录 ****" << endl;
    cout << "***********************" << endl;

}
//设计联系人的结构体
struct Person
{
    string m_Name;//姓名
    int m_Sex;//性别 ：1 男 2女
    int m_Age;//年龄
    string m_Phone;//电话号码
    string m_Addr;//家庭地址

};
//设计通讯录结构体
struct Addressbooks
{
   struct Person personArray[Max];//通讯录中保存的联系人的人数组
   int m_Size;//通讯录中人员个数

};
//1、添加联系人
void addPerson(Addressbooks *abs)//这里的abs是可以任意改变的名称，老师这样写是方便说明指针abs是接受结构体变量abs的地址
{
    //判断通讯录是否已满，如果满了就不再添加
    if (abs->m_Size == Max)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        //添加具体联系人
        string name;//姓名
        cout << "请输入姓名: " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        //性别
        cout << "请输入性别: " << endl;
        cout << "1----男 " << endl;
        cout << "2----女 " << endl;
        int sex;
        
        while (true)
        {
            //如果输入的是1 或者是 2 可以退出循环 因为输入的是正确值
            //如果输入有误，重新输入
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        //年龄
        cout << "请输入年龄: " << endl;
        int age;

        while (true)
        {
            //如果输入的是1 或者是 2 可以退出循环 因为输入的是正确值
            //如果输入有误，重新输入
            cin >> age;
            if (age >= 0 && age <= 150)
            {
                abs->personArray[abs->m_Size].m_Age = age;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        //联系电话
        string phone;
        cout << "请输入联系电话: " << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;


        //家庭地址
        string address;
        cout << "请输入家庭地址: " << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //更新一下通讯录人数
        abs->m_Size++;
        cout << "添加成功" << endl;
    }
    system("pause");//请按任意键继续
    system("cls");//清屏操作

}
//2、显示所有联系人
void showPerson(Addressbooks *abs)
{
    //判断通讯录中人数是否为，如果为，则提示记录为空
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
        //不能写return;如果写了 下面呢system 就不会再执行
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            //cout << "姓名为: " << abs->personArray[i].m_Name << endl;
            //        /*if(abs->personArray[i].m_Sex == 1)
            //             cout << "性别为: 男 " << endl;
            //        if (abs->personArray[i].m_Sex == 2)
            //            cout << "性别为: 女 " << endl;*/
            //cout << "年龄为: " << abs->personArray[i].m_Age << endl;
            //cout << "电话为: " << abs->personArray[i].m_Phone<< endl;
            //cout << "住址为: " << abs->personArray[i].m_Addr << endl;
            cout << "姓名为: " << abs->personArray[i].m_Name << "\t";
            cout << "性别为: " << (abs->personArray[i].m_Sex == 1 ? "男":"女" ) << "\t";
                    /*if(abs->personArray[i].m_Sex == 1)
                         cout << "性别为: 男 " << endl;
                    if (abs->personArray[i].m_Sex == 2)
                        cout << "性别为: 女 " << endl;*/
            cout << "年龄为: " << abs->personArray[i].m_Age << "\t";
            cout << "电话为: " << abs->personArray[i].m_Phone << "\t";
            cout << "住址为: " << abs->personArray[i].m_Addr << endl;
        }

    }
    system("pause");//请按任意键继续
    system("cls");//清屏操作
}
//检测联系人是否存在，如果存在，返回联系人所在数组的具体位置，不存在返回-1
//参数1 通讯录 参数2 对比姓名
//遍历数组
int isExist(Addressbooks* abs, string name)
{
    
    for (int i = 0; i < abs->m_Size; i++)
    {
        //找到用户输入的姓名了
        if (abs->personArray[i].m_Name == name)
        {
            return i;//找到了返回这个人在数组中的下标编号
        }
        return -1;//如果遍历结束都没有找到，返回-1
    }


}
//3、删除指定的联系人
void deletePerson(Addressbooks *abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;
    //ref = -1 未查到
    //ref != -1 查到了
    int ref = isExist(abs, name);
    if (ref != -1)
    {
        //找到此人，要进行删除操作
        for (int i = ref; i < abs->m_Size; i++)//注意i = ref
        {
            //数据迁移
            abs->personArray[i] = abs->personArray[i + 1];
            
        }
        abs->m_Size--;//更新通讯录中的人员数
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause");//请按任意键继续
    system("cls");//清屏操作

}
//4、查找联系人
void findPerson(Addressbooks* abs)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    int ref = isExist(abs, name);
    if (ref != -1)//找到联系人
    {
        cout << "姓名为: " << abs->personArray[ref].m_Name << "\t";
        cout << "性别为: " << (abs->personArray[ref].m_Sex == 1 ? "男" : "女") << "\t";
        cout << "年龄为: " << abs->personArray[ref].m_Age << "\t";
        cout << "电话为: " << abs->personArray[ref].m_Phone << "\t";
        cout << "住址为: " << abs->personArray[ref].m_Addr << endl;
    }
    else//未找到联系人
    {

        cout << "查无此人" << endl;

    }
    system("pause");//请按任意键继续
    system("cls");//清屏操作
}
//5、修改联系人
void modifyPerson(Addressbooks *abs)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;
    int ref = isExist(abs, name);
    if (ref != -1)//找到了联系人
    {
        string name;//姓名
        cout << "请输入姓名: " << endl;
        cin >> name;
        abs->personArray[ref].m_Name = name;
        //性别
        cout << "请输入性别: " << endl;
        cout << "1----男 " << endl;
        cout << "2----女 " << endl;
        int sex;

        while (true)
        {
            //如果输入的是1 或者是 2 可以退出循环 因为输入的是正确值
            //如果输入有误，重新输入
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ref].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        //年龄
        cout << "请输入年龄: " << endl;
        int age;

        while (true)
        {
            //如果输入的是1 或者是 2 可以退出循环 因为输入的是正确值
            //如果输入有误，重新输入
            cin >> age;
            if (age >= 0 && age <= 150)
            {
                abs->personArray[ref].m_Age = age;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }
        //联系电话
        string phone;
        cout << "请输入联系电话: " << endl;
        cin >> phone;
        abs->personArray[ref].m_Phone = phone;


        //家庭地址
        string address;
        cout << "请输入家庭地址: " << endl;
        cin >> address;
       
        cout << "修改成功" << endl;


    }
    else//未找到联系人
    {
        cout << "查无此人" << endl;
    }

    system("pause");//请按任意键继续
    system("cls");//清屏操作

}
//6、清空联系人
void clearPerson(Addressbooks* abs)
{
    cout << "您是否确定选择清空所有联系人" << endl;
    cout << "清空之后联系人数据将会丢失" << endl;
    cout << "1-----是" << endl;
    cout << "2-----否" << endl;

    int num = 0;

    while (true)
    {
        //如果输入的是1 或者是 2 可以退出循环 因为输入的是正确值
        //如果输入有误，重新输入
        cin >> num;
        if (num == 1 || num == 2)
        {
            if (num == 1)
            {
                abs->m_Size = 0;//将当前记录的联系人数量设置为0，做逻辑上的清空操作
                cout << "通讯录已清空" << endl;
                break;
            }
            else
            {
               
                break;
            }
        }
        else
        {
            cout << "输入有误，请重新输入" << endl;
        }
       
    }

   
    system("pause");//请按任意键继续
    system("cls");//清屏操作
}
int main()
{
    //创建通讯录结构体变量
    Addressbooks abs;
    //初始化通讯录中当前人员个数
    abs.m_Size = 0;


    int elect = 0;
    while(true)
    {
        //显示菜单
        showMenu();
        cin >> elect;
        switch (elect)
        {
        case 1://1、添加联系人
            addPerson(&abs);//利用地址传递，可以修饰实参
            break;
        case 2://2、显示联系人
            showPerson(&abs);
            break;
        case 3://3、删除联系人
        /*{
            cout << "请输入删除联系人姓名: " << endl;
            string name;
            cin >> name;
            if (isExist(&abs, name) == -1)
            {
                cout << "查无此人" << endl;

            }
            else
            {

                cout << "找到此人" << endl;

            }
        } */
            deletePerson(&abs);
            break;
        case 4://4、查找联系人
            findPerson(&abs);
            break;
        case 5://5、修改联系人
            modifyPerson(&abs);
            break;
        case 6://6、清空联系人 
            clearPerson(&abs);
            break;
        case 0://0、退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;


        default:
            break;
        }

    }




    system("pause");
    return 0;
}