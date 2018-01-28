#include "MyInclude.h"
#include "MyExtern.h"

SCAN Scan;

void ScanDraw1()
{
    for(int l=0; l<8; l++)
    {
        if(Monster2[l].Hp<1)
        {
            Monster2[l].blsDead=false;
            Filed.blsDead2=true;
            Hero.blsDead2=true;
            Hero.exp+=90;
            Hero.money+=800;
            if(Hero.exp>Hero.expmax)
            {
                if(Skill.blsDead1)
                    Skill.Health+=20;
                if(Skill.blsDead2)
                    Skill.Brain+=10;
                
                Hero.expmax+=50+Hero.levelup;
                Hero.exp=0;
                Hero.levelup+=10;
                Hero.hpmax+=Hero.levelup+Skill.Health;
                Hero.mpmax+=Hero.levelup+Skill.Brain;
                Hero.hp+=Hero.levelup+Skill.Health;
                Hero.mp+=Hero.levelup+Skill.Brain;
                Shop1.AttackUp+=10;
                Shop2.defenseup+=5;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.defense=Shop2.defense+Shop2.defenseup;
            }
        }
    }
}

void ScanDraw2()
{
    for(int l=0; l<5; l++)
    {
        if(Monster[l].Hp<1)
        {
            Monster[l].blsDead=false;
            Filed.blsDead2=true;
            Hero.blsDead2=true;
            Hero.exp+=50;
            Hero.money+=300;
            if(Hero.exp>Hero.expmax)
            {
                if(Skill.blsDead1)
                    Skill.Health+=20;
                if(Skill.blsDead2)
                    Skill.Brain+=10;

                Hero.expmax+=50+Hero.levelup;
                Hero.exp=0;
                Hero.levelup+=10;
                Hero.hpmax+=Hero.levelup+Skill.Health;
                Hero.mpmax+=Hero.levelup+Skill.Brain;
                Hero.hp+=Hero.levelup+Skill.Health;
                Hero.mp+=Hero.levelup+Skill.Brain;
                Shop1.AttackUp+=10;
                Shop2.defenseup+=5;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.defense=Shop2.defense+Shop2.defenseup;
            }
        }
    }
}

void ScanDraw3()
{
    for(int l=0; l<12; l++)
    {
        if(Monster3[l].Hp<1)
        {
            Monster3[l].blsDead=false;
            Filed.blsDead2=true;
            Hero.blsDead2=true;
            Hero.exp+=280;
            Hero.money+=2300;
            if(Hero.exp>Hero.expmax)
            {
                if(Skill.blsDead1)
                    Skill.Health+=20;
                if(Skill.blsDead2)
                    Skill.Brain+=10;

                Hero.expmax+=50+Hero.levelup;
                Hero.exp=0;
                Hero.levelup+=10;
                Hero.hpmax+=Hero.levelup+Skill.Health;
                Hero.mpmax+=Hero.levelup+Skill.Brain;
                Hero.hp+=Hero.levelup+Skill.Health;
                Hero.mp+=Hero.levelup+Skill.Brain;
                Shop1.AttackUp+=10;
                Shop2.defenseup+=5;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.defense=Shop2.defense+Shop2.defenseup;
                for(int o=0; o<13; o++)
                    Monster3[o].Troll++;
            }
        }
    }
}

void ScanDraw4()
{
    for(int l=0; l<12; l++)
    {
        if(Monster4[l].Hp<1)
        {
            Monster3[l].blsDead=false;
            Filed.blsDead2=true;
            Hero.blsDead2=true;
            Hero.exp+=580;
            Hero.money+=5600;
            if(Hero.exp>Hero.expmax)
            {
                if(Skill.blsDead1)
                    Skill.Health+=20;
                if(Skill.blsDead2)
                    Skill.Brain+=10;
                Hero.expmax+=50+Hero.levelup;
                Hero.exp=0;
                Hero.levelup+=10;
                Hero.hpmax+=Hero.levelup+Skill.Health;
                Hero.mpmax+=Hero.levelup+Skill.Brain;
                Hero.hp+=Hero.levelup+Skill.Health;
                Hero.mp+=Hero.levelup+Skill.Brain;
                Shop1.AttackUp+=10;
                Shop2.defenseup+=5;
                Hero.attack=Shop1.weapon+Shop1.AttackUp;
                Hero.defense=Shop2.defense+Shop2.defenseup;
            }
        }
    }
}
