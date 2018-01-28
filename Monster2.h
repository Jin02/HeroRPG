#ifndef _MONSTER2_H_
#define _MONSTER2_H_

typedef struct _MONSTER2{
    BOOL blsDead;
    
    int x;
    int y;
    int Hp;
    int Attack;
    
    WORD fg;
    
}MONSTER2;

void Monster2Initial();
void Monster2Create();
void Monster2Draw();
void Monster2Release();

#endif
