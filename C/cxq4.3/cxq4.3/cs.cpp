//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main()
//{
//	
//
//	const int Arsize = 20;
//	char name1[Arsize];
//	char name[Arsize];
//	cout << "please enter your name" << endl;
//	cin.get(name, Arsize).get();
//	cin.get(name, Arsize);
//	cin.get();
//    cin.get();
//	cin.getline(name, Arsize);
//	cout << "enter your favorite dessert:" << endl;
//	cin.get(name1, Arsize).get();
//	cin.getline(name1, Arsize);
//
//
//     cin.getline(name, Arsize).getline(name, Arsize);
//	cout << " I have " "some delicious \n" << name1;
//	cout << " for you ," << name << ".\n";
//	
//
//
//
//
//
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//
//struct inflatable
//{
//	std::string name;
//	char name[20];
//	float volume;
//
//	double price;
//
//
//
//};
//int main()
//{
//	 
//
//
//
//}


#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;

};

int main()
{

	using namespace std;
	inflatable bouque =
	{
		"sunflowers",
		0.20,
		12.49




	};
	inflatable choice;
	cout << "bouque; " << bouque.name << " for $"
	     << bouque.price << endl;
	choice = bouque;
	cout << "choice; " << choice.name << " for $"
		<< choice.price  << endl;









	return 0;
}