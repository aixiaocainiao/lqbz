#include <iostream>
using namespace std;

//ǰ��ʹ��const ��ʾ����ֵΪconst
class FunctionConst {
public:
    int value;
    FunctionConst();
    virtual ~FunctionConst();
    const  int getValue();
    int getValue2()  const;
};
FunctionConst::FunctionConst() :value(100)//����ʼ��value
{
    // TODO Auto-generated constructor stub

}
FunctionConst ::~FunctionConst() {
    // TODO Auto-generated destructor stub
}

const  int FunctionConst::getValue() {
    return value; //����ֵ�� const, ʹ��ָ��ʱ������.
}

int FunctionConst::getValue2()  const {
    //�˺��������޸�class FunctionConst�ĳ�Ա���� value
    value = 15; //�����, ��Ϊ��������� const
    return value;
}
//�����������еĳ�Ա����Ϊ��ֻ�����������������������const֮��ú������ܸı�������ݳ�Ա��
class aa {
    int num;
public:
    aa() {
        int b = 10;
        num = b;
    };
    int out1() {
        cout << num << endl;
    }
    void out2() const {
        cout << num << endl;
    }
    void out3() const {
        num += 10; //����const���������޸������ݳ�Ա
        cout << num << endl;
    }

};

int _tmain(int argc, char* argv[])
{
    aa a1;
    a1.out1();
    a1.out2();
    a1.out3();
    const aa a2;
    a2.out1(); // ����const�ĳ�Ա ���ܷ��ʷ�const�ĺ���
    a2.out2();
    a2.out3();
    return 0;
}
class Circle
{
public:
    Circle() :m_dPi(3.14) {} // ��ȷ��ʹ�ó�ʼ���б�
private:
    const double m_dPi;
}
//�޷��������ǵľ�̬��Ա�����ڹ��캯���и���ֵ���������: �ڳ�ʼ���б��и���ֵ��
const double m_dPi;  ���� �����޸�