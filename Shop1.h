#ifndef _SHOP1_H_
#define _SHOP1_H_

typedef struct _SHOP1{
    
    BOOL blsDead;
    
    int score;
    int weapon;
    int AttackUp;
    
    int Shot;
    int Rapier;
    int Small;
    int Great;
    int Twohand;
    
    int ShotMoney;
    int RapierMoney;
    int SmallMoney;
    int GreatMoney;
    int TwohandMoney;
    
    int MoneyTime;
    
    WORD fg;
}SHOP1;

void Shop1Draw();
void WeaponAttack();
void weaponinital();
void Shop1check();
void Shop1Create();

#endif
