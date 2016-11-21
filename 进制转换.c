
/*十进制转换为十六进制*/
#include <stdio.h>
void main()
{
	int num;
	printf("|===============================================|\n");
	printf("|==============十进制转换为十六进制=============|\n");
	printf("|===============================================|\n");
	printf("|  十进制数|\t");
	scanf("%d",&num);
	printf("|------------------结果显示---------------------|\n");
	printf("|十六进制数|\t%x \n",num);
	printf("|===============================================|\n");
}









/*十进制转二进制*/
#include <stdio.h>
void main()
{
	int num;
	int i[16]={0};
	
	printf("Please input decimalism (0-32767) :\n");
	scanf("%d",&num);
	for(int k=0;k<15;k++)
	{
		i[k]=num%2;
		num=num/2;

	}
	for(int j=15;j>=0;j--)
	{	
		printf("%d,",i[j]);
	}


}








