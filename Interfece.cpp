#include "MyInclude.h"
#include "MyExtern.h"

INTERFECE Interfece;

void InterfeceDraw()
{
    char hp[8];
    char mp[8];
    char mpmax[8];
    char hpmax[8];
    char exp[8];
    char expmax[15];
    char weapon[4];
    char armor[4];
    char Money[8];
    
    char number1[4];
    char number2[4];
    char number3[4];
    char number4[4];
    char number5[5];
    
    if(Hero.blsDead)
    {
        DrawFillBoxEx3(60, 0, 20, 25, WHITE);
        
        sprintf(hp,"%d",Hero.hp);
        sprintf(mp,"%d",Hero.mp);
        sprintf(mpmax,"%d",Hero.mpmax);
        sprintf(exp,"%d",Hero.exp);
        sprintf(expmax,"%d",Hero.expmax);
        sprintf(hpmax,"%d",Hero.hpmax);
        sprintf(weapon,"%d",Hero.attack);
        sprintf(armor,"%d",Hero.defense);
        sprintf(Money,"%d",Hero.money);
        sprintf(number1,"%d",Shop3.recovernumber);
        sprintf(number2,"%d",Shop3.highnumber);
        sprintf(number3,"%d",Shop3.magicalnumber);
        sprintf(number4,"%d",Shop3.high2number);
        sprintf(number5,"%d",Shop3.unitynumber);
        
        DrawVLineEx3(60, 0, 25, BLACK);
        
        DrawStrEx3(63, 1, "H.P", BLACK, WHITE);
        DrawCharEx3(67, 2, '/', RED, WHITE);
        DrawStrEx3(69, 2, hpmax, RED,WHITE);//hpmax
        DrawStrEx3(63, 2, hp, RED,WHITE);//hp
        
        DrawStrEx3(63, 4, "M.P", BLACK, WHITE);
        DrawCharEx3(67,5,'/',BLUE,WHITE);
        DrawStrEx3(63, 5, mp, BLUE,WHITE);//mp
        DrawStrEx3(69, 5, mpmax, BLUE,WHITE);//mpmax
        
        DrawStrEx3(63, 23, "E.X.P",BLACK,WHITE);
        DrawCharEx3(67,24,'/',rand(),WHITE);
        DrawStrEx3(69,24,expmax,rand(),WHITE);
        DrawStrEx3(63,24,exp,rand(),WHITE);
        
        DrawStrEx3(63, 7, "Save Key", BLACK, WHITE);
        DrawStrEx3(63, 8, "'S'",BLACK,WHITE);
        DrawStrEx3(62,9, "Load Key = 'D'", BLACK,WHITE);
        
        DrawStrEx3(63,10,"Player Attack",BLACK,WHITE);
        DrawStrEx3(63,11,weapon,BLACK,WHITE);
        
        DrawStrEx3(63,12,"Player Armor",BLACK,WHITE);
        DrawStrEx3(63,13,armor,BLACK,WHITE);
        
        DrawStrEx3(63,14,"Player Money",BLACK,WHITE);
        DrawStrEx3(63,15,Money,BLACK,WHITE);
        DrawStrEx3(63,16,"K.E.Y",BLACK,WHITE);
        DrawStrEx3(63,17,"R= 'H'Key",BLACK,WHITE);
        DrawStrEx3(63,18,"H.R= 'J'Key",BLACK,WHITE);
        DrawStrEx3(63,19,"M= 'K'Key",BLACK,WHITE);
        DrawStrEx3(63,20,"H.M= 'L'Key",BLACK,WHITE);
        DrawStrEx3(63,21,"U= 'O'Key",BLACK,WHITE);
        
        DrawFillBoxEx3(0, 15, 60,10, WHITE);
        DrawVLineEx3(47, 0, 25, BLACK);
        
        DrawStrEx3(50,15,"R",BLACK,WHITE);
        DrawStrEx3(50,16,number1,BLACK,WHITE);
        
        DrawStrEx3(55,15,"H.R",BLACK,WHITE);
        DrawStrEx3(55,16,number2,BLACK,WHITE);
        
        DrawStrEx3(50,18,"M",BLACK,WHITE);
        DrawStrEx3(50,19,number3,BLACK,WHITE);
        
        DrawStrEx3(55,18,"H.M",BLACK,WHITE);
        DrawStrEx3(55,19,number4,BLACK,WHITE);
        
        DrawStrEx3(53,21,"U",BLACK,WHITE);
        DrawStrEx3(53,22,number5,BLACK,WHITE);
        
        DrawStrEx3(1,15," Chating",BLACK,WHITE);
    }
}
