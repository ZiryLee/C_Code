#include <stdio.h>
#include <stdlib.h>

int expression(int x, int y, int z)
{
	if (z > 0)
	{
		return (x+y) * expression(x, y, z-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int a, b, d, n;
	
	printf ("\t���ʽb=(a+d)en�ļ��� e����(a+b)��n�η�\n");
	printf ("\t������a b n ��ֵ��");
	scanf ("%d %d %d", &a, &b, &n);

	d = expression(a, b, n);

	printf ("\t% (%d + %d)e%d = %d \n", a, b, n, d);

	return 0;
}
