#include <iostream>

class soldier {
	
	int hp;									//ü��
	int coord_x, coord_y;		//��ǥ
	int atk;								//���ݷ�
	int def;								//����
	bool alive;							//��������

	public:
		soldier();
		soldier(int x, int y);

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

}

soldier::soldier(int x, int y) {
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
	soldier Soldier1(2, 5);
	soldier Soldier2(3, 4);

	Soldier1.show_status();
	Soldier2.show_status();

	std::cout << std::endl << "��'Soldier1' attacked 'Soldier2'!!��" << std::endl << std::endl;
	Soldier2.be_attacked(Soldier1.attack());

	Soldier1.show_status();
	Soldier2.show_status();

}
