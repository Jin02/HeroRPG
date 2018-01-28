#ifndef _CRASHBATTLE_H_
#define _CRASHBATTLE_H_

typedef struct _CRASHBATTLE
{
    BOOL blsDead;
    
    int x;
    int y;
    char score;
    int Crash1;
    int Crash2;
    int Crash3;
    int Crash4;
    
    DWORD CrashTime;
    WORD fg;
    
}CRASHBATTLE;

void InitialCrashBattle();
void Monster1Crash();

#endif
