#ifndef _MONSTER3_H_
#define _MONSTER3_H_

typedef struct _MONSTER3{
    BOOL blsDead;
    
    int x;
    int y;
    int Hp;
    int Attack;
    
    int Troll;
    
    WORD fg;
        
}MONSTER3;

void Monster3Initial();
void Monster3Create();
void Monster3Draw();
void Monster3Release();


#endif
