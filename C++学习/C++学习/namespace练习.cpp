#include <iostream>
#include <stdlib.h>

//����һ�������ռ�ΪmyNum,�ڸ������ռ��ж���һ�����ͱ���x,
//�����ñ�����ֵΪ105��ʹ��C++�������ж�myNum�����ռ��µı�������������ż����
namespace myNum {

	int x = 105;
	


}
using namespace myNum;
int main()
{
	if (myNum::x % 2 == 0)
	{
		std::cout << "ż��" << std::endl;

	}
	else
	{
		std::cout << "����" << std::endl;
	}



	system("pause");
	return 0;
}
