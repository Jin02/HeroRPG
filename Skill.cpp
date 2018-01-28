#include "MyInclude.h"
#include "MyExtern.h"

SKILL Skill;

void Skillinital()
{
    Skill.blsDead1=false;
    Skill.blsDead2=false;
    Skill.blsDead3=false;
    Skill.blsDead4=false;
    Skill.blsDead5=false;
    
    Skill.skill1Money=3000;
    Skill.skill2Money=5000;
    Skill.skill3Money=15000;
    Skill.skill4Money=20000;
    Skill.skill5Money=25000;
    
    Skill.Skill3Attack=80;
    Skill.Skill4Attack=150;
    Skill.Skill5Attack=250;
    
    Skill.Skill3mp=50;
    Skill.Skill4mp=100;
    Skill.Skill5mp=250;
    
    Skill.Health=0;
    Skill.Brain=0;
}

void SkillDraw()
{
    DrawStrEx3(2, 3, "&&&&&&&&&&&& Q.Strong Health &&&&&&& '3000'Gold", WHITE, BLACK);
    DrawStrEx3(2, 5, "&&&&&&&&&&&& W.Wisdom Brain &&&&&&& '5000'Gold", YELLOW, BLACK);
    DrawStrEx3(2, 7, "&&&&&&&&&&&& E. Crash &&&&&&& '15000'Gold", RED, BLACK);
    DrawStrEx3(2, 9, "&&&&&&&&&&&& R.  Death of stroke &&&&&&& '20000'Gold", BLUE, BLACK);
    DrawStrEx3(2, 11, "&&&&&&&&&&&& T. Wheel Wind &&&&&&& '25000;Gold", MAGENTA, BLACK);
}

void SkillCheck()
{
    if(IsKeyUp(VK_Q))
    {
        if(MsgBox("이 스킬을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Skill.skill1Money-1)
            {
                Skill.blsDead1=true;
                Hero.money-=Skill.skill1Money;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_W))
    {
        if(MsgBox("이 스킬을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Skill.skill2Money-1)
            {
                Skill.blsDead2=true;
                Hero.money-=Skill.skill2Money;
            }
            
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_E))
    {
        if(MsgBox("이 스킬을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Skill.skill3Money-1)
            {
                Skill.blsDead3=true;
                Hero.money-=Skill.skill3Money;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_R))
    {
        if(MsgBox("이 스킬을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Skill.skill4Money-1)
            {
                Skill.blsDead4=true;
                Hero.money-=Skill.skill4Money;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }
    
    if(IsKeyUp(VK_T))
    {
        if(MsgBox("이 스킬을 사시겠습니까?") == TRUE)
        {
            if(Hero.money>Skill.skill5Money-1)
            {
                Skill.blsDead5=true;
                Hero.money-=Skill.skill5Money;
            }
            else
            {
                MsgBox("주인공의 소지금이 부족합니다");
            }
        }
    }

    if(IsKey(VK_9))
    {
        Skill.DrawShop=false;
        Filed2.blsDead3=true;
    }
}
