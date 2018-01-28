#ifndef _SHOP2_H_
#define _SHOP2_H_

typedef struct _SHOP2{
	
	BOOL blsDead;
	
	int score;
	int defense;
	int defenseup;

	int leather;
	int bone;
	int bronze;
	int iron;
	int steel;

	int leatherMoney;
	int boneMoney;
	int bronzeMoney;
	int ironMoney;
	int steelMoney;

	WORD fg;

}SHOP2;

void Shop2Draw();
void defenseinital();
void Shop2check();

#endif
