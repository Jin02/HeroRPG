#include "MyInclude.h"
#include "MyExtern.h"

STAGE Stage;
int g_nLoop = 1;

void GameStart(void)
{
    if(Stage.Menu)
    {
        VillageIntal();
        Village2Intal();
        InitialCrashBattle();
        weaponinital();
        defenseinital();
        medicineinital();
        Skillinital();
        MonsterInitial();
        Monster2Initial();
        Monster3Initial();
        Monster4Initial();
        InitialHero();
        
        char d ='H';
        char c ='A';
        WORD fg=BLACK;
        
        while(g_nLoop)
        {
            CheckInput();
            
            if(IsKey(VK_ESCAPE))
                break;

            ClearScreenEx3(BLACK);
            Herofalse();
            Herodiedraw();
            
            InterfeceDraw();
            HeroMed();

            if(!Shop1.blsDead && !Shop2.blsDead && !Shop3.blsDead && !Filed.blsDead && !Filed2.blsDead && !Skill.DrawShop)
            {
                VillageDraw();
                Villagecheck();
            }
            if(!Shop1.blsDead && !Shop2.blsDead && !Shop3.blsDead && !Filed2.blsDead4 && !Filed2.blsDead && !Skill.DrawShop)
            {
                Village2check();
                Village2Draw();
            }
            
            if(!Filed.blsDead && !Filed2.blsDead)
            {
                Hero.x=0;
                Hero.y=13;
            }
            
            if(Shop1.blsDead)
            {
                Shop1Draw();
                Shop1check();
            }
            
            if(Shop2.blsDead)
            {
                Shop2Draw();
                Shop2check();
            }

            if(Skill.DrawShop)
            {
                SkillDraw();
                SkillCheck();
            }
            
            if(Shop3.blsDead)
            {
                Shop3Draw();
                Shop3Check();
            }
            
            if(Filed.blsDead)
            {
                Monster1Crash();
                
                MoveHero();
                MonsterCreate();
                Monster2Create();
                Monster3Create();
                
                if(Filed.blsDead2)
                {
                    MonsterDraw();
                    Monster2Draw();
                    Monster3Draw();
                    
                    DrawHero();
                }
                Fileddraw();
            }

            if(Filed2.blsDead)
            {
                Monster1Crash();
                
                MoveHero();
                Monster3Create();
                Monster4Create();
                if(Filed2.blsDead2)
                {
                    Monster3Draw();
                    Monster4Draw();
                    
                    DrawHero();
                }
                Filed2draw();
            }
            
            Flip();
            EngineSync(20);
        }
    }
}

void GameEnd()
{
    ReleaseConsole();
}

void StageDraw()
{
    ClearScreenEx3(BLACK);
    DrawStrEx3(10, 11, "H.E.R.O RPG Game", rand(), BLACK);
    DrawStrEx3(10, 14, "1. New Start Game", WHITE, BLACK);
    
    DrawStrEx3(10, 18, "3. Game Info", WHITE, BLACK);
    DrawStrEx3(10, 20, "4. Game E.X.I.T", WHITE, BLACK);
    
    Flip();
}

void GameInfo()
{
    ClearScreenEx3(BLACK);
    
    DrawStrEx3(10, 11, "Production Day", WHITE, BLACK);
    DrawStrEx3(10, 14, "9/30", WHITE, BLACK);
    DrawStrEx3(10, 17, "inquiry", WHITE, BLACK);
    DrawStrEx3(10, 20, "zmfltbsk2@naver.com", WHITE, BLACK);
    
    if(IsKeyUp(VK_1))
        GameStart();

    Flip();
}

void GameSave()
{
    FILE *fp2=fopen("savegame.txt","wt");
    
    fprintf(fp2,"%d\n",Hero.money);
    fprintf(fp2,"%d\n",Hero.defense);
    fprintf(fp2,"%d\n",Hero.attack);
    fprintf(fp2,"%d\n",Hero.hp);
    fprintf(fp2,"%d\n",Hero.mp);
    fprintf(fp2,"%d\n",Hero.hpmax);
    fprintf(fp2,"%d\n",Hero.mpmax);
    fprintf(fp2,"%d\n",Hero.exp);
    fprintf(fp2,"%d\n",Hero.expmax);
    fprintf(fp2,"%d\n",Shop1.AttackUp);
    fprintf(fp2,"%d\n",Shop1.weapon);
    fprintf(fp2,"%d\n",Shop2.defense);
    fprintf(fp2,"%d\n",Shop2.defenseup);
    fprintf(fp2,"%d\n",Shop3.recovernumber);
    fprintf(fp2,"%d\n",Shop3.high2number);
    fprintf(fp2,"%d\n",Shop3.highnumber);
    fprintf(fp2,"%d\n",Shop3.unitynumber);
    fprintf(fp2,"%d\n",Hero.blsDead);
    fprintf(fp2,"%d\n",Hero.blsDead2);
    fprintf(fp2,"%d\n",Filed.blsDead);
    fprintf(fp2,"%d\n",Filed.blsDead2);
    fprintf(fp2,"%d\n",Filed.blsDead4);
    fprintf(fp2,"%d\n",Filed2.blsDead4);
    fprintf(fp2,"%d\n",Filed2.blsDead3);
    fprintf(fp2,"%d\n",Village.blsDead3);
    fprintf(fp2,"%d\n",Village.blsDead2);
    fprintf(fp2,"%d\n",Village.blsDead1);
    fprintf(fp2,"%d\n",Hero.levelup);
    fprintf(fp2,"%d\n",Village.blsDead);
    fprintf(fp2,"%d\n",Village2.blsDead);
    fprintf(fp2,"%d\n",Village2.blsDead1);
    fprintf(fp2,"%d\n",Village2.blsDead2);
    fprintf(fp2,"%d\n",Village2.blsDead3);
    fprintf(fp2,"%d\n",Skill.blsDead1);
    fprintf(fp2,"%d\n",Skill.blsDead2);
    fprintf(fp2,"%d\n",Skill.blsDead3);
    fprintf(fp2,"%d\n",Skill.blsDead4);
    fprintf(fp2,"%d\n",Skill.blsDead5);
    
    fclose(fp2);
}

void GameLoad()
{
    FILE *fp2 = fopen("savegame.txt","rt");

    fscanf(fp2,"%d\n",&Hero.money);
    fscanf(fp2,"%d\n",&Hero.defense);
    fscanf(fp2,"%d\n",&Hero.attack);
    fscanf(fp2,"%d\n",&Hero.hp);
    fscanf(fp2,"%d\n",&Hero.mp);
    fscanf(fp2,"%d\n",&Hero.hpmax);
    fscanf(fp2,"%d\n",&Hero.mpmax);
    fscanf(fp2,"%d\n",&Hero.exp);
    fscanf(fp2,"%d\n",&Hero.expmax);
    fscanf(fp2,"%d\n",&Shop1.AttackUp);
    fscanf(fp2,"%d\n",&Shop1.weapon);
    fscanf(fp2,"%d\n",&Shop2.defense);
    fscanf(fp2,"%d\n",&Shop2.defenseup);
    fscanf(fp2,"%d\n",&Shop3.recovernumber);
    fscanf(fp2,"%d\n",&Shop3.high2number);
    fscanf(fp2,"%d\n",&Shop3.highnumber);
    fscanf(fp2,"%d\n",&Shop3.unitynumber);
    fscanf(fp2,"%d\n",&Hero.blsDead);
    fscanf(fp2,"%d\n",&Hero.blsDead2);
    fscanf(fp2,"%d\n",&Filed.blsDead);
    fscanf(fp2,"%d\n",&Filed.blsDead2);
    fscanf(fp2,"%d\n",&Filed.blsDead4);
    fscanf(fp2,"%d\n",&Filed2.blsDead4);
    fscanf(fp2,"%d\n",&Filed2.blsDead3);
    fscanf(fp2,"%d\n",&Village.blsDead3);
    fscanf(fp2,"%d\n",&Village.blsDead2);
    fscanf(fp2,"%d\n",&Village.blsDead1);
    fscanf(fp2,"%d\n",&Hero.levelup);
    fscanf(fp2,"%d\n",&Village.blsDead);
    fscanf(fp2,"%d\n",&Village2.blsDead);
    fscanf(fp2,"%d\n",&Village2.blsDead1);
    fscanf(fp2,"%d\n",&Village2.blsDead2);
    fscanf(fp2,"%d\n",&Village2.blsDead3);
    fscanf(fp2,"%d\n",&Skill.blsDead1);
    fscanf(fp2,"%d\n",&Skill.blsDead2);
    fscanf(fp2,"%d\n",&Skill.blsDead3);
    fscanf(fp2,"%d\n",&Skill.blsDead4);
    fscanf(fp2,"%d\n",&Skill.blsDead5);
    
    fclose(fp2);
}
