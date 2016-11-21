
/* 编写一个函数isprime(int x),
判断x是否为素数，是返整数1，否则0;*/
 
#include <stdio.h>
int isprime(int);  //说明
void main()
{
	int x;
	printf("ebter a integer number:");
	scanf("%d",&x);
	if(isprime(x))
		printf("this is a prime\n");
	else 
		printf("this is not a prime\n");
}
int isprime(int x)
{
	int n;
	for(n=2;n<=x/2;n++)
	if(x%n==0)
		return 0;      //return 只执行一次！
	return 1;
}