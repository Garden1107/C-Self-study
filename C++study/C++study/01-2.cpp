//#include <iostream>
//
//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//
//void MyFunc(int a, int b) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main(void) {
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//
//}


//문제01-2 [함수 오버로딩]

//#include <iostream>  //&주소 *주소가 가리키는 값(?)
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(char* a, char* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(double* a , double* b){
//	double temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(void) {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	double dbl1 = 1.111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	std::cout << dbl1 << ' ' << dbl2 << std::endl;
//	return 0;
//
//}
