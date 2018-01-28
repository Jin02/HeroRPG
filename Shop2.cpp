#include "MyInclude.h"
#include "MyExtern.h"

SHOP2 Shop2;

void defenseinital()
{
    Shop2.leather=10;
    Shop2.bone=20;
    Shop2.bronze=35;
    Shop2.iron=50;
    Shop2.steel=80;
    
    Shop2.leatherMoney=2000;
    Shop2.boneMoney=3500;
    Shop2.bronzeMoney=5000;
    Shop2.ironMoney=17000;
    Shop2.steelMoney=25000;
}

void Shop2Draw()
{
    DrawStrEx3(2, 3, "&&&&&&&&&&&& Q. leather armor &&&&&&& '2000'Gold", WHITE, BLACK);
    DrawStrEx3(2, 5, "&&&&&&&&&&&& W. bone armor &&&&&&& '3500'Gold", YELLOW, BLACK);
    DrawStrEx3(2, 7, "&&&&&&&&&&&& E.  bronze armor &&&&&&& '5000'Gold", RED, BLACK);
    DrawStrEx3(2, 9, "&&&&&&&&&&&& R. iron armor &&&&&&& '17000'Gold", BLUE, BLACK);
    DrawStrEx3(2, 11, "&&&&&&&&&&&& T. steel armor &&&&&&& '25000'Gold", MAGENTA, BLACK);
}

void Shop2check()
{
    if(IsKeyUp(VK_Q))
    {
        if(MsgBox("이 물건을 사시겠습니까?")
        {
            if(Hero.money>Shop2.leatherMoney-1)
            {
                Shop2.defense=Shop2.leather;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                Hero.money-=Shop2.leatherMoney;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
           
    if(IsKeyUp(VK_W))
    {
        if(MsgBox("이 물건을 사시겠습니까?"))
        {
            if(Hero.money>Shop2.boneMoney-1)
            {
                Shop2.defense=Shop2.bone;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                Hero.money-=Shop2.boneMoney;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
           
    if(IsKeyUp(VK_E))
    {
        if(MsgBox("이 물건을 사시겠습니까?"))
        {
            if(Hero.money>Shop2.bronzeMoney-1)
            {
                Shop2.defense=Shop2.bronze;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                Hero.money-=Shop2.bronzeMoney;
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
            if(Hero.money>Shop2.ironMoney-1)
            {
                Shop2.defense=Shop2.iron;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                Hero.money-=Shop2.ironMoney;
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
            if(Hero.money>Shop2.steelMoney-1)
            {
                Shop2.defense=Shop2.steel;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                Hero.money-=Shop2.steelMoney;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }

    if(IsKey(VK_9))
    {
        Shop2.blsDead=false;
        Filed2.blsDead3=true;
    }
}
