
//Сд��ĸת�ɴ�д��ĸ

#include<stdio.h>
int main()
{
	int n=0;
	char c;
	printf("����һ��Ӣ�ģ�ϵͳ���Զ���Сд��ĸת�ɴ�д��ĸ��\n����'='ͳ��ת���ĸ������˳�ϵͳ��\n");
	printf("����һ��Ӣ�ģ�");
	while((c=getchar())!='=')
	{
		if(c<='z'&&c>='a')
		{
			++n;
			c=c-('a'-'A');
		}
		putchar(c);
	}
	printf("\nһ��ת����%d����ĸ\n",n);
	return 0;
}



//Сд��ĸת�ɴ�д��ĸ2


#include <stdio.h>
#include <ctype.h>
char myupper(char ch)
{
	if(ch>='a'&&ch<='z')
		ch=ch-32;
		return ch;
}
void main()
{
	char c;
	printf("����һ��Ӣ�ģ�ϵͳ���Զ���Сд��ĸת�ɴ�д��ĸ��\n����'='�˳�ϵͳ��\n");
	while((c=getchar())!='=')
	{
		c=myupper(c);  //���ú���!!!
		putchar(c);
	}
}
