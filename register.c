#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char yhm1[24],yhm2[24],mima1[12],mima2[12];
	int count=1,tag1=1,tag2=1;
	printf("================��ע�᡿================\n");
	printf("*�û������ܳ���24����ĸ������\n");
	printf(" ���������û�����");
	gets(yhm1);
	fflush(stdin);
	printf("*���벻�ܳ���12����ĸ������\n");
	printf(" �����������룺");
	gets(mima1);
	fflush(stdin);
	system("CLS");
	do
	{
		printf("=========����%d�ε�¼��=========\n",count);
		printf(" �û�����");
		gets(yhm2);
		fflush(stdin);
		printf(" ���룺");
		gets(mima2);
		fflush(stdin);
		count++;
		printf("================================\n");
		if(count==6)
			break;
		if(strcmp(yhm1,yhm2)) 
			printf("�û���������!!\n");
		if(strcmp(mima1,mima2)) 
			printf("�������!!\n");
		printf("================================\n");
		system("PAUSE");
		if(!strcmp(yhm1,yhm2)) 
			tag1=0;
		if(!strcmp(mima1,mima2))
			tag2=0;
		system("CLS");
	}while((tag1!=0)||(tag2!=0));	
		if(count==6)
			printf("�����¼Ƶ��\n");
		else
		{
			printf("��½�ɹ�\n");
		}
	return 0;
}