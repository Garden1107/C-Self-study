////#include <iostream>
////
////namespace Hybrid {
////	void HybFunc(void) {
////		std::cout << "So simple function!" << std::endl;
////		std::cout << "In namespace Hybrid!" << std::endl;
////	}
////}
////
////int main(void) {
////	using Hybrid::HybFunc;
////	HybFunc();
////	return 0;
////}
//
//
////#include <iostream>  
////using���� �Լ���, ���� ����>>cin,cout,endl��� �̸����� ���ʿ�.
//// 
//// 
//// 
////
////using std::cin;
////using std::cout;
////using std::endl;
////
////int main(void) {
////	int num = 20;
////	cout << "Hello World!" << endl;
////	cout << "Hello " << "World!" << endl;
////	cout << num << ' ' << 'A';
////	cout <<' '<< 3.14 << endl;
////	return 0;
////}
//
////�̸�����std�� ����� ���Ϳ� ���� �̸����� ���������ϱ�
////using namespace std;
//
////#include <iostream>
////
////using namespace std;
////
////int main(void) {
////	int num = 20;
////	cout << "Hellp World!" << endl;
////	cout << "Hello " << "World!" << endl;
////	cout << num << ' ' << 'A';
////	cout << ' ' << 3.14 << endl;
////	return 0;
////}
//
////namespace ��ġ��
//
//#include <iostream>
//
//using namespace std;
//
//namespace AAA {
//	namespace BBB {
//		namespace CCC {
//			int num1;
//			int num2;
//		}
//	}
//}
//
//int main(void) {
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//	namespace ABC = AAA::BBB::CCC;
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//	return 0;
//}