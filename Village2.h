#ifndef _VILLAGE2_H_
#define _VILLAGE2_H_

typedef struct _VILLAGE2{
	BOOL blsDead;

	int blsDead1;
	int blsDead2;
	int blsDead3;
	int x;
	int y;
	int hp;

	WORD fg;
}VILLAGE2;

void Village2Draw();
void Village2check();
void Village2Intal();

#endif
