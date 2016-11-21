#include <stdio.h>
#include <windows.h>

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