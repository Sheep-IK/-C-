#include <iostream>


int change_val(int& a) {
	a = 10;

	return 0;
}

int main() {
	int soon_change = 5;

	std::cout<< soon_change << std::endl;
	change_val(soon_change);
	std::cout << soon_change << std::endl;

	soon_change = 15;

	return 0;
}