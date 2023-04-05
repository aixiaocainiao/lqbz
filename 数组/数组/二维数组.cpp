//#include <iostream>
//using namespace std;
//int main()
//{
//	/*int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };
//	cout << "数组元素分别为： " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << score2[i] << endl;
//
//	}
//
//	system("pause");
//	return 0;*/
//
//
//
//
//	/*int score[2][3] = { {100,90,80},
//		                {70,60,50 } 
//	                   };
//	cout << "数组元素分别为： " << endl;
//	for (int i = 0; i < 2 ; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << score[i][j] << " ";
//
//		}
//		cout << endl;
//
//	}
//
//	system("pause");
//	return 0;*/
//
//
//	//数组名用途
//	//1、可以获取整个数组占用内存空间大小
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
//	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
//	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2、可以通过数组名获取到数组首地址
//	cout << "数组首地址为： " << (int)arr << endl;
//	cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
//	cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;
//
//	//arr = 100; 错误，数组名是常量，因此不可以赋值
//
//
//	system("pause");
//
//	return 0;
//
//
//
//}