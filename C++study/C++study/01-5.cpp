//#include <iostream>
//
//namespace BestComImp1 {
//	void SimpleFunc(void) {
//		std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	}
//}
//
//namespace ProgComImp1 {
//	void SimpleFunc(void) {
//		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
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
//	std::cout << "BestCom�� ������ �Լ�" << std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void) {
//	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
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
//	std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	PrettyFunc();  //���� �̸������̱� ������ ���� �̸�������� �ʿ��.
//	ProgComImp1::SimpleFunc();   //�ٸ� �̸�����, ��� �ʿ�.
//}
//
//void BestComImp1::PrettyFunc(void) {
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImp1::SimpleFunc(void) {
//	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
//}