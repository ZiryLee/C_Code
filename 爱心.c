#include <stdio.h>
void main()
{
	for(int n1=1;n1<=5;n1++)
	{
		for(int kg1=1;kg1<15-2*n1;kg1++)
			printf(" ");
		for(int x1=1;x1<=4*n1+4;x1++)
			printf("*");
		for(int kg1_1=1;kg1_1<=20-4*n1;kg1_1++)
			printf(" ");
		for(int x1_1=1;x1_1<=4*n1+4;x1_1++)
			printf("*");
		printf("\n");
	}
	
	for(int n3=1;n3<=15;n3++)
	{
		for(int kg3=0;kg3<=2*n3;kg3++)
			printf(" ");
		for(int x3=1;x3<=53-(4*n3-1);x3++)
			printf("*");
		printf("\n");
	}

}




/////////////////////////////////////////////////////
#include   <windows.h>
#include <stdio.h>
void main()
{
	for(int n1=1;n1<=5;n1++)
	{
		for(int kg1=1;kg1<15-2*n1;kg1++)
			printf(" ");
		for(int x1=1;x1<=4*n1+4;x1++)
			printf("*");
		for(int kg1_1=1;kg1_1<=20-4*n1;kg1_1++)
			printf(" ");
		for(int x1_1=1;x1_1<=4*n1+4;x1_1++)
			printf("*");
		printf("\n");
		Sleep(1000);
	}
	
	for(int n3=1;n3<=15;n3++)
	{
		for(int kg3=0;kg3<=2*n3;kg3++)
			printf(" ");
		for(int x3=1;x3<=53-(4*n3-1);x3++)
			printf("*");
		printf("\n");
		Sleep(1000);
	}

}