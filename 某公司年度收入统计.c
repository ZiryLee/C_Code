#include <stdio.h>

void main()
{
	int i;
	double sum=0, income[12];

	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("\t\t   XXX��˾2006���ͳ������\n");
	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (i=0; i<12; i++)
	{
		printf ("\t�������%2d�µĹ�˾���룺", i+1);
		scanf ("%lf", &income[i]);	
		sum+=income[i];
	}
	
	printf ("\tXXX��˾2006���������Ϊ��%lf\n", sum);
}