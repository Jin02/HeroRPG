#include "MyInclude.h"
#include "MyExtern.h"


MONSTER3 Monster3[12];

void Monster3Initial()
{	
    int i;
    
    for(i=0; i<12; i++)
    {
        Monster3[i].x=rand()%58;
        Monster3[i].y=-2;
        Monster3[i].blsDead=FALSE;
        Monster3[i].Attack=250;
        Monster3[i].Hp=1000;
    }
}

void Monster3Create()
{
    int i;
    if(Filed.blsDead3)
    {
        for(i=0; i<12; i++)
        {
            if(Monster3[i].blsDead == false)
            {
                Monster3[i].blsDead=true;
                Monster3[i].x=rand()%58;
                Monster3[i].y=rand()%12;
                Monster3[i].Troll=0;
                
                break;
            }
        }
    }
}

void Monster3Draw()
{
    int i;
    if(Filed.blsDead3)
    {
        for(i=0; i<12; i++)
        {
            if(Monster3[i].blsDead)
                DrawHLineCharEx3(Monster3[i].x,Monster3[i].y, 1, 'T', RED, BLACK);
        }
    }
}

void Monster3Release()
{
    int i;
    
    for(i=0; i<12; i++)
    {
        Monster3[i].blsDead=false;
        Monster3[i].x=false;
        Monster3[i].y=false;
    }
}
