#include <stdio.h>
void main()
{
	int a,b,c,i;						
	printf("请输入三个数：");			
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){i=b;b=a;a=i;}				
	if(a>c){i=c;c=a;a=i;}
	if(b>c){i=c;c=b;b=i;}
	printf("从小到大排列：%d<%d<%d\n",a,b,c);

}