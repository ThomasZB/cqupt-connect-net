#include "stdio.h"
#include "function.h"



int main(int argc, char *argv[])
{
    int program_select = 0;

    /* 无参数传入 */
    if (argc == 1)
    {
        /* 尝试用文件内容连接 */
        if (ConnectFromFile() == 0)
        {
            /* 连接失败显示帮助信息 */
            HelpInfo();
        }
        
    }
    /* 有参数传入，进行判断和操作 */
    else 
    {
        program_select = ParameterJudgment(argc, argv);
    }

    /* 显示帮助信息 */
    if (program_select == 1)
    {

    }
    /* 显示连接状态 */
    else if (program_select == 2)
    {

    }
    /* 用参数进行连接 */
    else if (program_select == 3)
    {

    }
    else 
    {
        printf("Parameter error! Please check!\r\n");
        HelpInfo();
    }
    
    return 0;
}


