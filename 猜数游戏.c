#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void title()
{
	printf ("\t*                【 猜数游戏 】                *\n");
	printf ("\t================================================\n");
	printf ("\t猜中物品的价格，就归谁所有，价格在1到1000之间,\n");
	printf ("\t------------------------------------------------\n");
}

void main()
{
	int key = 0, count = 0, num1, num2;
	title();
	printf ("\t不过得先回答一个问题才能参加。\n\n");
	printf ("\t请问:周总理是哪年哪月哪日逝世的：\n");
	printf ("\t请回答:");
	scanf ("%d", &key);
	
	if (key == 19760108)
	{
		printf ("\t哎呦~不错哦！挺厉害的嘛。\n\n");
		Sleep(2000);
		system("CLS");
	}
	else
	{
		printf ("\t你该下去问问周总理了。o(∩_∩)o 哈哈~\n\n\n\n\n\n\n\n");
	}

	srand ((unsigned)time(NULL));
	num1 = rand()%1000;
	if (key == 19760108)
	{	
		fflush(stdin);
		title();
		printf ("\t请开始猜<月光宝剑>的价格，请输入价格<整数哦>\n\n");
		for (count=1; count<=11; count++)
		{	
			printf ("\t[您还有%d次机会]\n",12-count);
			printf ("\t请输入你猜测的价格：");
			scanf ("%d",&num2);
			if (num2 > 2*num1)
			{
				printf ("\t吃撑了吗，有那么大吗！\n\n");
			}
			else if (num2 > num1)
			{
				printf ("\t很遗憾，您猜大了！\n\n");
			}
			if (num2 < num1/2)
			{
				printf ("\t一看就知道是个小气鬼，这么小都说的出\n\n");
			}
			else if (num2 < num1)
			{
				printf ("\t很遗憾，您猜小了。\n\n");
			}
			if (num1 == num2)
			{
				printf("\t$$$恭喜你猜对了!你是猜数高手，哈哈!!!答案是:%d\n\n", num2);
				break;
			}
			
		}
		printf("\t你总共用了%d次猜对价格!\n\n", count);
		
	}



}