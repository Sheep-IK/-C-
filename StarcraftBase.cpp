#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class soldier {
	
	int hp;									//ü��
	int coord_x, coord_y;		//��ǥ
	int atk;								//���ݷ�
	int def;								//����
	bool alive;							//��������
	char* name;

	public:
		soldier();
		soldier(int x, int y);
		soldier(int x, int y, const char* soldier_name);

		int attack();																//�������� ����
		void be_attacked(int damage_earn);					//�޴� �������� ����
		void move(int x, int y);											//��ǥ�� �̵�

		void show_status();				// ���¸� �����ش�.
};
soldier::soldier() {
	hp = 50;
	coord_x = coord_y = 0;
	atk = 10;
	def = 0;
	alive = true;
	name = NULL;
}

soldier::soldier(int x, int y, const char* solider_name) {
	name = new char[strlen(solider_name) + 1];
	strcpy(name, solider_name);

	coord_x = x; 
	coord_y = y; 
	hp = 50;
	atk = 10;
	def = 0;
	alive = true;
}	

int soldier::attack() { return atk; }
void soldier::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) alive = false;

}

void soldier ::show_status() {
	std::cout << "*Soldier* ."<< std::endl;
	std::cout << "HP : " << hp << std::endl;
	std::cout << "Location ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << "ATK : " << atk << " , " << "DEF : " << def << std::endl;
}


int main() {
	soldier* Soldier[100];

	Soldier[0] = new soldier(2, 5, "Soldier1");
	Soldier[1] = new soldier(3, 4, "Soldier2");

	Soldier[0]->show_status();
	Soldier[1]->show_status();
	
	std::cout << std::endl << "��'Soldier1' attacked 'Soldier2'!!��" << std::endl << std::endl;
	Soldier[1]->be_attacked(Soldier[0]->attack());

	Soldier[0]->show_status();
	Soldier[1]->show_status();

	delete	 Soldier[0];
	delete	 Soldier[1];

}
