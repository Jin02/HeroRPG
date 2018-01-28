#include "MyInclude.h"
#include "MyExtern.h"

HERO Hero;

void InitialHero()
{
    Hero.blsDead=true;
    Hero.blsDead2=true;
    Hero.hpmax=200;
    Hero.mpmax=150;
    Hero.levelup=20;
    Hero.exp=0;
    Hero.hp=100;
    Hero.mp=100;
    Hero.expmax=100;

    Hero.money=20000;
}

void ReleaseHero()
{
}

void Herofalse()
{
    int i;
    
    for(i=0; i<30; i++)
    {
        if(Hero.blsDead)
        {
            if(Hero.hp<0)
            {
                Hero.blsDead=false;
                Hero.attack=false;
                Hero.blsDead2=false;
                Hero.defense=false;
                Monster[i].blsDead=false;
                Monster2[i].blsDead=false;
                Monster3[i].blsDead=false;
                Monster4[i].blsDead=false;
                
            }
        }
    }
}

void Herodiedraw()
{
    if(!Hero.blsDead)
    {
        Filed.blsDead=false;
        Filed.blsDead2=false;
        Filed.blsDead3=false;
        
        ClearScreenEx3(MAGENTA);
        
        DrawStrEx3(10, 11, "Game Over!", BLACK, MAGENTA);
        DrawStrEx3(10, 15, "RESET GAME KEY", BLACK, MAGENTA);
        DrawStrEx3(14, 17, "R", BLACK, MAGENTA);
        
        DrawStrEx3(10, 20, "EXIT 'ESC'", BLACK, MAGENTA);
    }
    
}

void HeroNotMoney()
{
    if(Hero.money<0)
        MsgBox("플레이어의 돈이 부족합니다");
}

void HeroMed()
{
    if(IsKeyUp(VK_H))
    {
        if(Shop3.recovernumber >= 1)
        {
            if(Hero.hp<Hero.hpmax)
                Hero.hp+=Shop3.recover;
            if(Hero.hpmax<Hero.hp)
                Hero.hp=Hero.hpmax;
            Shop3.recovernumber--;
        }
    }
    
    if(IsKeyUp(VK_J))
    {
        if(Shop3.highnumber >= 1)
        {
            if(Hero.hp<Hero.hpmax)
                Hero.hp+=Shop3.high;
            if(Hero.hpmax<Hero.hp)
                Hero.hp=Hero.hpmax;
        
            Shop3.highnumber--;
        }
    }

    if(IsKeyUp(VK_K))
    {
        if(Shop3.magicalnumber>=1)
        {
            if(Hero.mp<Hero.mpmax)
                Hero.mp+=Shop3.magical;
            if(Hero.mpmax<Hero.mp)
                Hero.mp=Hero.mpmax;

            Shop3.magicalnumber--;
        }
    }

    if(IsKeyUp(VK_L))
    {
        if(Shop3.high2number>=1)
        {
            if(Hero.mp<Hero.mpmax)
                Hero.mp+=Shop3.high2;
            if(Hero.mpmax<Hero.mp)
                Hero.mp=Hero.mpmax;
            
            Shop3.high2number--;
        }
    }
    if(IsKeyUp(VK_O))
    {
        if(Shop3.unitynumber >= 1)
        {
            Hero.mp+=Shop3.unity;
            Hero.hp+=Shop3.unity;
            
            if(Hero.mpmax<Hero.mp)
                Hero.mp=Hero.mpmax;
            if(Hero.hpmax<Hero.hp)
                Hero.hp=Hero.hpmax;
            
            Shop3.unitynumber--;
        }
    }
}

void MoveHero()
{
    if(Hero.blsDead2)
    {
        if(IsKey(VK_LEFT)&&Hero.x>0 )
            Hero.x--;
        
        if(IsKey(VK_RIGHT)&&Hero.x<60)
            Hero.x++;
        
        if(IsKey(VK_UP)&&Hero.y>0 )
            Hero.y--;
        
        if(IsKey(VK_DOWN)&&Hero.y<14 )
            Hero.y++;
    }
}
void DrawHero()
{
    DrawCharEx3(Hero.x, Hero.y, 'H', WHITE, BLACK);
}
