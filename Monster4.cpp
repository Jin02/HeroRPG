#include "MyInclude.h"
#include "MyExtern.h"


MONSTER4 Monster4[12];

void Monster4Initial()
{	
    int i;
    
    for(i=0; i<12; i++)
    {
        Monster4[i].x=rand()%58;
        Monster4[i].y=-2;
        Monster4[i].blsDead=FALSE;
        Monster4[i].Attack=550;
        Monster4[i].Hp=2500;
    }
}

void Monster4Create()
{
    int i;
    if(Filed.blsDead3)
    {
        for(i=0; i<12; i++)
        {
            if(Monster4[i].blsDead == false)
            {
                Monster4[i].blsDead=true;
                Monster4[i].x=rand()%58;
                Monster4[i].y=rand()%12;
                
                break;
            }
        }
    }
}

void Monster4Draw()
{
    int i;
    if(Filed.blsDead3)
    {
        for(i=0; i<12; i++)
        {
            if(Monster4[i].blsDead)
                DrawHLineCharEx3(Monster4[i].x,Monster4[i].y, 1, 'G', rand(), BLACK);
        }
    }
}

void Monster4Release()
{
    int i;
    
    for(i=0; i<12; i++)
    {
        Monster4[i].blsDead=false;
        Monster4[i].x=false;
        Monster4[i].y=false;
    }
}
