#include "MyInclude.h"
#include "MyExtern.h"

MONSTER2 Monster2[8];

void Monster2Initial()
{	
    int i;
    
    for(i=0; i<8; i++)
    {
        Monster2[i].x=rand()%58;
        Monster2[i].y=-1;
        Monster2[i].blsDead=FALSE;
        Monster2[i].Attack=100;
        Monster2[i].Hp=500;
    }
}

void Monster2Create()
{
    int i;
    
    if(Filed.blsDead3)
    {
        for(i=0; i<8; i++)
        {
            if(Monster2[i].blsDead == false)
            {
                Monster2[i].blsDead=true;
                Monster2[i].x=rand()%58;
                Monster2[i].y=rand()%12;
                break;
            }
        }
    }
}

void Monster2Draw()
{
    int i;
    
    if(Filed.blsDead3)
    {
        for(i=0; i<8; i++)
        {
            if(Monster2[i].blsDead)
                DrawHLineCharEx3(Monster2[i].x,Monster2[i].y, 1, 'U', MAGENTA, BLACK);
        }
    }
}

void Monster2Release()
{
    int i;
    
    for(i=0; i<8; i++)
    {
        Monster2[i].blsDead=false;
        Monster2[i].x=false;
        Monster2[i].y=false;
    }
}
