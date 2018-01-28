#include "MyInclude.h"
#include "MyExtern.h"

FILED2 Filed2;

void Filed2draw()
{
    int j;
    
    DrawStrEx3(54, 0, "Village", BLACK, YELLOW);
    DrawStrEx3(0, 14, "Castle",BLACK, YELLOW);
    
    for(j=1; j<7; j++)
    {
        
        if(Hero.x==54+j  && Hero.y==0)
        {
            Filed2.blsDead=false;
            Filed2.blsDead2=false;
            Filed.blsDead3=false;
            Filed2.blsDead4=false;
            Filed2.blsDead3=true;
            Filed2.Village=true;
            Monster4Release();
            Monster3Release();
            Monster2Release();
            MonsterRelease();
        }

        if(Hero.x==-1+j && Hero.y==14)
        {
            Filed2.blsDead=false;
            Filed2.blsDead2=false;
            Filed.blsDead3=false;
            Filed2.blsDead4=true;
            Filed2.blsDead3=false;
            Filed2.Village=false;
            
            Monster4Release();
            Monster3Release();
            Monster2Release();
            MonsterRelease();
            
        }
    }
}
