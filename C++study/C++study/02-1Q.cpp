//����1 ������ ��� 2���� �Լ� ����� �ذῩ��: O
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

//����2 ����Ű�� ���ٲٴ� �Լ�����  �ذῩ��:*(�������)=>������ ��������

//#include <iostream>
//using namespace std;
//
//void SwapPointer(int *ptr1, int *ptr2) {
//	int temp = *ptr1; //ptr1�� ����Ű�� ���� temp�� ����
//	*ptr1 = *ptr2;  //ptr2�� ����Ű�� ���� ptr1�� ����Ű�� ���� ����
//	*ptr2 = temp;  //temp�� ���� ptr2�� ����Ű�� ���� ����
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

//������ ����

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

//����2

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//	char str[] = "Hello, World!";
//	char* ptr = str;
//	int length = strlen(ptr);
//
//	cout << "���� ���ڿ�: ";
//	for (int i = length - 1; i >= 0; i--) {
//		cout << ptr[i]; //�迭 �ε��� ��� �������� ���
//	}
//	
// cout << endl;
//
//	cout << "���ڿ�: " << ptr << endl; // ���ڿ��� ���
//	cout << "���ڿ� ����: " << length << endl; //���ڿ� ���� ���
//
//	return 0;
//}

//����: ���ڿ����� Ư�� ������ ���� ����
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//	string val1;
//	char val2;
//	int num = 0;
//
//	cout << "���ڿ��� �Է��ϼ���: ";
//	getline(cin, val1);
//
//	cout << "ã���� �ϴ� ���ڸ� �Է��ϼ���: ";
//	cin >> val2;
//
//
//	const char* ptr = &val1[0];
//
//	while (*ptr != '\0') {
//		if (*ptr == val2) {
//			num += 1;
//		}
//		ptr++; //�����͸� ���� ���ڷ� �̵�
//	}
//
//	/*for (int i = 0; i < lenth; i++) {
//		if (val2 == ptr[i]){
//			num += 1;
//		}
//	}*/
//	cout << "���� '" << val2 << "'��(��) " << num << "�� �����մϴ�." << endl;
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
//	cout << "���ڿ��� �Է��ϼ���: ";
//	cin >> val1;
//
//	cout << "ã���� �ϴ� ���ڸ� �Է��ϼ���: ";
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
//	cout << "���� '" << val2 << "'��(��) " << num << "�� �����մϴ�." << endl;
//	return 0;
//}