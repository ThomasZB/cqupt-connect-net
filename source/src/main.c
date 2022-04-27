#include "stdio.h"
#include "command_parsing.h"


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
        return 0;
        
    }
    /* 有参数传入，进行判断和操作 */
    else 
    {
        program_select = ParameterJudgment(argc, argv);
    }

    /* 显示帮助信息 */
    if (program_select == 1)
    {
        HelpInfo();
    }
    /* 显示连接状态 */
    else if (program_select == 2)
    {
        printf("这里是连接状态\r\n");
    }
    /* 直接连接 */
    else if (program_select == 3)
    {
        printf("这是直接连接\r\n");
    }
    /* 根据参数连接 */
    else if (program_select == 4)
    {
        printf("这是根据参数连接\r\n");
        printf("账号：%s\r\n", argv[2]);
        printf("密码：%s\r\n", argv[4]);
    }
    else 
    {
        printf("参数错误，请检查!\r\n");
        HelpInfo();
    }
    
    return 0;
}


