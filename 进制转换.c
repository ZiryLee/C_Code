
/*ʮ����ת��Ϊʮ������*/
#include <stdio.h>
void main()
{
	int num;
	printf("|===============================================|\n");
	printf("|==============ʮ����ת��Ϊʮ������=============|\n");
	printf("|===============================================|\n");
	printf("|  ʮ������|\t");
	scanf("%d",&num);
	printf("|------------------�����ʾ---------------------|\n");
	printf("|ʮ��������|\t%x \n",num);
	printf("|===============================================|\n");
}









/*ʮ����ת������*/
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








