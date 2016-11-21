//一个简单数值互换

#include <stdio.h>
void main()
{	
	int a,b,c;								
	printf("请输入两个数字：\n");		
	scanf("%d%d",&a,&b);						
	printf("令a=%d,b=%d\n",a,b);					
	c=a,a=b,b=c;
	printf("经过交换后a=%d,b=%d\n",a,b);
}