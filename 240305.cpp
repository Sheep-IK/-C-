#include <iostream>
#include "animal.h"

namespace animal {
	int func() {
		rabbit();
		return 0;
	}
}
//using animal::func;

int main() {
	rabbit();
	std::cout << "�ݰ��� ����� ���� ���л��̴�!" << std::endl;
	return 0;
}
