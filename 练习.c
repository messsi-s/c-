#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//system()ִ��ϵͳ����

int main()
{
	char put[20] = { 0 };
system("shutdown -s -t 120");//shutdown - s -t ��ʱ�ػ�

//while (1)
//{
//	printf("��ĵ��Խ���1����֮��ػ��������������ɽ��");
//	scanf("%s", put);
//	if (strcmp(put, "������") == 0)
//	{
//		system("shutdown -a");
//		break;
//	}
//}

again:
	printf("��ĵ��Խ���1����֮��ػ��������������ɽ��\n");
		scanf("%s", put);
	if (strcmp(put, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

}