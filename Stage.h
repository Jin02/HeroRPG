#ifndef _STAGE_H_
#define _STAGE_H_

typedef struct _STAGE{

	BOOL blsDead;
	BOOL Menu;


	int blsDead1;
	int blsDead2;
	int blsDead3;
	int x;
	int y;
	int hp;

	WORD fg;

}STAGE;

void GameStart();


void StageDraw();
void GameInfo();
void GameSave();
void GameLoad();

#endif
