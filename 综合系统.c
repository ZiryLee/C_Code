#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void qianyan();														/*前言*/
void denglu();														/*登录*/
int xuanzhe();														/*功能选择*/	
void jisuanqi();													/*简单计算器*/
void shengaoyuce();													/*身高预测*/
void sushupanduan();												/*素数判别*/
void runnianpanduan();												/*闰年判别*/		
void photo();														/*简单图形*/	

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
					printf("是否继续使用(y/n)：");
					choose=getchar();
				}while(choose=='y');
				break;	
				
			case 2:
				do
				{
					system("CLS");
					shengaoyuce();
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					fflush(stdin);
					printf("\t是否继续使用(y/n)：");
					choose=getchar();
				}while(choose=='y');	
				break;

			case 3:
				do
				{	
					system("CLS");
					sushupanduan();
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/n)：");
					choose=getchar();
				}while(choose=='y');
				break;

			case 4:
				do
				{	
					system("CLS");
					runnianpanduan();
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/n)：");
					choose=getchar();
				}while(choose=='y');
				break;

			case 5:
				do
				{	
					system("CLS");
					photo();
					fflush(stdin);
					printf("灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("是否继续使用(y/n)：");
					choose=getchar();
				}while(choose=='y');
				break;

			case 0:
				printf("\t欢迎再次使用!\n");
				break;
			default :
				printf("\t输入有误，请重新输入!\n");
		}
	}while(getxuanzhe != 0);
}


////////////////////////////////////////////////////////////////////
void qianyan()
{	printf("\t▂ ▃ ▄ ▅ ▆ ▇ █ █ █ ▇ ▆ ▅ ▄ ▃ ▂ \n");
	printf("\t____|__________________________________|____\n");
	printf("\t          ╰我的第一个小软件╯\n");
	printf("\n");
	printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
	printf("\t欢迎使用我的第一个软件。\n");
	printf("\t本软件有以下功能：1.简单的计算器\n");
	printf("\t                  2.身高预测\n");
	printf("\t                  3.判别素数\n");
	printf("\t                  4.判别闰年\n");
	printf("\t                  5.简单的图形\n");
	printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
	printf("\t*需注册后使用\n\t");
}
//////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
void denglu()
{	
	char newyhm[25] ,getyhm[25], newmima[13], getmima[13];
	int a, count=1;

	printf("\t================【注册】================\n");
	printf("\t========================================\n");
	printf("\t*用户名不能超过24个字母或数字\n");
	printf("\t 请输入新用户名：");
	gets(newyhm);
	fflush(stdin);

	printf("\t*密码不能超过12个字母或数字\n");
	printf("\t 请输入新密码：");
	gets(newmima);
	fflush(stdin);

	printf("\t----------------------------------------\n");
	printf("\t恭喜你注册成功!\n");
	printf("\t请牢记用户名(%s)及密码(%s)!\n",newyhm, newmima);
	printf("\t========================================\n\t");

	system("PAUSE");
	system("CLS");

	do
	{
		printf("\t=========【第%d次登录】===========\n",count);
		printf("\t=================================\n");
		printf("\t 用户名：");
		gets(getyhm);
		fflush(stdin);

		printf("\t   密码：");
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
			printf("用户名不存在!!\n\t");
		}
		else if (strcmp(newmima, getmima))
		{
			printf("密码错误!!\n\t");
		}
		system("PAUSE");
		system("CLS");
	}while(strcmp(newyhm, getyhm) || strcmp(newmima, getmima));
	
	if(count >= 6)
	{
		printf("错误登录频繁\n");
		exit(0);
	}
	if ((!strcmp(newyhm, getyhm)) && (!strcmp(newmima, getmima)))
	{

		for( a=5; a>0; a--)
		{
			printf("\t=====================================\n");
			printf("\t============恭喜您登陆成功===========\n");
			printf("\t=====================================\n");	
			printf("\t%d秒后自动跳转", a);	
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
	printf("\t▂ ▃ ▄ ▅ ▆ ▇ █ █ █ ▇ ▆ ▅ ▄ ▃ ▂ \n");
	printf("\t____|___________________________________|___\n");
	printf("\t              ╰功能大全╯\n");
	printf("\t==========================================\n");
	printf("\t输入你想使用功能：\n");
	printf("\t       1.简单的计算器\n");
	printf("\t       2.身高预测\n");
	printf("\t       3.判别素数\n");
	printf("\t       4.判别闰年\n");
	printf("\t       5.简单的图形\n");
	printf("\t退出请输入“0”\n");
	printf("\t==========================================\n");
	printf("\t请选择(0-5)：");
	scanf("%1d",&a);
	return a;
}

/////////////////////////////////////////////////////////////////

/////////////////////简单的计算器///////////////////////////////////
void jisuanqi()
{
	double data1,data2;
	char op;
	printf ("\t=======================================\n");
    printf ("\t==============简单的计算器=============\n");
    printf ("\t=======================================\n");
	printf ("\t*格式：x + y <回车>  加法运算\n");
	printf ("\t       x - y <回车>  减法运算\n");
	printf ("\t       x * y <回车>  乘法运算\n");
	printf ("\t       x / y <回车>  除法运算\n");
	printf("\t---------------------------------------\n");
    printf("\t请输入表达式:");
    scanf("%lf%c%lf", &data1, &op, &data2);
	switch(op)
	{	
		case'+':
			printf ("\n\t-------------结果显示------------------\n");
			printf ("\t%lf + %lf = %+lf\n", data1, data2, data1+data2);
			printf ("\t=======================================\n");
			break;
		case'-':
			printf ("\n\t-------------结果显示------------------\n");
			printf ("\t%lf - %lf = %+lf\n", data1, data2, data1-data2);
			printf ("\t=======================================\n");
			break;
		case'*':    
			printf ("\n\t-------------结果显示------------------\n");
			printf ("\t%lf * %lf = %+lf\n", data1, data2, data1*data2);
			printf ("\t=======================================\n");
			break;
		case'/': 
			if(data2==0)
			{	
				printf ("\n\t-------------结果显示------------------\n");
				printf ("\t除数不能为零!\n");
				printf ("\t=======================================\n");
			}
			else 
			{	
				printf ("\n\t-------------结果显示------------------\n");
				printf ("\t%lf / %lf = %+lf\n", data1, data2, data1/data2);
				printf ("\t=======================================\n");
				break;
			}
		default:
			printf ("\n\t-------------结果显示------------------\n");
			printf ("\t超出计算范围！\n");
			printf ("\t=======================================\n");
	}
} 
////////////////////////////////////////////////////////////////////


///////////////////// 身高预测 ///////////////////////////////////
void shengaoyuce()
{
	double fa,mo,my=0,s1=0,d1=0;
	char s,d,mw;
	printf("\t=============身高预测============\n");
	printf ("\t您父亲的身高(cm)：");
	scanf (" %lf" ,&fa);
	fflush(stdin);
	printf ("\t您母亲的身高(cm)：");
	scanf (" %lf",&mo);
	fflush(stdin);
	printf ("\t喜不喜欢运动(y/n):");
	scanf (" %c",&s);
	fflush(stdin);
	printf("\t有木有良好的饮食习惯(y/n)：");
	scanf (" %c",&d);
	fflush(stdin);
	printf("\t男性(m)女性(w) (m/w)：");
	scanf (" %c",&mw);
	fflush(stdin);
	printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
	switch (mw)
	{
		case 'm' :
			my = (fa + mo) * 0.54;
			if (s == 'y')
				s1=my*0.02;
			if (d=='y')
				d1=my*0.015;
			my = my + s1 + d1;

			printf("\t您的预测身高为%6.2lfcm\n",my);
			break;
		case 'w' :
			my = (fa * 0.923 + mo) / 2;
			if (s == 'y')
				s1 = my * 0.02;
			if (d == 'y')
				d1 = my * 0.015;
			my = my + s1 + d1;
			printf("您的预测身高为%6.2lfcm\n",my);
			break;
		default :
			printf("您的输入有误!\n");
	}
}

/////////////////////////////////////////////////////////////////////


/////////////////////////素数判断系统/////////////////////////////////
void sushupanduan()
{
	int x,n,tag=0;
	printf("\t==================================\n");
	printf("\t\t   素数判断系统\n");
	printf("\t==================================\n");
	printf("\t请输入一个你要判断的数:");
	scanf("%d",&x);
	printf("\t----------------------------------\n");
	for(n=2;n<=x/2;n++)
		if(x%n==0)
			tag=1;
	if(tag==0)
		printf("\t这是个素数!\n");
	else 
		printf("\t这不是个素数!\n");
}
/////////////////////////////////////////////////////////////////////





///////////////////判别某一年是否闰年//////////////////
void runnianpanduan()
{
	int year;
	printf ("\t============================\n");
	printf ("     判别某一年是否闰年\n");
	printf ("\t============================\n");
	printf ("\t请输入您要判别的年份：");
	scanf ("%d",&year);
	printf ("\n\t-----------结果显示---------\n");
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		printf("\t这是个闰年!\n");
	else printf ("\t这不是个闰年!\n");

}
/////////////////////////////////////////////////////////



///////////////////简单的图形///////////////////////////
void photo()
{	

	
/////////////正直三角///////////////////
	printf("=========正直三角=======\n\n");
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

/////////////倒直三角///////////////////
	printf("\n=======倒直三角==========\n\n");
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

/////////////正三角/////////////////////
	printf("============正三角==============\n");
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

/////////////倒三角///////////////////
	printf("\n\n============倒三角=============\n\n");
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


/////////////棋盘///////////////////
	printf("===========棋盘=============\n\n");

	for(int n5=1;n5<=5;n5++)
	{	printf("|");
		for(int kg4=0;kg4<=5;kg4++)
			printf("■  ");
		printf("|\n");
		printf("|");
		for(int kg5=0;kg5<=5;kg5++)
			printf("  ■");
		printf("|\n");
		Sleep(350);
	}
	system("PAUSE");
	system("CLS");


//////////////////心形///////////////////
	printf("==========================爱心============================\n\n");
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