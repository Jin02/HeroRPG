#include "MyInclude.h"
#include "MyExtern.h"

CRASHBATTLE CrashBattle;

void InitialCrashBattle()
{
}

void Monster1Crash()
{
    int j;
    int k;
    int l;
    
    if(Filed.blsDead3)
    {
        for(int i=0; i<5; i++)
        {
            if((Hero.x==Monster[i].x) && (Hero.y == Monster[i].y) && Monster[i].blsDead==TRUE && Hero.blsDead==TRUE)
            {
                DrawFillBoxEx3(17, 3, 30, 10, WHITE);
                DrawStrEx3(19, 5, "1.Attack", BLACK, WHITE);
                if(Skill.blsDead3)
                    DrawStrEx3(19, 7, "2.Crash", BLACK, WHITE);
                if(Skill.blsDead4)
                    DrawStrEx3(30, 5, "3.Death of stroke", BLACK, WHITE);
                if(Skill.blsDead5)
                    DrawStrEx3(30, 7, "4.Wheel Wind", BLACK, WHITE);
                
                DrawStrEx3(35, 11,"6.escape", BLACK, WHITE);

                Hero.blsDead2   = false;
                Filed.blsDead2  = false;
                Filed2.blsDead2 = false;
                if(IsKeyUp(VK_6))
                {
                    l=rand()%4;
                    Hero.blsDead2   = true;
                    Filed.blsDead2  = true;
                    Filed2.blsDead2 = true;
                    
                    switch(l)
                    {
                        case 0:
                            Hero.x--;
                            Hero.y--;
                            break;
                        case 1:
                            Hero.x++;
                            Hero.y++;
                            break;
                        case 2:
                            Hero.x--;
                            Hero.y++;
                            break;
                        case 3:
                            Hero.x++;
                            Hero.y--;
                            break;
                    }
                }
                if(Skill.blsDead3)
                {
                    if(Hero.mp>Skill.Skill3mp)
                    {
                        if(IsKeyUp(VK_2))
                        {
                            Monster[i].Hp -= Hero.attack+Skill.Skill3Attack;
                            Hero.mp -= Skill.Skill3mp;
                            
                            j= rand()%10;
                            if( j<3)
                            {
                                if(Monster[i].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack;
                                    
                                    DrawStrEx3(1,16,"No!",BLACK,WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k= rand()%20;
                            if(k<3)
                            {
                                if(Monster[i].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw2();
                        }
                    }
                }
                
                
                if(Skill.blsDead4)
                {
                    if(Hero.mp>Skill.Skill4mp)
                    {
                        if(IsKeyUp(VK_3))
                        {
                            Monster[i].Hp -= Hero.attack + Skill.Skill4Attack;
                            Hero.mp -= Skill.Skill4mp;
                            
                            j= rand()%10;
                            if(j<3)
                            {
                                if(Monster[i].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack;

                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k= rand()%20;
                            if(k<3)
                            {
                                if(Monster[i].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }

                            ScanDraw2();
                        }
                    }
                }
                
                if(Skill.blsDead5)
                {
                    if(Hero.mp>Skill.Skill5mp)
                    {
                        if(IsKeyUp(VK_4))
                        {
                            Monster[i].Hp -= Hero.attack+Skill.Skill5Attack;
                            Hero.mp -= Skill.Skill5mp;
                            
                            j= rand()%10;
                            if( j<3)
                            {
                                if(Monster[i].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k= rand()%20;
                            if(k<3)
                            {
                                if(Monster[i].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster[i].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw2();
                        }
                    }
                }
                
                if(IsKeyUp(VK_1))
                {
                    Monster[i].Hp-=Hero.attack;
                    
                    j= rand()%10;
                    if( j<3)
                    {
                        if(Monster[i].Attack>Shop2.defense)
                        {
                            Hero.hp-=Monster[i].Attack;
                            
                            DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }

                    k= rand()%20;
                    if(k<3)
                    {
                        if(Monster[i].Attack + 10 > Shop2.defense)
                        {
                            Hero.hp -= Monster[i].Attack + 100;
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }
                    
                    ScanDraw2();
                }
            }
        }
        
        
        // 몬스터2 전투
        for(l=0; l<8; l++)
        {
            if((Hero.x==Monster2[l].x) && (Hero.y == Monster2[l].y) && Monster2[l].blsDead==TRUE && Hero.blsDead==TRUE)
            {
                DrawFillBoxEx3(17, 3, 30, 10, WHITE);
                DrawStrEx3(19, 5, "1.Attack", BLACK, WHITE);
                if(Skill.blsDead3)
                    DrawStrEx3(19, 7, "2.Crash", BLACK, WHITE);
                if(Skill.blsDead4)
                    DrawStrEx3(30, 5, "3.Death of stroke", BLACK, WHITE);
                if(Skill.blsDead5)
                    DrawStrEx3(30, 7, "4.Wheel Wind", BLACK, WHITE);
                
                DrawStrEx3(35, 11,"6.escape", BLACK, WHITE);
                Hero.blsDead2   = false;
                Filed.blsDead2  = false;
                Filed2.blsDead2 = false;
                
                if(IsKeyUp(VK_6))
                {
                    l = rand()%4;
                    Hero.blsDead2   = true;
                    Filed.blsDead2  = true;
                    Filed2.blsDead2 = true;
                    
                    switch(l)
                    {
                        case 0:
                            Hero.x--;
                            Hero.y--;
                            break;
                        case 1:
                            Hero.x++;
                            Hero.y++;
                            break;
                        case 2:
                            Hero.x--;
                            Hero.y++;
                            break;
                        case 3:
                            Hero.x++;
                            Hero.y--;
                            break;
                    }
                }
                
                if(Skill.blsDead3)
                {
                    if(Hero.mp>Skill.Skill3mp)
                    {
                        if(IsKeyUp(VK_2))
                        {
                            Monster2[l].Hp -= Hero.attack+Skill.Skill3Attack;
                            Hero.mp -= Skill.Skill3mp;
                            
                            j= rand()%10;
                            if(j<3)
                            {
                                if(Monster2[l].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k = rand()%20;
                            if(k<3)
                            {
                                if(Monster2[l].Attack + 10 > Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw1();
                        }
                    }
                }
                
                if(Skill.blsDead4)
                {
                    if(Hero.mp > Skill.Skill4mp)
                    {
                        if(IsKeyUp(VK_3))
                        {
                            Monster2[l].Hp -= Hero.attack + Skill.Skill4Attack;
                            Hero.mp -= Skill.Skill4mp;
                            
                            j= rand()%10;
                            if(j<3)
                            {
                                if(Monster2[l].Attack > Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k = rand()%20;
                            if(k<3)
                            {
                                if(Monster2[l].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw1();
                        }
                    }
                }
                
                if(Skill.blsDead5)
                {
                    if(Hero.mp>Skill.Skill5mp)
                    {
                        if(IsKeyUp(VK_4))
                        {
                            Monster2[l].Hp -= Hero.attack+Skill.Skill5Attack;
                            Hero.mp -= Skill.Skill5mp;
                            
                            j= rand()%10;
                            if(j<3)
                            {
                                if(Monster2[l].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k= rand()%20;
                            if(k<3)
                            {
                                if(Monster2[l].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster2[l].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw1();
                        }
                    }
                }
                
                if(IsKeyUp(VK_1))
                {
                    Monster2[l].Hp-=Hero.attack;
                    
                    j= rand()%10;
                    if( j<3)
                    {
                        if(Monster2[l].Attack>Shop2.defense)
                        {
                            Hero.hp-=Monster2[l].Attack;
                            
                            DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }
                    
                    k= rand()%20;
                    if(k<3)
                    {
                        if(Monster2[l].Attack+10>Shop2.defense)
                        {
                            Hero.hp-=Monster2[l].Attack+100;
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }

                    ScanDraw1();
                }
            }
        }
        

        for(int s=0; s<12; s++)
        {
            if((Hero.x==Monster3[s].x) && (Hero.y == Monster3[s].y) && Monster3[s].blsDead==TRUE && Hero.blsDead==TRUE)
            {
                DrawFillBoxEx3(17, 3, 30,10,WHITE);
                DrawStrEx3(19, 5, "1.Attack", BLACK, WHITE);
                if(Skill.blsDead3)
                    DrawStrEx3(19, 7, "2.Crash", BLACK, WHITE);
                if(Skill.blsDead4)
                    DrawStrEx3(30, 5, "3.Death of stroke", BLACK, WHITE);
                if(Skill.blsDead5)
                    DrawStrEx3(30, 7, "4.Wheel Wind", BLACK, WHITE);
                
                DrawStrEx3(35, 11,"6.escape", BLACK, WHITE);
                
                Hero.blsDead2=false;
                Filed.blsDead2=false;
                Filed2.blsDead2=false;
                if(IsKeyUp(VK_6))
                {
                    l=rand()%4;
                    Hero.blsDead2=true;
                    Filed.blsDead2=true;
                    Filed2.blsDead2=true;
                    
                    switch(l)
                    {
                        case 0:
                            Hero.x--;
                            Hero.y--;
                            break;
                        case 1:
                            Hero.x++;
                            Hero.y++;
                            break;
                        case 2:
                            Hero.x--;
                            Hero.y++;
                            break;
                        case 3:
                            Hero.x++;
                            Hero.y--;
                            break;
                    }
                }
                
                if(Skill.blsDead3)
                {
                    if(Hero.mp>Skill.Skill3mp)
                    {
                        if(IsKeyUp(VK_2))
                        {
                            Monster3[s].Hp -= Hero.attack+Skill.Skill3Attack;
                            Hero.mp -= Skill.Skill3mp;
                            
                            j = rand()%10;
                            if(j<3)
                            {
                                if(Monster3[s].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k = rand()%20;
                            if(k<3)
                            {
                                if(Monster3[s].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw3();
                        }
                    }
                }
                
                if(Skill.blsDead4)
                {
                    if(Hero.mp>Skill.Skill4mp)
                    {
                        if(IsKeyUp(VK_3))
                        {
                            Monster3[s].Hp -= Hero.attack+Skill.Skill4Attack;
                            Hero.mp -= Skill.Skill4mp;
                            
                            j= rand()%10;
                            if(j<3)
                            {
                                if(Monster3[s].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k = rand()%20;
                            if(k<3)
                            {
                                if(Monster3[s].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw3();
                        }
                    }
                }
                
                if(Skill.blsDead5)
                {
                    if(Hero.mp>Skill.Skill5mp)
                    {
                        if(IsKeyUp(VK_4))
                        {
                            Hero.mp -= Skill.Skill5mp;
                            Monster3[s].Hp -= Hero.attack+Skill.Skill5Attack;
                            
                            j= rand() % 10;
                            if( j<3)
                            {
                                if(Monster3[s].Attack>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack;
                                    
                                    DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            k = rand()%20;
                            if(k<3)
                            {
                                if(Monster3[s].Attack+10>Shop2.defense)
                                {
                                    Hero.hp-=Monster3[s].Attack+100;
                                    MsgBox("당신은 몬스터에게 피해를 입었습니다");
                                }
                            }
                            
                            ScanDraw3();
                        }
                    }
                }
                
                if(IsKeyUp(VK_1))
                {
                    Monster3[s].Hp -= Hero.attack;
                    
                    j= rand()%10;
                    if(j<3)
                    {
                        if(Monster3[s].Attack>Shop2.defense)
                        {
                            Hero.hp-=Monster3[s].Attack;
                            
                            DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }
                    
                    k = rand()%20;
                    if(k<3)
                    {
                        if(Monster3[s].Attack+10>Shop2.defense)
                        {
                            Hero.hp-=Monster3[s].Attack+100;
                            MsgBox("당신은 몬스터에게 피해를 입었습니다");
                        }
                    }
                    
                    ScanDraw3();
                }
            }
        }
    }
    
    for(int p=0; p<12; p++)
    {
        if((Hero.x==Monster4[p].x) && (Hero.y == Monster4[p].y) && Monster4[p].blsDead==TRUE && Hero.blsDead==TRUE)
        {
            DrawFillBoxEx3(17, 3, 30,10,WHITE);
            DrawStrEx3(19, 5, "1.Attack", BLACK, WHITE);
            if(Skill.blsDead3)
                DrawStrEx3(19, 7, "2.Crash", BLACK, WHITE);
            if(Skill.blsDead4)
                DrawStrEx3(30, 5, "3.Death of stroke", BLACK, WHITE);
            if(Skill.blsDead5)
                DrawStrEx3(30, 7, "4.Wheel Wind", BLACK, WHITE);
            
            DrawStrEx3(35, 11,"6.escape", BLACK, WHITE);
            
            Hero.blsDead2=false;
            Filed.blsDead2=false;
            Filed2.blsDead2=false;
            if(IsKeyUp(VK_6))
            {
                l=rand()%4;
                Hero.blsDead2=true;
                Filed.blsDead2=true;
                Filed2.blsDead2=true;
                
                switch(l)
                {
                    case 0:
                        Hero.x--;
                        Hero.y--;
                        break;
                    case 1:
                        Hero.x++;
                        Hero.y++;
                        break;
                    case 2:
                        Hero.x--;
                        Hero.y++;
                        break;
                    case 3:
                        Hero.x++;
                        Hero.y--;
                        break;
                }
            }
            
            if(Skill.blsDead3)
            {
                if(Hero.mp>Skill.Skill3mp)
                {
                    if(IsKeyUp(VK_2))
                    {
                        Monster4[p].Hp -= Hero.attack+Skill.Skill3Attack;
                        Hero.mp -= Skill.Skill3mp;
                        
                        j= rand()%10;
                        if( j<3)
                        {
                            if(Monster4[p].Attack>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack;
                                
                                DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }
                        
                        k = rand()%20;
                        if(k<3)
                        {
                            if(Monster4[p].Attack+10>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack+100;
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }

                        ScanDraw4();
                    }
                }
            }
            
            
            if(Skill.blsDead4)
            {
                if(Hero.mp>Skill.Skill4mp)
                {
                    if(IsKeyUp(VK_3))
                    {
                        Monster4[p].Hp -= Hero.attack+Skill.Skill4Attack;
                        Hero.mp -= Skill.Skill4mp;
                        
                        j= rand()%10;
                        if(j<3)
                        {
                            if(Monster4[p].Attack>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack;
                                
                                DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }
                        
                        k= rand()%20;
                        if(k<3)
                        {
                            if(Monster4[p].Attack+10>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack+100;
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }
                        
                        ScanDraw4();
                    }
                }
            }
            
            if(Skill.blsDead5)
            {
                if(Hero.mp>Skill.Skill5mp)
                {
                    if(IsKeyUp(VK_4))
                    {
                        Monster4[p].Hp -= Hero.attack+Skill.Skill5Attack;
                        Hero.mp -= Skill.Skill5mp;
                        
                        j= rand()%10;
                        if(j<3)
                        {
                            if(Monster4[p].Attack>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack;
                                
                                DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }
                        
                        k = rand()%20;
                        if(k<3)
                        {
                            if(Monster4[p].Attack+10>Shop2.defense)
                            {
                                Hero.hp-=Monster4[p].Attack+100;
                                MsgBox("당신은 몬스터에게 피해를 입었습니다");
                            }
                        }
                        
                        ScanDraw4();
                    }
                }
            }
            
            if(IsKeyUp(VK_1))
            {
                Monster4[p].Hp-=Hero.attack;
                
                j = rand()%10;
                if( j<3)
                {
                    if(Monster4[p].Attack>Shop2.defense)
                    {
                        Hero.hp-=Monster4[p].Attack;
                        
                        DrawStrEx3(1, 16, "No!", BLACK, WHITE);
                        MsgBox("당신은 몬스터에게 피해를 입었습니다");
                    }
                }
                
                k= rand()%20;
                if(k<3)
                {
                    if(Monster4[p].Attack+10>Shop2.defense)
                    {
                        Hero.hp-=Monster4[p].Attack+100;
                        MsgBox("당신은 몬스터에게 피해를 입었습니다");
                    }
                }

                ScanDraw4();
            }
        }
    }
}
