//#include <iostream>
//using namespace std;
//int main()
//{
//	int str[10] = { 10,3,4,2,5,6,7,9,8,11 };
//	int end = sizeof(str) / sizeof(str[0]);
//	cout << "end = " << end << endl;
//	int temp = 0;
//
//	for (int i = 0; i < end -1; i++)
//	{
//
//		for (int j = 0; j < end - i - 1; j++)
//		{
//
//																									/*if (str[j] > str[j+1])       
//																									{
//																										temp = str[j];
//																										str[j] = str[j+1];
//																										str[j+1] = temp;
//																									}*/
//			if (str[j] < str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//
//
//			}
//
//
//		}
//
//
//
//
//	}
//	for (int i = 0; i < end; i++)
//	{
//		cout << str[i] << endl;
//
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}