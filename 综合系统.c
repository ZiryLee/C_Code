#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void qianyan();														/*ǰ��*/
void denglu();														/*��¼*/
int xuanzhe();														/*����ѡ��*/	
void jisuanqi();													/*�򵥼�����*/
void shengaoyuce();													/*���Ԥ��*/
void sushupanduan();												/*�����б�*/
void runnianpanduan();												/*�����б�*/		
void photo();														/*��ͼ��*/	

void main()
{	
	int getxuanzhe;
	char choose;
	
    qianyan();
	system("PAUSE");
	system("CLS");
	denglu();
	
	do
	{	
		fflush(stdin);
		system("CLS");
		getxuanzhe = xuanzhe();
		switch (getxuanzhe)
		{
			case 1:
				do
				{	
					system("CLS");
					jisuanqi();
					fflush(stdin);
					printf("�Ƿ����ʹ��(y/n)��");
					choose=getchar();
				}while(choose=='y');
				break;	
				
			case 2:
				do
				{
					system("CLS");
					shengaoyuce();
					printf("\t������������������������������\n");
					fflush(stdin);
					printf("\t�Ƿ����ʹ��(y/n)��");
					choose=getchar();
				}while(choose=='y');	
				break;

			case 3:
				do
				{	
					system("CLS");
					sushupanduan();
					fflush(stdin);
					printf("\t����������������������������������\n");
					printf("\t�Ƿ����ʹ��(y/n)��");
					choose=getchar();
				}while(choose=='y');
				break;

			case 4:
				do
				{	
					system("CLS");
					runnianpanduan();
					fflush(stdin);
					printf("\t��������������������������\n");
					printf("\t�Ƿ����ʹ��(y/n)��");
					choose=getchar();
				}while(choose=='y');
				break;

			case 5:
				do
				{	
					system("CLS");
					photo();
					fflush(stdin);
					printf("����������������������������������������������������������\n");
					printf("�Ƿ����ʹ��(y/n)��");
					choose=getchar();
				}while(choose=='y');
				break;

			case 0:
				printf("\t��ӭ�ٴ�ʹ��!\n");
				break;
			default :
				printf("\t������������������!\n");
		}
	}while(getxuanzhe != 0);
}


////////////////////////////////////////////////////////////////////
void qianyan()
{	printf("\t�y �z �{ �| �} �~ �� �� �� �~ �} �| �{ �z �y \n");
	printf("\t____|__________________________________|____\n");
	printf("\t          �t�ҵĵ�һ��С����s\n");
	printf("\n");
	printf("\t������������������������������������������\n");
	printf("\t��ӭʹ���ҵĵ�һ�������\n");
	printf("\t����������¹��ܣ�1.�򵥵ļ�����\n");
	printf("\t                  2.���Ԥ��\n");
	printf("\t                  3.�б�����\n");
	printf("\t                  4.�б�����\n");
	printf("\t                  5.�򵥵�ͼ��\n");
	printf("\t������������������������������������������\n");
	printf("\t*��ע���ʹ��\n\t");
}
//////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
void denglu()
{	
	char newyhm[25] ,getyhm[25], newmima[13], getmima[13];
	int a, count=1;

	printf("\t================��ע�᡿================\n");
	printf("\t========================================\n");
	printf("\t*�û������ܳ���24����ĸ������\n");
	printf("\t ���������û�����");
	gets(newyhm);
	fflush(stdin);

	printf("\t*���벻�ܳ���12����ĸ������\n");
	printf("\t �����������룺");
	gets(newmima);
	fflush(stdin);

	printf("\t----------------------------------------\n");
	printf("\t��ϲ��ע��ɹ�!\n");
	printf("\t���μ��û���(%s)������(%s)!\n",newyhm, newmima);
	printf("\t========================================\n\t");

	system("PAUSE");
	system("CLS");

	do
	{
		printf("\t=========����%d�ε�¼��===========\n",count);
		printf("\t=================================\n");
		printf("\t �û�����");
		gets(getyhm);
		fflush(stdin);

		printf("\t   ���룺");
		gets(getmima);
		fflush(stdin);

		++count;

		printf("\t=================================\n\t");

		if (count >= 6)
		{
			break;
		}

		if (strcmp(newyhm, getyhm))
		{
			printf("�û���������!!\n\t");
		}
		else if (strcmp(newmima, getmima))
		{
			printf("�������!!\n\t");
		}
		system("PAUSE");
		system("CLS");
	}while(strcmp(newyhm, getyhm) || strcmp(newmima, getmima));
	
	if(count >= 6)
	{
		printf("�����¼Ƶ��\n");
		exit(0);
	}
	if ((!strcmp(newyhm, getyhm)) && (!strcmp(newmima, getmima)))
	{

		for( a=5; a>0; a--)
		{
			printf("\t=====================================\n");
			printf("\t============��ϲ����½�ɹ�===========\n");
			printf("\t=====================================\n");	
			printf("\t%d����Զ���ת", a);	
			Sleep(1000);
			system("CLS");
		}
		system("CLS");
	}
}
//////////////////////////////////////////////////////////////////////

int xuanzhe()
{	
	int a;
	system("CLS");
	printf("\t�y �z �{ �| �} �~ �� �� �� �~ �} �| �{ �z �y \n");
	printf("\t____|___________________________________|___\n");
	printf("\t              �t���ܴ�ȫ�s\n");
	printf("\t==========================================\n");
	printf("\t��������ʹ�ù��ܣ�\n");
	printf("\t       1.�򵥵ļ�����\n");
	printf("\t       2.���Ԥ��\n");
	printf("\t       3.�б�����\n");
	printf("\t       4.�б�����\n");
	printf("\t       5.�򵥵�ͼ��\n");
	printf("\t�˳������롰0��\n");
	printf("\t==========================================\n");
	printf("\t��ѡ��(0-5)��");
	scanf("%1d",&a);
	return a;
}

/////////////////////////////////////////////////////////////////

/////////////////////�򵥵ļ�����///////////////////////////////////
void jisuanqi()
{
	double data1,data2;
	char op;
	printf ("\t=======================================\n");
    printf ("\t==============�򵥵ļ�����=============\n");
    printf ("\t=======================================\n");
	printf ("\t*��ʽ��x + y <�س�>  �ӷ�����\n");
	printf ("\t       x - y <�س�>  ��������\n");
	printf ("\t       x * y <�س�>  �˷�����\n");
	printf ("\t       x / y <�س�>  ��������\n");
	printf("\t---------------------------------------\n");
    printf("\t��������ʽ:");
    scanf("%lf%c%lf", &data1, &op, &data2);
	switch(op)
	{	
		case'+':
			printf ("\n\t-------------�����ʾ------------------\n");
			printf ("\t%lf + %lf = %+lf\n", data1, data2, data1+data2);
			printf ("\t=======================================\n");
			break;
		case'-':
			printf ("\n\t-------------�����ʾ------------------\n");
			printf ("\t%lf - %lf = %+lf\n", data1, data2, data1-data2);
			printf ("\t=======================================\n");
			break;
		case'*':    
			printf ("\n\t-------------�����ʾ------------------\n");
			printf ("\t%lf * %lf = %+lf\n", data1, data2, data1*data2);
			printf ("\t=======================================\n");
			break;
		case'/': 
			if(data2==0)
			{	
				printf ("\n\t-------------�����ʾ------------------\n");
				printf ("\t��������Ϊ��!\n");
				printf ("\t=======================================\n");
			}
			else 
			{	
				printf ("\n\t-------------�����ʾ------------------\n");
				printf ("\t%lf / %lf = %+lf\n", data1, data2, data1/data2);
				printf ("\t=======================================\n");
				break;
			}
		default:
			printf ("\n\t-------------�����ʾ------------------\n");
			printf ("\t�������㷶Χ��\n");
			printf ("\t=======================================\n");
	}
} 
////////////////////////////////////////////////////////////////////


///////////////////// ���Ԥ�� ///////////////////////////////////
void shengaoyuce()
{
	double fa,mo,my=0,s1=0,d1=0;
	char s,d,mw;
	printf("\t=============���Ԥ��============\n");
	printf ("\t�����׵����(cm)��");
	scanf (" %lf" ,&fa);
	fflush(stdin);
	printf ("\t��ĸ�׵����(cm)��");
	scanf (" %lf",&mo);
	fflush(stdin);
	printf ("\tϲ��ϲ���˶�(y/n):");
	scanf (" %c",&s);
	fflush(stdin);
	printf("\t��ľ�����õ���ʳϰ��(y/n)��");
	scanf (" %c",&d);
	fflush(stdin);
	printf("\t����(m)Ů��(w) (m/w)��");
	scanf (" %c",&mw);
	fflush(stdin);
	printf("\t������������������������������\n");
	switch (mw)
	{
		case 'm' :
			my = (fa + mo) * 0.54;
			if (s == 'y')
				s1=my*0.02;
			if (d=='y')
				d1=my*0.015;
			my = my + s1 + d1;

			printf("\t����Ԥ�����Ϊ%6.2lfcm\n",my);
			break;
		case 'w' :
			my = (fa * 0.923 + mo) / 2;
			if (s == 'y')
				s1 = my * 0.02;
			if (d == 'y')
				d1 = my * 0.015;
			my = my + s1 + d1;
			printf("����Ԥ�����Ϊ%6.2lfcm\n",my);
			break;
		default :
			printf("������������!\n");
	}
}

/////////////////////////////////////////////////////////////////////


/////////////////////////�����ж�ϵͳ/////////////////////////////////
void sushupanduan()
{
	int x,n,tag=0;
	printf("\t==================================\n");
	printf("\t\t   �����ж�ϵͳ\n");
	printf("\t==================================\n");
	printf("\t������һ����Ҫ�жϵ���:");
	scanf("%d",&x);
	printf("\t----------------------------------\n");
	for(n=2;n<=x/2;n++)
		if(x%n==0)
			tag=1;
	if(tag==0)
		printf("\t���Ǹ�����!\n");
	else 
		printf("\t�ⲻ�Ǹ�����!\n");
}
/////////////////////////////////////////////////////////////////////





///////////////////�б�ĳһ���Ƿ�����//////////////////
void runnianpanduan()
{
	int year;
	printf ("\t============================\n");
	printf ("     �б�ĳһ���Ƿ�����\n");
	printf ("\t============================\n");
	printf ("\t��������Ҫ�б����ݣ�");
	scanf ("%d",&year);
	printf ("\n\t-----------�����ʾ---------\n");
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		printf("\t���Ǹ�����!\n");
	else printf ("\t�ⲻ�Ǹ�����!\n");

}
/////////////////////////////////////////////////////////



///////////////////�򵥵�ͼ��///////////////////////////
void photo()
{	

	
/////////////��ֱ����///////////////////
	printf("=========��ֱ����=======\n\n");
	for(int n1=1;n1<=11;n1++)
	{
		for(int x1=1;x1<=2;x1++)
			printf(" ");
		for(int kg1=1;kg1<=n1;kg1++)
			printf("*");
		Sleep(200);
		printf("\n");
	}
	Sleep(300);

/////////////��ֱ����///////////////////
	printf("\n=======��ֱ����==========\n\n");
	Sleep(200);
	for(int n2=1;n2<=13;n2++)
	{
		for(int kg2=0;kg2<=n2;kg2++)
			printf(" ");
		for(int x2=1;x2<=13-n2;x2++)
			printf("*");
		printf("\n");
		Sleep(200);
	}
	system("PAUSE");
	system("CLS");

/////////////������/////////////////////
	printf("============������==============\n");
	for(int n3=0;n3<=13;n3++)
	{
		for(int kg3=1;kg3<=15-n3;kg3++)
			printf(" ");
		for(int x3=1;x3<=2*n3-1;x3++)
			printf("*");
		printf("\n");
		Sleep(200);
	}

	Sleep(300);

/////////////������///////////////////
	printf("\n\n============������=============\n\n");
	Sleep(200);
	for(int n4=2;n4<=15;n4++)
	{
		for(int kg4=0;kg4<n4;kg4++)
			printf(" ");
		for(int x4=1;x4<=28-(2*n4-1);x4++)
			printf("*");
		printf("\n");
		Sleep(200);
	}
	system("PAUSE");
	system("CLS");


/////////////����///////////////////
	printf("===========����=============\n\n");

	for(int n5=1;n5<=5;n5++)
	{	printf("|");
		for(int kg4=0;kg4<=5;kg4++)
			printf("��  ");
		printf("|\n");
		printf("|");
		for(int kg5=0;kg5<=5;kg5++)
			printf("  ��");
		printf("|\n");
		Sleep(350);
	}
	system("PAUSE");
	system("CLS");


//////////////////����///////////////////
	printf("==========================����============================\n\n");
	for(int n6=1;n6<=5;n6++)
	{
		for(int kg1=1;kg1<15-2*n6;kg1++)
			printf(" ");
		for(int x1=1;x1<=4*n6+4;x1++)
			printf("*");
		for(int kg1_1=1;kg1_1<=20-4*n6;kg1_1++)
			printf(" ");
		for(int x1_1=1;x1_1<=4*n6+4;x1_1++)
			printf("*");
		printf("\n");
		Sleep(200);
	}
	
	for(int n7=1;n7<=15;n7++)
	{
		for(int kg3=0;kg3<=2*n7;kg3++)
			printf(" ");
		for(int x3=1;x3<=53-(4*n7-1);x3++)
			printf("*");
		printf("\n");
		Sleep(200);
	
	}
	Sleep(300);

}
///////////////////////////////////////////////////