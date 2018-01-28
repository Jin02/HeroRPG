#ifndef _MONSTER4_H_
#define _MONSTER4_H_

typedef struct _MONSTER4{
	BOOL blsDead;

	int x;
	int y;
	int Hp;
    int Attack;

	WORD fg;

}MONSTER4;

void Monster4Initial();
void Monster4Create();
void Monster4Draw();
void Monster4Release();


#endif
