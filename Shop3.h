#ifndef _SHOP3_H_
#define _SHOP3_H_

typedef struct _SHOP3{
	
	BOOL blsDead;
		
	int score;
	int medicine;

	int recover;
	int high;
	int magical;
	int high2;
	int unity;

	int recoverMoney;
	int highMoney;
	int magicalMoney;
	int high2Money;
	int unityMoney;

	int recovernumber;
	int highnumber;
	int magicalnumber;
	int high2number;
	int unitynumber;

	WORD fg;

}SHOP3;


void Shop3Draw();

void medicineinital();
void Shop3Check();



#endif
