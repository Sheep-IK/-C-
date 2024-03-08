#include <iostream>


int main() {

	int user_input = 0;

	std::cout << "나의 정보" << std::endl;
	std::cout << "1. 나이" << std::endl;
	std::cout << "2. 학년" << std::endl;
	std::cout << "3. 성별" << std::endl;
	std::cout << "4. 종료" << std::endl;



	while (user_input != 4) {
		std::cin >> user_input;
		switch (user_input) {
		case 1:
			std::cout << "만 20세" << std::endl;
			break;

		case 2:
			std::cout << "한국공대 3학년 , 현재 휴학중 " << std::endl;
			break;

		case 3:
			std::cout << "남성 인듯?" << std::endl;
			break;

		case 4:
			std::cout << "종료" << std::endl;
			break;

		}
		

	}


	return 0;
}

