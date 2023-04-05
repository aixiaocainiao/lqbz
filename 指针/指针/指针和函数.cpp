#include <iostream>
using namespace std;
#include <string>
void swap(int a, int b);
void swap(int* a, int* b);
int main()
{
	int a = 10;
	int b = 15;
	//值传递
	/*swap(a, b);*/
	//指针传递
	swap(&a, &b);

	/*cout << "值传递后的a= " << a << endl;
	cout << "值传递后的b= " << b << endl;*/
	cout << "指针传递的a= " << a << endl;
	cout << "指针传递的b= " << b << endl;






	system("pause");
	return 0;
}
//值传递
void swap(int a, int b)
{

	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "此时值传递的a= " << a << endl;
	cout << "此时值传递的b= " << b << endl;

}
//指针传递
void swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

	cout << "此时地址传递的a= " << *a << endl;
	cout << "此时地址传递的b= " << *b << endl;

}
