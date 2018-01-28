#include "MyInclude.h"
#include "MyExtern.h"

VILLAGE2 Village2;

void Village2Intal()
{
    Shop1.blsDead=false;
    Shop2.blsDead=false;
    Shop3.blsDead=false;
    Skill.DrawShop=false;
    Filed.blsDead=false;
    Filed.blsDead2=false;
    Filed.blsDead3=false;
    Filed2.blsDead=false;
    Filed2.blsDead2=false;
    Filed2.blsDead3=true;
    Filed2.Village=false;
}

void Village2Draw()
{
    if(!Filed2.blsDead4)
    {
        if(Hero.blsDead)
        {
            if(Filed2.blsDead3)
            {
                DrawHLineCharEx3(1,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(4,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(7,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(10,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(13,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(1,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(1,5,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(13,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(13,5,1, 'O', YELLOW, BLACK);
                
                DrawStrEx3(2, 3, "1.Monster", WHITE, BLACK);
                DrawStrEx3(4, 4, "Field", WHITE, BLACK);
                
                DrawHLineCharEx3(16,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(19,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(22,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(25,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(16,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(16,5,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,5,1, 'O', YELLOW, BLACK);
                
                DrawStrEx3(18, 3, "2.Village", WHITE, BLACK);
                DrawStrEx3(19, 4, "Out", WHITE, BLACK);
                
                DrawHLineCharEx3(31,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(34,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(37,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(40,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(31,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(31,5,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,5,1, 'O', YELLOW, BLACK);
                
                DrawStrEx3(33, 3, "3.Skill", WHITE, BLACK);
                DrawStrEx3(34, 4, "Shop", WHITE, BLACK);
                
                DrawHLineCharEx3(46,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(49,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(52,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(55,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(58,1,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(46,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(46,5,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(58,3,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(58,5,1, 'O', YELLOW, BLACK);
                
                
                DrawStrEx3(47, 3, "4.pharmacy", WHITE, BLACK);
                DrawStrEx3(49, 4, "", WHITE, BLACK);
                
                DrawHLineCharEx3(16,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(19,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(22,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(25,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(16,9,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(16,11,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,9,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(28,11,1, 'O', YELLOW, BLACK);
                
                
                DrawStrEx3(18, 9, "5.Weapon", WHITE, BLACK);
                DrawStrEx3(19, 10, "Shop", WHITE, BLACK);
                
                DrawHLineCharEx3(31,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(34,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(37,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(40,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,7,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(31,9,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(31,11,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,9,1, 'O', YELLOW, BLACK);
                DrawHLineCharEx3(43,11,1, 'O', YELLOW, BLACK);
                
                
                DrawStrEx3(33, 9, "6.Defense", WHITE, BLACK);
                DrawStrEx3(34, 10, "Shop", WHITE, BLACK);
            }
        }
    }
}

void Village2check()
{
    if(!Filed2.blsDead4)
    {
        if(Filed2.blsDead3)
        {
            if(IsKeyUp(VK_1))
            {
                Filed.blsDead=true;
                Filed.blsDead2=true;
                Filed.blsDead3=true;
                Filed2.blsDead3=false;
                Filed2.blsDead4=true;
            }
            if(IsKeyUp(VK_2))
            {
                Filed2.blsDead=true;
                Filed2.blsDead2=true;
                Filed.blsDead3=true;
                Filed2.blsDead3=false;
                Filed2.blsDead4=true;
                Hero.x=55;
                Hero.y=1;
            }
            if(IsKeyUp(VK_3))
            {
                Skill.DrawShop=true;
                Filed2.blsDead3=false;
            }
            if(IsKeyUp(VK_4))
            {
                Shop3.blsDead=true;
                Filed2.blsDead3=false;
            }
            if(IsKeyUp(VK_5))
            {
                Shop1.blsDead=true;
                Filed2.blsDead3=false;
            }
            if(IsKeyUp(VK_6))
            {
                Shop2.blsDead=true;
                Filed2.blsDead3=false;
            }
            if(IsKey(VK_S))
            {
                GameSave();
            }
            if(IsKey(VK_D))
            {
                GameLoad();
            }
        }
    }
}
