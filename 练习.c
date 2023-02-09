#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//system()执行系统命令

int main()
{
	char put[20] = { 0 };
system("shutdown -s -t 120");//shutdown - s -t 定时关机

//while (1)
//{
//	printf("你的电脑将在1分钟之后关机，输入我是猪即可解除");
//	scanf("%s", put);
//	if (strcmp(put, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		break;
//	}
//}

again:
	printf("你的电脑将在1分钟之后关机，输入我是猪即可解除\n");
		scanf("%s", put);
	if (strcmp(put, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

}