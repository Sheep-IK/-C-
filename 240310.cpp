#include <iostream>

int main() 
{
	//�ڷ���* ������ = new �ڷ���;

	int arr_size;
	std::cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	std::cin >> arr_size;

	char* list = new char[arr_size];

	for (int i = 0; i < arr_size; ++i) {
			std::cout << i << " ��° �迭�� ���� : ";
			std::cin >> list[i];
		}

			
	for (int i = 0; i < arr_size; ++i )
	std::cout << i << " ��° List : " << list[i] << std::endl;	//739kb �Ҹ�
		
	

	//bool input = false;
	//bool zero_ck = false;

	//for (int i = 0; i < arr_size; ++i) {
	//	if (input == false) {
	//		std::cout << i << " ��° �迭�� ���� : ";
	//		std::cin >> list[i];
	//		
	//		if (i + 1 == arr_size) {
	//			input = true;
	//			--i;
	//		}
	//	}
	//	else {
	//		if (zero_ck == false) {
	//			zero_ck = true;
	//			i = 0;
	//		}
	//		std::cout << i << " ��° List : " << list[i] << std::endl;
	//	}

	//}	//739 kb �Ҹ�


	///�޸� ���̰� ���� ����,,,,,

	delete[] list;


	return 0;


}