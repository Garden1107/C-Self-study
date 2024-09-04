//#include <iostream>
//
//int main(void)
//{
//	int num = 20;
//	std::cout << "hello world!" << std::endl;
//	std::cout << "hello " << "world!" << std::endl;
//	std::cout << num << ' ' << 'a';
//	std::cout << " " << 3.14;
//	return 0;
//}

//#include <iostream>
//
//int main(void) {
//	int val1;
//	std::cout << "첫 번째 숫자입력: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번째 숫자입력: ";
//	std::cin >> val2;
//
//	double val3;		//변수 자료형 바꾸고 산수 ㄱㄴ.
//	std::cout << "세 번째 숫자입력: ";
//	std::cin >> val3;
//
//	int result = val1 + val2 + val3;  
//	std::cout << result <<std::endl;
//	 
//	return 0;
//}

//#include <iostream>
//
//int main(void) {
//	int val1, val2; //변수 동시선언 가능
//	int result = 0;
//	std::cout << "두 개의 숫자입력: ";
//	std::cin >> val1 >> val2;
//
//	if (val1 < val2) 
//	{
//		for (int i = val1 + 1; i < val2; i++)
//			result += i;
//	}
//	else 
//	{
//		for (int i = val2 + 1; i < val1; i++) //for문 초기화문장내에서 변수선언 가능
//			result += i;
//	}
//	std::cout <<"두 수 사이의 정수 합: " << result << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main(void) {
//	char name[100];
//	char lang[200];
//
//	std::cout << "이름은 무엇입니까? ";
//	std::cin >> name;
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
//	std::cin >> lang;
//
//	std::cout << "내 이름은 " << name << "입니다.\n";  //c언어에서 사용하던 개행문자 사용가능.
//	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
//	return 0;
//}


//문제1 정수5개 입력 및 그들의 합 출력 0
//#include <iostream>
//
//int main(void)
//{
//	int val1, val2, val3, val4, val5;
//	std::cout << "1번째 정수 입력: ";
//	std::cin >> val1;
//	std::cout << "2번째 정수 입력: ";
//	std::cin >> val2;
//	std::cout << "3번째 정수 입력: ";
//	std::cin >> val3;
//	std::cout << "4번째 정수 입력: ";
//	std::cin >> val4;
//	std::cout << "5번째 정수 입력: ";
//	std::cin >> val5;
//
//	int result = val1 + val2 + val3 + val4 + val5;
//	std::cout << "합계: "<<result<< std::endl;
//	return 0;
//}

//문제2 전화번호 이름입출력 0
//#include <iostream>
//
//int main(void) 
//{
//	char name[100];
//	char number[100];
//
//	std::cout << "이름: ";
//	std::cin >> name;
//
//	std::cout << "전화번호: ";
//	std::cin >> number;
//
//	std::cout << "이름: " << name << ", 전화번호: " << number << std::endl;
//	return 0;
//}

//문제3 구구단 만들기 0
//#include <iostream>
//
//int main(void) {
//	int n;
//	std::cout << "원하는 구단숫자 입력: ";
//	std::cin >> n;
//
//	for (int i = 1; i < 10; i++) {
//		std::cout << n << " * " << i << " = " << n * i << std::endl;
//	}
//	return 0;
//}


//문제4 판매원들의 급여계산 0

//#include <iostream>
//
//int main(void) {
//	int m;
//	int result;
//
//	while (true)
//	{
//		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
//		std::cin >> m;
//
//		if(m == -1) {
//			std::cout << "프로그램을 종료합니다." << std::endl;
//			break;
//		}
//		else {
//			result = 50 + m * 0.12;
//			std::cout << "이번 달 급여: " << result << "만원\n";
//		}
//		
//	}
//	return 0;
//}