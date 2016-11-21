#include <stdio.h>

void main()
{
	int i;
	double sum=0, income[12];

	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("\t\t   XXX公司2006年的统计收入\n");
	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (i=0; i<12; i++)
	{
		printf ("\t请输入第%2d月的公司收入：", i+1);
		scanf ("%lf", &income[i]);	
		sum+=income[i];
	}
	
	printf ("\tXXX公司2006年的总收入为：%lf\n", sum);
}