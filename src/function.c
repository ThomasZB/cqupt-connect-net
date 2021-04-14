#include "stdio.h"
#include "function.h"

int ParameterJudgment(int argc, char *argv[])
{
    if (argc == 2)
    {
        /* 判断是否是帮助信息 */

        /* 判断是否是查看状态信息 */


        return 1;

    }
    /* 判断直接连接格式是否正确 */
    else if (argc == 3)
    {
        return 2;
    }
    /* 判断是否为-u -p格式 */
    else if (argc == 5)
    {
        return 3;
    }
    else 
    {
        return 0;
    }
}

void HelpInfo(void)
{
    printf("this is help info!\r\n");
}

int ConnectFromFile(void)
{
    return 0;
}