//#include <iostream>
//
//int Adder(int num1 = 1, int num2 = 2) {
//	return num1 + num2;
//}
//
//int main(void) {
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int Adder(int num1 = 1, int num2 = 2);
//
//int main(void) {
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}
//
//int Adder(int num1, int num2) {
//	return num1 + num2;
//}

//#include <iostream>
//
//int BoxVolume(int length, int width = 1, int height = 1);
//
//
//int main(void) {
//	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
//	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
//	//std::cout << "D,D,D : " << BoxVolume() << std::endl; 
//	//BoxVolume�Լ����� length�� ����Ʈ�� ����X�̹Ƿ� �ּ��ϳ��� �������� �ʿ�.
//	return 0;
//}
//
//int BoxVolume(int length, int width, int heigth)
//{
//	return length * width * heigth;
//}


//����1 [�� BoxVolume�Լ� �����ε����� �����ϱ�]
//#include <iostream>
//int BoxVolume(int length, int width, int height) {
//	return length * width * height;
//}
//
//int BoxVolume(int length, int width) {
//	return length * width;
//}
//
//int BoxVolume(int length) {
//	return length;
//}
//
//
//int main(void) {
//	std::cout << "[3, 3, 3] : " <<BoxVolume(3, 3, 3)<< std::endl;
//	std::cout << "[5, 5, D] : " <<BoxVolume(5, 5)<< std::endl;
//	std::cout << "[7, D, D] : " <<BoxVolume(7)<< std::endl;
//	return 0;
//}

//#include <iostream> //��ȣ�� �߻��ϴ� �����ε� �Լ�
//
//int Se(int a = 10) {
//	return a + 1;
//}
//
//int Se(void) {
//	return 10;
//}
