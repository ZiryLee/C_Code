
//小写字母转成大写字母

#include<stdio.h>
int main()
{
	int n=0;
	char c;
	printf("输入一串英文，系统会自动把小写字母转成大写字母。\n输入'='统计转换的个数并退出系统。\n");
	printf("输入一串英文：");
	while((c=getchar())!='=')
	{
		if(c<='z'&&c>='a')
		{
			++n;
			c=c-('a'-'A');
		}
		putchar(c);
	}
	printf("\n一共转换了%d个字母\n",n);
	return 0;
}



//小写字母转成大写字母2


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
	printf("输入一串英文，系统会自动把小写字母转成大写字母。\n输入'='退出系统。\n");
	while((c=getchar())!='=')
	{
		c=myupper(c);  //调用函数!!!
		putchar(c);
	}
}
