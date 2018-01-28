#ifndef __ITEM_H_
#define __ITEM_H_

typedef struct _ITEM{
    
    BOOL blsDead;
    
    int hp;
    double mp;
    int score;
    
    char c;
    char d;
    WORD fg;
    
}ITEM;

void InitialItem();
void ReleaseItem();
void DrawItem();
void MoveItem();
void Itemfalse();
void Itemdiedraw();

#endif
