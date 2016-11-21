
//定义ADD加法函数

#include <stdio.h>
int add(int,int);  //调用注意分号！！！！
int main()
{
	int a,b,sum;
	printf("please input tow numbers\n");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	return 0;
}
int add(int a,int b)
{
	int s;
	s=a+b;
	return s;
}