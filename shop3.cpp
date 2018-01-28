#include "MyInclude.h"
#include "MyExtern.h"

SHOP3 Shop3;

void medicineinital()
{
    Shop3.recover=300;
    Shop3.high=1000;
    Shop3.magical=250;
    Shop3.high2=600;
    Shop3.unity=850;
    
    Shop3.recoverMoney=1500;
    Shop3.highMoney=2500;
    Shop3.magicalMoney=2000;
    Shop3.high2Money=3000;
    Shop3.unityMoney=4000;
}

void Shop3Draw()
{
    DrawStrEx3(2, 3, "&&&&&&&&&&&& Q.recover Water  &&&&&&& '1500'Gold", WHITE, BLACK);
    DrawStrEx3(2, 5, "&&&&&&&&&&&& W.high recover Water  &&&&&&& '2500'Gold", YELLOW, BLACK);
    DrawStrEx3(2, 7, "&&&&&&&&&&&& E.magical powers Water  &&&&&&& '2000'Gold", RED, BLACK);
    DrawStrEx3(2, 9, "&&&&&&&&&&&& R.high magical powers Water  &&&&&&& '3000'Gold", BLUE, BLACK);
    DrawStrEx3(2, 11, "&&&&&&&&&&&& T.unity Water &&&&&&& '4000'Gold", MAGENTA, BLACK);
}

void Shop3Check()
{
    if(IsKeyUp(VK_Q))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Shop3.recoverMoney-1)
            {
                Hero.money-=Shop3.recoverMoney;
                Shop3.recovernumber+=10;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_W))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == FALSE)
            else{
                if(Hero.money>Shop3.highMoney-1)
                {
                    Hero.money-=Shop3.highMoney;
                    Shop3.highnumber+=10;
                }
                else
                {
                    MsgBox("주인공의 소지금이 부족합니다");
                }
            }
    }
    
    if(IsKeyUp(VK_E))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == FALSE)
        {
            if(Hero.money>Shop3.magicalMoney-1)
            {
                Hero.money-=Shop3.magicalMoney;
                Shop3.magicalnumber+=10;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_R))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Shop3.high2Money-1)
            {
                Hero.money-=Shop3.high2Money;
                Shop3.high2number+=10;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_T))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Shop3.unityMoney-1)
            {
                Hero.money-=Shop3.unityMoney;
                Shop3.unitynumber+=10;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKey(VK_9))
    {
        Shop3.blsDead=false;
        Filed2.blsDead3=true;
    }
}
