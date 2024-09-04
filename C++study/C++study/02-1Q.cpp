//문제1 참조자 사용 2가지 함수 만들기 해결여부: O
//
//#include <iostream>
//using namespace std;
//
//void AddOne (int &ref1) {
//	ref1 += 1;
//}
//
//void Negative(int& ref2) {
//	ref2 *= -1;
//}
//
//int main(void) {
//	int val1 = 10;
//	int val2 = 20;
//	AddOne(val1);
//	Negative(val2);
//	cout << "AddOne: " << val1 << endl;
//	cout << "Negative: " << val2 << endl;
//	return 0;
//}

//문제2 가리키는 대상바꾸는 함수정의  해결여부:*(도움받음)=>포인터 복습문제

//#include <iostream>
//using namespace std;
//
//void SwapPointer(int *ptr1, int *ptr2) {
//	int temp = *ptr1; //ptr1이 가리키는 값을 temp에 저장
//	*ptr1 = *ptr2;  //ptr2가 가리키는 값을 ptr1이 가리키는 곳에 저장
//	*ptr2 = temp;  //temp의 값을 ptr2가 가리키는 곳에 저장
//}
//
//
//int main(void) {
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//	SwapPointer(ptr1, ptr2);
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//포인터 연습

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int* ptr1 = &arr[0];
//	int* ptr2 = &arr[1];
//	int* ptr3 = &arr[2];
//	int* ptr4 = &arr[3];
//	int* ptr5 = &arr[4];
//
//	cout << "ptr1: " << *ptr1 << endl;
//	cout << "ptr2: " << *ptr2 << endl;
//	cout << "ptr3: " << *ptr3 << endl;
//	cout << "ptr4: " << *ptr4 << endl;
//	cout << "ptr5: " << *ptr5 << endl;
//
//	return 0;
//}

//문제2

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//	char str[] = "Hello, World!";
//	char* ptr = str;
//	int length = strlen(ptr);
//
//	cout << "역순 문자열: ";
//	for (int i = length - 1; i >= 0; i--) {
//		cout << ptr[i]; //배열 인덱스 사용 역순으로 출력
//	}
//	
// cout << endl;
//
//	cout << "문자열: " << ptr << endl; // 문자열을 출력
//	cout << "문자열 길이: " << length << endl; //문자열 길이 출력
//
//	return 0;
//}

//문제: 문자열에서 특정 문자의 개수 세기
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//	string val1;
//	char val2;
//	int num = 0;
//
//	cout << "문자열을 입력하세요: ";
//	getline(cin, val1);
//
//	cout << "찾고자 하는 문자를 입력하세요: ";
//	cin >> val2;
//
//
//	const char* ptr = &val1[0];
//
//	while (*ptr != '\0') {
//		if (*ptr == val2) {
//			num += 1;
//		}
//		ptr++; //포인터를 다음 문자로 이동
//	}
//
//	/*for (int i = 0; i < lenth; i++) {
//		if (val2 == ptr[i]){
//			num += 1;
//		}
//	}*/
//	cout << "문자 '" << val2 << "'이(가) " << num << "번 등장합니다." << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(void) {
//	string val1;
//	char val2;
//	int num = 0;
//
//	cout << "문자열을 입력하세요: ";
//	cin >> val1;
//
//	cout << "찾고자 하는 문자를 입력하세요: ";
//	cin >> val2;
//
//
//	const char* ptr = &val1[0];
//
//
//	for (int i = 0; i < val1.length(); i++) {
//		if (val2 == ptr[i]){
//			num += 1;
//		}
//	}
//
//	cout << "문자 '" << val2 << "'이(가) " << num << "번 등장합니다." << endl;
//	return 0;
//}