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
	printf ("========汉诺塔游戏答案告知系统=======\n");
	printf ("=====================================\n");
	printf ("请输入汉诺塔中碟子的数量：");
	scanf ("%d", &n);
	printf ("移动这%2d个碟子的步骤如下：\n",n);
	move(n, 'a', 'b', 'c');
	printf ("其中a，b，c为汉诺塔中三根柱子\n");
}
