
/* ��дһ������isprime(int x),
�ж�x�Ƿ�Ϊ�������Ƿ�����1������0;*/
 
#include <stdio.h>
int isprime(int);  //˵��
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
		return 0;      //return ִֻ��һ�Σ�
	return 1;
}