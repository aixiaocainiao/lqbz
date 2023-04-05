//#include <iostream>
//#include<string>
//#include <vector>
//using namespace std;
//void printvector(vector<int>& v)
//{
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//	//Î²²å
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	printvector(v1);
//
//	//Î²É¾
//	v1.pop_back();
//	v1.pop_back();
//	printvector(v1);
//
//	//²åÈë µÚÒ»¸öÊýÊÇµü´úÆ÷
//	v1.insert(v1.begin(), 100);
//	printvector(v1);
//
//
//	v1.insert(v1.begin(),2,1000);
//	printvector(v1);
//
//	//É¾³ý
//	v1.erase(v1.begin());
//	printvector(v1);
//
//	//Çå¿Õ
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printvector(v1);
//
//
//
//
//
//
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}
////Î²²å push_back
////Î²É¾ pop_back
////²åÈë insert(Î»ÖÃµü´úÆ÷£©
////É¾³ý --erase(Î»ÖÃµü´úÆ÷)
////Çå¿Õ --clear