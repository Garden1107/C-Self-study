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
//	std::cout << "ù ��° �����Է�: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "�� ��° �����Է�: ";
//	std::cin >> val2;
//
//	double val3;		//���� �ڷ��� �ٲٰ� ��� ����.
//	std::cout << "�� ��° �����Է�: ";
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
//	int val1, val2; //���� ���ü��� ����
//	int result = 0;
//	std::cout << "�� ���� �����Է�: ";
//	std::cin >> val1 >> val2;
//
//	if (val1 < val2) 
//	{
//		for (int i = val1 + 1; i < val2; i++)
//			result += i;
//	}
//	else 
//	{
//		for (int i = val2 + 1; i < val1; i++) //for�� �ʱ�ȭ���峻���� �������� ����
//			result += i;
//	}
//	std::cout <<"�� �� ������ ���� ��: " << result << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main(void) {
//	char name[100];
//	char lang[200];
//
//	std::cout << "�̸��� �����Դϱ�? ";
//	std::cin >> name;
//	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
//	std::cin >> lang;
//
//	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";  //c���� ����ϴ� ���๮�� ��밡��.
//	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
//	return 0;
//}


//����1 ����5�� �Է� �� �׵��� �� ��� 0
//#include <iostream>
//
//int main(void)
//{
//	int val1, val2, val3, val4, val5;
//	std::cout << "1��° ���� �Է�: ";
//	std::cin >> val1;
//	std::cout << "2��° ���� �Է�: ";
//	std::cin >> val2;
//	std::cout << "3��° ���� �Է�: ";
//	std::cin >> val3;
//	std::cout << "4��° ���� �Է�: ";
//	std::cin >> val4;
//	std::cout << "5��° ���� �Է�: ";
//	std::cin >> val5;
//
//	int result = val1 + val2 + val3 + val4 + val5;
//	std::cout << "�հ�: "<<result<< std::endl;
//	return 0;
//}

//����2 ��ȭ��ȣ �̸������ 0
//#include <iostream>
//
//int main(void) 
//{
//	char name[100];
//	char number[100];
//
//	std::cout << "�̸�: ";
//	std::cin >> name;
//
//	std::cout << "��ȭ��ȣ: ";
//	std::cin >> number;
//
//	std::cout << "�̸�: " << name << ", ��ȭ��ȣ: " << number << std::endl;
//	return 0;
//}

//����3 ������ ����� 0
//#include <iostream>
//
//int main(void) {
//	int n;
//	std::cout << "���ϴ� ���ܼ��� �Է�: ";
//	std::cin >> n;
//
//	for (int i = 1; i < 10; i++) {
//		std::cout << n << " * " << i << " = " << n * i << std::endl;
//	}
//	return 0;
//}


//����4 �Ǹſ����� �޿���� 0

//#include <iostream>
//
//int main(void) {
//	int m;
//	int result;
//
//	while (true)
//	{
//		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
//		std::cin >> m;
//
//		if(m == -1) {
//			std::cout << "���α׷��� �����մϴ�." << std::endl;
//			break;
//		}
//		else {
//			result = 50 + m * 0.12;
//			std::cout << "�̹� �� �޿�: " << result << "����\n";
//		}
//		
//	}
//	return 0;
//}