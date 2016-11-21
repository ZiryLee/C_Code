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
	
	printf ("\t表达式b=(a+d)en的计算 e代表(a+b)的n次方\n");
	printf ("\t请输入a b n 的值：");
	scanf ("%d %d %d", &a, &b, &n);

	d = expression(a, b, n);

	printf ("\t% (%d + %d)e%d = %d \n", a, b, n, d);

	return 0;
}
