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
	std::cout << "반갑다 세상아 나는 휴학생이다!" << std::endl;
	return 0;
}
