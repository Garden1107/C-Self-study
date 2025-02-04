//#include <iostream>
//
//namespace BestComImp1 {
//	void SimpleFunc(void) {
//		std::cout << "BestCom이 정의한 함수" << std::endl;
//	}
//}
//
//namespace ProgComImp1 {
//	void SimpleFunc(void) {
//		std::cout << "ProgCom이 정의한 함수" << std::endl;
//	}
//}
//
//int main(void) {
//	BestComImp1::SimpleFunc();
//	ProgComImp1::SimpleFunc();
//	return 0;
//}

//#include <iostream>
//
//namespace BestComImp1 {
//	void SimpleFunc(void);
//}
//
//namespace ProgComImp1 {
//	void SimpleFunc(void);
//}
//
//int main(void) {
//	BestComImp1::SimpleFunc();
//	ProgComImp1::SimpleFunc();
//	return 0;
//}
//
//void BestComImp1::SimpleFunc(void){
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void) {
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}

//#include <iostream>
//
//namespace BestComImp1 {
//	void SimpleFunc(void);
//}
//
//namespace BestComImp1 {
//	void PrettyFunc(void);
//}
//
//namespace ProgComImp1 {
//	void SimpleFunc(void);
//}
//
//int main(void) {
//	BestComImp1::SimpleFunc();
//	return 0;
//}
//
//void BestComImp1::SimpleFunc(void) 
//{
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//	PrettyFunc();  //동일 이름공간이기 때문에 따로 이름공간명시 필요없.
//	ProgComImp1::SimpleFunc();   //다른 이름공간, 명시 필요.
//}
//
//void BestComImp1::PrettyFunc(void) {
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void) {
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}