#include <iostream>
using namespace std;
//���������Ƿ��������н׶� ���Բ�����ö����ʹ�� ö��ֵ��ʼ�������ǳ���ֵ
int GetNum()
{

	return 3;

}
const int GetNum2()
{

	return 3;

}
//constexpr �������ʽ �����ڱ���׶�
constexpr int GetNum3()
{

	return 3;


}
int main()
{

	//enum
	//{
	//	//ö�ٳ�Ա��ʼ�� �����������γ���
	//	//e1 = GetNum(),e2  int GetNum()
	//	//e1 = GetNum(), e2  const int GetNum2()
	//	//e1 = GetNum(), e2   vs��֧�ֶ��� ����std11��QT�к��������ǿ���֧�ֵ�Ҳ������Ҫѧϰ��std11
	//};
	enum{ e1 = GetNum(), e2 };		//OK�� vs������������
	constexpr int tmp = GetNum3z();	//OK�� vs������������
	enum { a1 = tmp, a2 };			//OK�� vs������������  �����ڱ���׶�

	system("pause");
	return 0;
}