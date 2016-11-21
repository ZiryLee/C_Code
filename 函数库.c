#include <stdio.h>
#include <windows.h>

/////////////////////简单的计算器///////////////////////////////////
void jisuanqi()
{
	double data1,data2;
	char op;

	printf ("=======================================\n");
    printf ("\t    简单的计算器\n");
    printf ("=======================================\n");
	printf ("*格式： x + y <回车>  加法运算\n\tx - y <回车>  减法运算\n\tx * y <回车>  乘法运算\n\tx / y <回车>  除法运算\n");
	printf ("---------------------------------------\n");
    printf ("请输入表达式:");
    scanf("%lf%c%lf", &data1, &op, &data2);

	switch(op)
	{	
		case'+':
			printf ("\n-------------结果显示---------------\n");
			printf ("%.2lf + %.2lf = %.2lf\n", data1, data2, data1+data2);
			printf ("------------------------------------\n");
			break;
		case'-':
			printf ("\n-------------结果显示---------------\n");
			printf ("%.2lf - %.2lf = %.2lf\n", data1, data2, data1-data2);
			printf ("------------------------------------\n");
			break;
		case'*':    
			printf ("\n-------------结果显示---------------\n");
			printf ("%.2lf * %.2lf = %.2lf\n", data1, data2, data1*data2);
			printf ("------------------------------------\n");
			break;
		case'/': 
			if (data2 == 0)
			{	
				printf ("\n-------------结果显示---------------\n");
				printf ("除数不能为零!\n");
				printf ("------------------------------------\n");
			}
			else 
			{	
				printf ("\n-------------结果显示---------------\n");
				printf ("%.2lf / %.2lf = %.2lf\n", data1, data2, data1/data2);
				printf ("------------------------------------\n");
				break;
			}
		default:
			printf ("\n-------------结果显示---------------\n");
			printf ("超出计算范围！\n");
			printf ("------------------------------------\n");
	}
} 
/////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////// 身高预测 ///////////////////////////////////
void shengaoyuce()
{
	double fa, mo, my = 0, s1 = 0, d1 = 0;
	char s, d, mw;

	printf ("===========身高预测==========\n");
	printf ("您父亲的身高(cm)：");
	scanf (" %lf" , &fa);
	fflush(stdin);

	printf ("您母亲的身高(cm)：");
	scanf (" %lf", &mo);
	fflush(stdin);

	printf ("喜不喜欢运动(y/n):");
	scanf (" %c", &s);
	fflush(stdin);

	printf ("有木有良好的饮食习惯(y/n)：");
	scanf (" %c", &d);
	fflush(stdin);

	printf ("男性(m)女性(w) (m/w)：");
	scanf (" %c", &mw);
	fflush(stdin);

	printf("==============================\n");

	switch (mw)
	{
		case 'm' :
			my = (fa + mo) * 0.54;
			if (s == 'y')
			{
				s1 = my * 0.02;
			}
			if (d == 'y')
			{
				d1 = my * 0.015;
			}
			my = my + s1 + d1;
			printf ("您的预测身高为%6.2lfcm\n",my);
			break;
		case 'w' :
			my = (fa * 0.923 + mo)/2;
			if (s == 'y')
				s1 = my * 0.02;
			if (d == 'y')
				d1 = my * 0.015;
			my = my + s1 + d1;
			printf ("您的预测身高为%6.2lfcm\n",my);
			break;
		default :
			printf ("您的输入有误!\n");
	}
}

//////////////////////////////////////////////////////////////////////


/////////////////////////素数判断系统/////////////////////////////////
void sushupanduan()
{
	int x,n,tag=0;

	printf ("==================================\n");
	printf ("\t   素数判断系统\n");
	printf ("==================================\n");
	printf ("请输入一个你要判断的数:");
	scanf ("%d", &x);
	printf ("----------------------------------\n");

	for (n = 2; n <= x/2; n++)
	{
		if(x%n==0)
		{
			tag=1;
		}
	}
	if(tag==0)
	{
		printf("这是个素数!\n");
	}	
	else 
	{
		printf("这不是个素数!\n");
	}
}
/////////////////////////////////////////////////////////////////////





///////////////////判别某一年是否闰年//////////////////
void runnianpanduan()
{
	int year;

	printf ("============================\n");
	printf ("     判别某一年是否闰年\n");
	printf ("============================\n");
	printf ("请输入您要判别的年份：");
	scanf ("%d", &year);
	printf ("\n-----------结果显示---------\n");
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		printf("这是个闰年!\n");
	}
	else 
	{
		printf ("这不是个闰年!\n");
	}
}
/////////////////////////////////////////////////////////



void jiandantuxin()
{	

	
/////////////////////正直三角//////////////////////

	printf ("=========正直三角=======\n\n");
	for (int n1=1;n1<=11;n1++)
	{
		for(int x1=1;x1<=2;x1++)
		{
			printf (" ");
		}
		for(int kg1=1;kg1<=n1;kg1++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);	
	}
	Sleep(300);


/////////////////////倒直三角////////////////////////

	printf ("\n=======倒直三角==========\n\n");
	Sleep(200);
	for(int n2 = 1; n2 <= 13; n2++)
	{
		for(int kg2 = 0; kg2 <= n2; kg2++)
		{
			printf(" ");
		}
		for(int x2=1;x2<=13-n2;x2++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);
	}
	Sleep(300);
	system("PAUSE");
	system("CLS");


///////////////////////正三角////////////////////////

	printf("============正三角==============\n");
	for(int n3=0;n3<=13;n3++)
	{
		for(int kg3 = 1;kg3 <= 15 - n3; kg3++)
		{
			printf(" ");
		}
		for(int x3 = 1; x3 <= 2 * n3-1; x3++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);
	}

	Sleep(300);


//////////////////////倒三角/////////////////////////

	printf("\n\n============倒三角=============\n\n");
	Sleep(300);
	for(int n4 = 2; n4 <= 15; n4++)
	{
		for(int kg4 = 0; kg4 <= n4; kg4++)
		{
			printf(" ");
		}
		for(int x4=1;x4<=28-(2*n4-1); x4++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);
	}
	Sleep(300);
	system("PAUSE");
	system("CLS");


///////////////////////棋盘/////////////////////////

	printf("===========棋盘=============\n\n");

	for(int n5 = 1; n5 <= 5; n5++)
	{	
		printf("|");
		for(int kg4 = 0; kg4 <= 5; kg4++)
		{
			printf("■  ");
		}
		printf("|\n");
		printf("|");
		for(int kg5 = 0; kg5 <= 5; kg5++)
		{
			printf("  ■");
		}
		printf("|\n");
		Sleep(200);
	}
	Sleep(300);
	system("PAUSE");
	system("CLS");


///////////////////////////////心形////////////////////////////

	printf("==========================心形============================\n\n");
	for(int n6 = 1; n6 <= 5; n6++)
	{
		for(int kg1=1; kg1<15-2*n6; kg1++)
		{
			printf(" ");
		}
		for(int x1=1; x1<=4*n6+4; x1++)
		{
			printf("*");
		}
		for(int kg1_1=1; kg1_1<=20-4*n6; kg1_1++)
		{
			printf(" ");
		}
		for(int x1_1=1; x1_1<=4*n6+4; x1_1++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);
	}
	
	for(int n7=1;n7<=15;n7++)
	{
		for(int kg3=0;kg3<=2*n7;kg3++)
		{
			printf(" ");
		}
		for(int x3=1;x3<=53-(4*n7-1);x3++)
		{
			printf("*");
		}
		printf("\n");
		Sleep(200);
	}
	Sleep(300);
}