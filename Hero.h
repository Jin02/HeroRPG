#ifndef __HERO_H_
#define __HERO_H_

typedef struct _HERO{

	BOOL blsDead;
	BOOL blsDead2;

	int hp;
	int mp;
	int hpmax;
	int mpmax;
	int score;
	int exp;
	int expmax;
	int levelup;
	int attack;
	int defense;
	int money;
	
	int x;
	int y;
	
	char c;
	char d;
	WORD fg;

}HERO;

void InitialHero();
void ReleaseHero();
void Herofalse();
void Herodiedraw();
void HeroNotMoney();
void HeroMed();
void MoveHero();
void DrawHero();


#endif
