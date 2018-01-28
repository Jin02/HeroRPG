#include "MyInclude.h"
#include "MyExtern.h"

FILED Filed;

void Fileddraw()
{
    int j;
    
    DrawStrEx3(57, 0, "EXIT", BLACK, YELLOW);
    DrawStrEx3(0, 14, "START",BLACK, YELLOW);
    
    for(j=1; j<4; j++)
    {
        if(Hero.x==57+j  && Hero.y==0)
        {
            if(Filed2.Village)
            {
                Filed.blsDead=false;
                Filed.blsDead2=false;
                Filed.blsDead3=false;
                Filed2.blsDead4=false;
                Filed2.blsDead3=true;
                Filed.ShopBlsDead=true;
            }
            else
            {
                Filed.blsDead=false;
                Filed.blsDead2=false;
                Filed.blsDead3=false;
                Filed.ShopBlsDead=true;
            }
            Monster4Release();
            Monster3Release();
            Monster2Release();
            MonsterRelease();
        }
    }
}
