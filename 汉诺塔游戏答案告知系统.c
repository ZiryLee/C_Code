#include<stdio.h>

void move(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf ("%c-->%c \n", x, z);
	}
	else
	{
		move (n-1,x,z,y);
		printf ("%c-->%c \n", x, z);
		move (n-1,y,x,z);
	}
}

void main()
{
	int n;
	printf ("=====================================\n");
	printf ("========��ŵ����Ϸ�𰸸�֪ϵͳ=======\n");
	printf ("=====================================\n");
	printf ("�����뺺ŵ���е��ӵ�������");
	scanf ("%d", &n);
	printf ("�ƶ���%2d�����ӵĲ������£�\n",n);
	move(n, 'a', 'b', 'c');
	printf ("����a��b��cΪ��ŵ������������\n");
}
