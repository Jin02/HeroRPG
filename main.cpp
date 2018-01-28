#include "MyInclude.h"
#include "MyExtern.h"

void main(void)
{
    InitialConsole();
    
    if(MsgBox("게임을 시작할까요?") == FALSE)
    {
        ReleaseConsole();
        return;
    }
    
    while(1)
    {
        StageDraw();
        CheckInput();
        
        if(IsKeyUp(VK_1))
        {
            Stage.Menu=true;
            GameStart();
            break;
        }

        if(IsKey(VK_2))
        {
            Stage.Menu=false;
            GameInfo();
        }
        if(IsKey(VK_3))
        {
            if(MsgBox("게임을 종료할까요?") == TRUE)
            {
                ReleaseConsole();
                return;
            }
        }
    }

    ReleaseConsole();
}
