#include<stdio.h>
#include<stdlib.h>
int main()
{
	//1.通过动态开辟申请10个int类型的空间
	int* ptr = (int*)malloc(10 * sizeof(int));//通常结合sizeof一起使用
	//根据实际使用强制类型转换为想要的类型
	//2.malloc有可能申请空间失败，所以需要判断一下
	if (ptr == NULL)
	{
		perror("main");//perror是一个报错函数，实际出错时打印效果为：main:xxxxxx（错误原因）
		return 0;//出错就直接结束函数
	}
	//3.使用 给这10个整型空间赋值
	for (int i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}
	//打印一下
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ptr[i]);//这里可以直接使用数组下标的形式，和指针解引用是一样的
	}
	//4.释放
	free(ptr);
	ptr = NULL;//需要手动置为NULL，防止非法访问
	return 0;
}
//注意： 用malloc申请的空间，里面的内容是随机值，如果不初始化的话，可能就会得到一些意想不到的值；
//理解：如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。