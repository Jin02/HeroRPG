#ifndef _VILLAGE_H_
#define _VILLAGE_H_

typedef struct _VILLAGE{

    BOOL blsDead;

	int blsDead1;
	int blsDead2;
	int blsDead3;
	int x;
	int y;
	int hp;

	DWORD ShowTime;
	WORD fg;

}VILLAGE;

void VillageDraw();
void Villagecheck();
void VillageIntal();
void InitialCrash();

#endif
