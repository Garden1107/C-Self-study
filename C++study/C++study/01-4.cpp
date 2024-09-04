//#include <iostream>
//
//inline int SQUARE(int x) {
//	return x * x;
//}
//
//int main(void) {
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}

/*#include <iostream>*/ 
//템플릿을 사용해 컴파일러의 자료형판단으로 인한 인라인함수의 값손실 방지한 코드

//template <typename T>
//inline T SQUARE(T x) {
//	return x*x;
//}
//
//int main(void) {
//	std::cout << SQUARE(5.5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}