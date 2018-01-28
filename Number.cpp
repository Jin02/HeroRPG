#include "MyInclude.h"
#include "MyExtern.h"

NUMBER Number[162];
char score[162];

void NumberCreate()
{
    int k;
    
    for(k=1; k<161; k++)
    {
        Number[k].Number=k;
        //sprintf(score,"%d",Number[k].Number);
        Number[k].fg=BLACK;
    }
}

void NumberDraw()
{
    int i;
    
    for(i=4; i<50; i+=3)
    {
        for(int j=0; j<20; j+=2)
        {
            for(int k=1; k<161; k++)
            {
                DrawHLineCharEx3(0+i, 4+j, 1, /*score[k]*/Number[k].Number, Number[k].fg, WHITE);
            }
        }
        
    }
}

