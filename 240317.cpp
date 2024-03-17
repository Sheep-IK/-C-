#include <iostream>

//void output(int x) { std::cout << "int :" << x << std::endl; }
//void output(char x) { std::cout << "char :" << x << std::endl; }
//void output(double x) { std::cout << "double :" << x << std::endl; }



class Date {
	int year_;
	int month_;  // 1 부터 12 까지.
	int day_;    // 1 부터 31 까지.

public:

	void ShowDate();

	Date() { 
		year_ = 2024;
		month_ = 7;
		day_ = 12;
	}

	Date(int year, int month, int day) {
		year_ = year;
		month_ = month;
		day_ = day;
	}
};

void Date::ShowDate() {
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
		<< " 일 입니다 " << std::endl;
}


int main()
{

	Date day = Date();
	Date day2(2000, 2, 10);

	day.ShowDate();
	day2.ShowDate();

	return 0;
} 