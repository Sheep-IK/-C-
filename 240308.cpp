#include <iostream>


int main() {

	int user_input = 0;

	std::cout << "���� ����" << std::endl;
	std::cout << "1. ����" << std::endl;
	std::cout << "2. �г�" << std::endl;
	std::cout << "3. ����" << std::endl;
	std::cout << "4. ����" << std::endl;



	while (user_input != 4) {
		std::cin >> user_input;
		switch (user_input) {
		case 1:
			std::cout << "�� 20��" << std::endl;
			break;

		case 2:
			std::cout << "�ѱ����� 3�г� , ���� ������ " << std::endl;
			break;

		case 3:
			std::cout << "���� �ε�?" << std::endl;
			break;

		case 4:
			std::cout << "����" << std::endl;
			break;

		}
		

	}


	return 0;
}

