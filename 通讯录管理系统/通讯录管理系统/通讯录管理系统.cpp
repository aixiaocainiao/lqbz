#include <iostream>
#include <string>
using namespace std;
#define Max 1000//�������
void showMenu()
{
    cout << "***********************" << endl;
    cout << "***** 1�������ϵ�� ****" << endl;
    cout << "***** 2����ʾ��ϵ�� ****" << endl;
    cout << "***** 3��ɾ����ϵ�� ****" << endl;
    cout << "***** 4��������ϵ�� ****" << endl;
    cout << "***** 5���޸���ϵ�� ****" << endl;
    cout << "***** 6�������ϵ�� ****" << endl;
    cout << "***** 0���˳�ͨѶ¼ ****" << endl;
    cout << "***********************" << endl;

}
//�����ϵ�˵Ľṹ��
struct Person
{
    string m_Name;//����
    int m_Sex;//�Ա� ��1 �� 2Ů
    int m_Age;//����
    string m_Phone;//�绰����
    string m_Addr;//��ͥ��ַ

};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
   struct Person personArray[Max];//ͨѶ¼�б������ϵ�˵�������
   int m_Size;//ͨѶ¼����Ա����

};
//1�������ϵ��
void addPerson(Addressbooks *abs)//�����abs�ǿ�������ı�����ƣ���ʦ����д�Ƿ���˵��ָ��abs�ǽ��ܽṹ�����abs�ĵ�ַ
{
    //�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
    if (abs->m_Size == Max)
    {
        cout << "ͨѶ¼�������޷����" << endl;
        return;
    }
    else
    {
        //��Ӿ�����ϵ��
        string name;//����
        cout << "����������: " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        //�Ա�
        cout << "�������Ա�: " << endl;
        cout << "1----�� " << endl;
        cout << "2----Ů " << endl;
        int sex;
        
        while (true)
        {
            //����������1 ������ 2 �����˳�ѭ�� ��Ϊ���������ȷֵ
            //�������������������
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "������������������" << endl;
        }
        //����
        cout << "����������: " << endl;
        int age;

        while (true)
        {
            //����������1 ������ 2 �����˳�ѭ�� ��Ϊ���������ȷֵ
            //�������������������
            cin >> age;
            if (age >= 0 && age <= 150)
            {
                abs->personArray[abs->m_Size].m_Age = age;
                break;
            }
            cout << "������������������" << endl;
        }
        //��ϵ�绰
        string phone;
        cout << "��������ϵ�绰: " << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;


        //��ͥ��ַ
        string address;
        cout << "�������ͥ��ַ: " << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //����һ��ͨѶ¼����
        abs->m_Size++;
        cout << "��ӳɹ�" << endl;
    }
    system("pause");//�밴���������
    system("cls");//��������

}
//2����ʾ������ϵ��
void showPerson(Addressbooks *abs)
{
    //�ж�ͨѶ¼�������Ƿ�Ϊ�����Ϊ������ʾ��¼Ϊ��
    if (abs->m_Size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
        //����дreturn;���д�� ������system �Ͳ�����ִ��
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            //cout << "����Ϊ: " << abs->personArray[i].m_Name << endl;
            //        /*if(abs->personArray[i].m_Sex == 1)
            //             cout << "�Ա�Ϊ: �� " << endl;
            //        if (abs->personArray[i].m_Sex == 2)
            //            cout << "�Ա�Ϊ: Ů " << endl;*/
            //cout << "����Ϊ: " << abs->personArray[i].m_Age << endl;
            //cout << "�绰Ϊ: " << abs->personArray[i].m_Phone<< endl;
            //cout << "סַΪ: " << abs->personArray[i].m_Addr << endl;
            cout << "����Ϊ: " << abs->personArray[i].m_Name << "\t";
            cout << "�Ա�Ϊ: " << (abs->personArray[i].m_Sex == 1 ? "��":"Ů" ) << "\t";
                    /*if(abs->personArray[i].m_Sex == 1)
                         cout << "�Ա�Ϊ: �� " << endl;
                    if (abs->personArray[i].m_Sex == 2)
                        cout << "�Ա�Ϊ: Ů " << endl;*/
            cout << "����Ϊ: " << abs->personArray[i].m_Age << "\t";
            cout << "�绰Ϊ: " << abs->personArray[i].m_Phone << "\t";
            cout << "סַΪ: " << abs->personArray[i].m_Addr << endl;
        }

    }
    system("pause");//�밴���������
    system("cls");//��������
}
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ����������ľ���λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 �Ա�����
//��������
int isExist(Addressbooks* abs, string name)
{
    
    for (int i = 0; i < abs->m_Size; i++)
    {
        //�ҵ��û������������
        if (abs->personArray[i].m_Name == name)
        {
            return i;//�ҵ��˷���������������е��±���
        }
        return -1;//�������������û���ҵ�������-1
    }


}
//3��ɾ��ָ������ϵ��
void deletePerson(Addressbooks *abs)
{
    cout << "��������Ҫɾ������ϵ��" << endl;
    string name;
    cin >> name;
    //ref = -1 δ�鵽
    //ref != -1 �鵽��
    int ref = isExist(abs, name);
    if (ref != -1)
    {
        //�ҵ����ˣ�Ҫ����ɾ������
        for (int i = ref; i < abs->m_Size; i++)//ע��i = ref
        {
            //����Ǩ��
            abs->personArray[i] = abs->personArray[i + 1];
            
        }
        abs->m_Size--;//����ͨѶ¼�е���Ա��
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    system("pause");//�밴���������
    system("cls");//��������

}
//4��������ϵ��
void findPerson(Addressbooks* abs)
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ref = isExist(abs, name);
    if (ref != -1)//�ҵ���ϵ��
    {
        cout << "����Ϊ: " << abs->personArray[ref].m_Name << "\t";
        cout << "�Ա�Ϊ: " << (abs->personArray[ref].m_Sex == 1 ? "��" : "Ů") << "\t";
        cout << "����Ϊ: " << abs->personArray[ref].m_Age << "\t";
        cout << "�绰Ϊ: " << abs->personArray[ref].m_Phone << "\t";
        cout << "סַΪ: " << abs->personArray[ref].m_Addr << endl;
    }
    else//δ�ҵ���ϵ��
    {

        cout << "���޴���" << endl;

    }
    system("pause");//�밴���������
    system("cls");//��������
}
//5���޸���ϵ��
void modifyPerson(Addressbooks *abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ref = isExist(abs, name);
    if (ref != -1)//�ҵ�����ϵ��
    {
        string name;//����
        cout << "����������: " << endl;
        cin >> name;
        abs->personArray[ref].m_Name = name;
        //�Ա�
        cout << "�������Ա�: " << endl;
        cout << "1----�� " << endl;
        cout << "2----Ů " << endl;
        int sex;

        while (true)
        {
            //����������1 ������ 2 �����˳�ѭ�� ��Ϊ���������ȷֵ
            //�������������������
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ref].m_Sex = sex;
                break;
            }
            cout << "������������������" << endl;
        }
        //����
        cout << "����������: " << endl;
        int age;

        while (true)
        {
            //����������1 ������ 2 �����˳�ѭ�� ��Ϊ���������ȷֵ
            //�������������������
            cin >> age;
            if (age >= 0 && age <= 150)
            {
                abs->personArray[ref].m_Age = age;
                break;
            }
            cout << "������������������" << endl;
        }
        //��ϵ�绰
        string phone;
        cout << "��������ϵ�绰: " << endl;
        cin >> phone;
        abs->personArray[ref].m_Phone = phone;


        //��ͥ��ַ
        string address;
        cout << "�������ͥ��ַ: " << endl;
        cin >> address;
       
        cout << "�޸ĳɹ�" << endl;


    }
    else//δ�ҵ���ϵ��
    {
        cout << "���޴���" << endl;
    }

    system("pause");//�밴���������
    system("cls");//��������

}
//6�������ϵ��
void clearPerson(Addressbooks* abs)
{
    cout << "���Ƿ�ȷ��ѡ�����������ϵ��" << endl;
    cout << "���֮����ϵ�����ݽ��ᶪʧ" << endl;
    cout << "1-----��" << endl;
    cout << "2-----��" << endl;

    int num = 0;

    while (true)
    {
        //����������1 ������ 2 �����˳�ѭ�� ��Ϊ���������ȷֵ
        //�������������������
        cin >> num;
        if (num == 1 || num == 2)
        {
            if (num == 1)
            {
                abs->m_Size = 0;//����ǰ��¼����ϵ����������Ϊ0�����߼��ϵ���ղ���
                cout << "ͨѶ¼�����" << endl;
                break;
            }
            else
            {
               
                break;
            }
        }
        else
        {
            cout << "������������������" << endl;
        }
       
    }

   
    system("pause");//�밴���������
    system("cls");//��������
}
int main()
{
    //����ͨѶ¼�ṹ�����
    Addressbooks abs;
    //��ʼ��ͨѶ¼�е�ǰ��Ա����
    abs.m_Size = 0;


    int elect = 0;
    while(true)
    {
        //��ʾ�˵�
        showMenu();
        cin >> elect;
        switch (elect)
        {
        case 1://1�������ϵ��
            addPerson(&abs);//���õ�ַ���ݣ���������ʵ��
            break;
        case 2://2����ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3://3��ɾ����ϵ��
        /*{
            cout << "������ɾ����ϵ������: " << endl;
            string name;
            cin >> name;
            if (isExist(&abs, name) == -1)
            {
                cout << "���޴���" << endl;

            }
            else
            {

                cout << "�ҵ�����" << endl;

            }
        } */
            deletePerson(&abs);
            break;
        case 4://4��������ϵ��
            findPerson(&abs);
            break;
        case 5://5���޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6://6�������ϵ�� 
            clearPerson(&abs);
            break;
        case 0://0���˳�ͨѶ¼
            cout << "��ӭ�´�ʹ��" << endl;
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