//QT�汾����
#include <iostream>
using namespace std;
/*
	constexpr������:
		������ֻ����һ������ֵ(�м�������)
		���������з���ֵ(������void����)
		��ʹ��ǰ�����ж���
		return���������ʽ�в���ʹ�÷ǳ������ʽ�ĺ���ȫ������ �ұ�����һ���������ʽ


*/
#if 0
constexpr int func()
{
	//������ֻ����һ������ֵ(�м�������)
	constexpr int tmp = 1;
	return tmp;//�����

}
int a = 1;
constexpr int func02()
{
	//return���������ʽ�в���ʹ�÷ǳ������ʽ�ĺ���ȫ������ �ұ�����һ���������ʽ
	return a;//����ȫ�ֱ��� erro

}
#endif
//��ȷ
constexpr int func01()
{
	//�������typedef,usingָ���̬����

	static_assert(1, "fail");
	return 3;

}
#if 0
int test()
{
	return 10;

}
constexpr int func04()
{

	return test();

}
#endif
int main()
{



	system("pause");
	return 0;
}