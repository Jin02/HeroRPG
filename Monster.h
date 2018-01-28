#ifndef _MONSTER_H_
#define _MONSTER_H_

typedef struct _MONSTER{
	BOOL blsDead;

	int x;
	int y;
	int Hp;

	int CrashX;
	int CrashY;
	int Attack;

    WORD fg;
}MONSTER;

void MonsterInitial();
void MonsterCreate();
void MonsterDraw();
void MonsterRelease();


#endif
