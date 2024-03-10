#include <iostream>

int main() 
{
	//자료형* 변수명 = new 자료형;

	int arr_size;
	std::cout << "배열의 크기를 입력하세요 : ";
	std::cin >> arr_size;

	char* list = new char[arr_size];

	for (int i = 0; i < arr_size; ++i) {
			std::cout << i << " 번째 배열의 문자 : ";
			std::cin >> list[i];
		}

			
	for (int i = 0; i < arr_size; ++i )
	std::cout << i << " 번째 List : " << list[i] << std::endl;	//739kb 소모
		
	

	//bool input = false;
	//bool zero_ck = false;

	//for (int i = 0; i < arr_size; ++i) {
	//	if (input == false) {
	//		std::cout << i << " 번째 배열의 문자 : ";
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
	//		std::cout << i << " 번째 List : " << list[i] << std::endl;
	//	}

	//}	//739 kb 소모


	///메모리 차이가 없네 ㅎㅎ,,,,,

	delete[] list;


	return 0;


}