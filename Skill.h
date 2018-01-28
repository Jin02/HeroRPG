#ifndef _SKILL_H_
#define _SKILL_H_

typedef struct _SKILL{
	
	BOOL blsDead1;
	BOOL blsDead2;
	BOOL blsDead3;
	BOOL blsDead4;
	BOOL blsDead5;

	BOOL DrawShop;
	
	int skill1Money;
	int skill2Money;
	int skill3Money;
	int skill4Money;
	int skill5Money;

	int Health;
	int Brain;

	int Skill3Attack;
	int Skill4Attack;
	int Skill5Attack;

	int Skill3mp;
	int Skill4mp;
	int Skill5mp;
	
}SKILL;

void Skillinital();
void SkillDraw();
void SkillCheck();


#endif
