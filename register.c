#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char yhm1[24],yhm2[24],mima1[12],mima2[12];
	int count=1,tag1=1,tag2=1;
	printf("================【注册】================\n");
	printf("*用户名不能超过24个字母或数字\n");
	printf(" 请输入新用户名：");
	gets(yhm1);
	fflush(stdin);
	printf("*密码不能超过12个字母或数字\n");
	printf(" 请输入新密码：");
	gets(mima1);
	fflush(stdin);
	system("CLS");
	do
	{
		printf("=========【第%d次登录】=========\n",count);
		printf(" 用户名：");
		gets(yhm2);
		fflush(stdin);
		printf(" 密码：");
		gets(mima2);
		fflush(stdin);
		count++;
		printf("================================\n");
		if(count==6)
			break;
		if(strcmp(yhm1,yhm2)) 
			printf("用户名不存在!!\n");
		if(strcmp(mima1,mima2)) 
			printf("密码错误!!\n");
		printf("================================\n");
		system("PAUSE");
		if(!strcmp(yhm1,yhm2)) 
			tag1=0;
		if(!strcmp(mima1,mima2))
			tag2=0;
		system("CLS");
	}while((tag1!=0)||(tag2!=0));	
		if(count==6)
			printf("错误登录频繁\n");
		else
		{
			printf("登陆成功\n");
		}
	return 0;
}