#include "MyInclude.h"
#include "MyExtern.h"


MONSTER Monster[5];

void MonsterInitial()
{	
    int i;
    
    for(i=0; i<5; i++)
    {
        Monster[i].x=rand()%58;
        Monster[i].y=0;
        Monster[i].blsDead=FALSE;
        Monster[i].Hp=200;
        Monster[i].Attack=50;
    }
}

void MonsterCreate()
{
    int i;
    
    if(Filed.blsDead3)
    {
        for(i=0; i<5; i++)
        {
            if(Monster[i].blsDead == false)
            {
                Monster[i].blsDead=true;
                Monster[i].x=rand()%58;
                Monster[i].y=rand()%12;
                break;
            }
        }
    }
}

void MonsterRelease()
{
    int i;
    
    for(i=0; i<5; i++)
    {
        Monster[i].blsDead=false;
        Monster[i].x=false;
        Monster[i].y=false;
    }
}

void MonsterDraw()
{
    int i;
    if(Filed.blsDead3)
    {
        for(i=0; i<5; i++)
        {
            if(Monster[i].blsDead)
                DrawHLineCharEx3(Monster[i].x,Monster[i].y, 1, 'K', YELLOW, BLACK);
        }
    }
}
