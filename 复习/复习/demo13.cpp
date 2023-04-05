////类做友元
//#include <iostream>
//using namespace std;
//#include <string>
//class Building;
//class Goodgay {
//public:
//	Goodgay();
//	void visit();
//	void visit01();
//
//
//public:
//	Building* building;
//};
//class Building {
//	friend void Goodgay::visit();
//
//public:
//	Building();
//public:
//	string sittingbed;
//private:
//	string bedroom;
//
//};
//Goodgay::Goodgay() {
//	building = new Building;
//}
//Building::Building() {
//	sittingbed = "客厅";
//	bedroom = "卧室";
//
//}
//void Goodgay::visit() {
//	cout << "基友正在访问: " << building->sittingbed << endl;
//	cout << "基友正在访问: " << building->bedroom << endl;
//}
//void Goodgay::visit01() {
//	cout << "基友正在访问: " << building->sittingbed << endl;
//	//cout << "基友正在访问: " << building->bedroom << endl;
//}
//void test() {
//	Goodgay gg;
//	gg.visit();
//}
//int main()
//{
//	test();
//
//
//
//	system("pause");
//	return 0;
//}