//#include <iostream>
//#include <typeinfo>
//#include <vector>
//int main()
//{
//	int i;
//	decltype(i) j = 0;
//
//	std::cout << typeid(j).name() << std::endl;
//	float a;
//	double b;
//	decltype(a + b) c;
//	std::cout << typeid(c).name() << std::endl;
//
//	std::vector<int>tmp;
//	decltype(tmp.begin()) k;
//	for (k = tmp.begin(); k != tmp.end(); i++)
//	{
//		//....
//	}
//	enum{Ok,Error}flag;
//	decltype(flag) flag2;
//	std::cout << typeid(flag2).name() << std::endl;
//	system("pause");
//	return 0;
//}