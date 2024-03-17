#include <iostream>

//class Animal {
//private:
//	int food;
//	int weight;
//
//public:
//	void set_animal(int _food, int _weight) {
//		food = _food;
//		weight = _weight;
//	}
//	void increase_food(int inc) {
//		food += inc;
//		weight += (inc / 3);
//	}
//	void view_stat() {
//		std::cout << "�� ������ food     : " << food << std::endl;
//		std::cout << "�� ������ weight   : " << weight << std::endl;
//	}
//};	// �����ݷ� �����ʱ�
//
//
//
//
//int  main() {
//	Animal animal;
//	animal.set_animal(100, 50);
//	animal.increase_food(30);
//
//	animal.view_stat();
//	return 0;
//}


class Date {
	int year_;
	int month_;  // 1 ���� 12 ����.
	int day_;    // 1 ���� 31 ����.

public:
	void SetDate(int year, int month, int date) {
		year_ = year;
		month_ = month;
		day_ = date;
	}
	void AddDay(int inc) {
		for (int i = 0; i < inc; ++i) {
			if (month_ == 2) {
				if (day_ == 29 || (((year_ % 4) != 0) && day_ == 28)) {
					day_ = 0;
					month_ += 1;
				}
			}
			else { 
				if (day_ == 31) {
					day_ = 0;
					month_ += 1;
				}
			}
			day_ += 1;
		}
			
	}
	void AddMonth(int inc) {
		for (int i = 0; i < inc; ++i) {
			if (month_ >= 12) {
				month_ = 1;
				year_ += 1;
			}
			else
				month_ += 1;
		}

	}
	void AddYear(int inc) {
		year_ += inc;
	}
	void ShowDate() {
		std::cout << "�⵵�� : " << year_ << std::endl;
		std::cout << "���� : " << month_ << std::endl;
		std::cout << "��¥�� : " << day_ << std::endl;
	}
};

int main() {
	Date date;

		date.SetDate(2024, 2, 27);
		std::cout << "���� ��¥" << std::endl;
		date.ShowDate();


	while (1)
	{
		int add_num;

		std::cout << "�� ���� ���ұ�� : ";
		std::cin >> add_num;
		date.AddYear(add_num);

		std::cout << "�� ���� ���ұ�� : ";
		std::cin >> add_num;
		date.AddMonth(add_num);

		std::cout << "�� ���� ���ұ�� : ";
		std::cin >> add_num;
		date.AddDay(add_num);

		date.ShowDate();
		std::cout << std::endl;
	}


	// �޷� �����~ (�ϼ�)
}