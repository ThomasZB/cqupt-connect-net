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
    printf("\r\n");
    printf("通过向192.168.200.2发送http请求登录网络的工具\r\n\r\n");
    printf("-h, --help\t\t\t查看帮助信息\r\n");
    printf("-u, --user string\t\t指定用户名\r\n");
    printf("-p, --passward string\t\t指定密码\r\n");
    printf("-s, --status\t\t\t查看当前状态\r\n");
    printf("常用命令:\r\n");
    printf("\t./cquptnc -u 账号 -p 密码\r\n");
    printf("\t./cquptnc 账号 密码\r\n\r\n");
    printf("如果不传递参数，会自动寻找目录下的config.txt文件，若文件中有用户名密码，则可以直接通过该用户名和密码登录\r\n");
    printf("github查看详细帮助：https://github.com/ThomasZB/cqupt-connect-net\r\n");

}

int ConnectFromFile(void)
{
    return 0;
}