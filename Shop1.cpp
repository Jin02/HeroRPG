#include "MyInclude.h"
#include "MyExtern.h"

SHOP1 Shop1;

void weaponinital()
{
    Shop1.Shot=15;
    Shop1.Rapier=25;
    Shop1.Small=35;
    Shop1.Great=50;
    Shop1.Twohand=150;
    
    Shop1.ShotMoney=1000;
    Shop1.RapierMoney=2500;
    Shop1.SmallMoney=3500;
    Shop1.GreatMoney=15000;
    Shop1.TwohandMoney=35000;
}

void Shop1Draw()
{
    DrawStrEx3(2, 3, "&&&&&&&&&&&& Q. Shot Sword &&&&&& '1000'Gold", WHITE, BLACK);
    DrawStrEx3(2, 5, "&&&&&&&&&&&& W. Long Sword &&&&&&& '2500'Gold", YELLOW, BLACK);
    DrawStrEx3(2, 7, "&&&&&&&&&&&& E. Rapier &&&&&&& '3500'Gold", RED, BLACK);
    DrawStrEx3(2, 9, "&&&&&&&&&&&& R. Small Sword &&&&&&& '15000'Gold", BLUE, BLACK);
    DrawStrEx3(2, 11, "&&&&&&&&&&&& T.Two Handed Sword &&&&&&& '35000'Gold", MAGENTA, BLACK);
}

void WeaponAttack()
{
}

void Shop1Create()
{
    if(Shop1.MoneyTime<0)
        Shop1.MoneyTime=20;
}

void Shop1check()
{
    if(IsKeyUp(VK_Q))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Shop1.ShotMoney-1)
            {
                Shop1.weapon=Shop1.Shot;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.money-=Shop1.ShotMoney;
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
            if(Hero.money>Shop1.RapierMoney-1)
            {
                Shop1.weapon=Shop1.Rapier;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.money-=Shop1.RapierMoney;
            }
            
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_E))
    {
        if(MsgBox("이 물건을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Shop1.SmallMoney-1)
            {
                Shop1.weapon=Shop1.Small;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.money-=Shop1.SmallMoney;
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
            if(Hero.money>Shop1.GreatMoney-1)
            {
                Shop1.weapon=Shop1.Great;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.money-=Shop1.GreatMoney;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_T))
    {
        if(MsgBox("이 물건을 사시겠습니까?"))
        {
            if(Hero.money>Shop1.TwohandMoney-1)
            {
                Shop1.weapon=Shop1.Twohand;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.money-=Shop1.TwohandMoney;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }

    if(IsKey(VK_9))
    {
        Shop1.blsDead=false;
        Filed2.blsDead3=true;
    }
    
}
