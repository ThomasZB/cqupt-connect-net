#include "stdio.h"
#include "function.h"
#include "string.h"

/* 用于判断字符串是否全为数字
 * 返回值：
 *      1，全是数字
 *      0，不是全是数字
 */
int IsDigitStr(char *str)
{
    return (strspn(str, "0123456789") == strlen(str));
}

int ParameterJudgment(int argc, char *argv[])
{
    char *temp = NULL;
    if (argc == 2)
    {
        /* 判断是否是帮助信息 */
        if (strcmp(argv[1], "-h")==0 || strcmp(argv[1], "--help")==0)
        {
            return 1;
        }
        /* 判断是否是查看状态信息 */
        else if(strcmp(argv[1], "-s")==0 || strcmp(argv[1], "--status")==0)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
    /* 判断直接连接格式是否正确 */
    else if (argc == 3)
    {
        /* 判断两个是否都是数字 */
        if (IsDigitStr(argv[1]) && IsDigitStr(argv[2]))
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }
    /* 判断是否为-u -p格式 */
    else if (argc == 5)
    {
        /* 判断先是用户名 */
        if (strcmp(argv[1], "-u")==0 || strcmp(argv[1], "--user")==0)
        {
            if (IsDigitStr(argv[2]) == 0)
            {
                return 0;
            }
            /* 如果有密码 */
            if (strcmp(argv[3], "-p")==0 || strcmp(argv[3], "--passward")==0)
            {
                /* 格式正确 */
                return 4;

            }
            else
            {
                return 0;
            }
        }
        /* 判断先是密码 */
        else if (strcmp(argv[1], "-p")==0 || strcmp(argv[1], "--passward")==0)
        {
            /* 如果有用户名 */
            if (strcmp(argv[3], "-u")==0 || strcmp(argv[3], "--user")==0)
            {
                /* 格式正确 */
                if (IsDigitStr(argv[4]))
                {
                    /* 交换密码和用户位置，方便后续统一格式处理 */
                    temp = argv[2];
                    argv[2] = argv[4];
                    argv[4] = temp;
                    return 4;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else 
    {
        return 0;
    }
}

void HelpInfo(void)
{
    printf("用法：cquptnc [OPTION] ...\r\n");
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