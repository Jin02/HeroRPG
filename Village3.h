#ifndef _VILLAGE3_H_
#define _VILLAGE3_H_

typedef struct _VILLAGE3{
	BOOL blsDead;

	int blsDead1;
	int blsDead2;
	int blsDead3;
	int x;
	int y;
	int hp;

	int Sibal;

	DWORD ShowTime;
	WORD fg;
}VILLAGE3;

void Village3draw();
void Village3check();
void Village3Intal();

#endif
