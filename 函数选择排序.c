#include <stdio.h>

void ChooseSort(int num[10]);                        

int main(int argc, char* argv[])                       //先声明，你在主函数下有定义！
{	
	int i,n,num[10];												
	
	printf ("请输入十个数,系统将自动排序。\n");

	for (i = 0; i < 10; i++)
	{	
		printf ("请输入第%d个数:", i+1);
		scanf ("%d", &num[i]);
	}

	ChooseSort(num);                              // 调用你定义的函数！
	/* 输出以排序的数组num[] */
	for (n = 0; n<10; n++)
	{
		printf ("%d  ", num[n]);
	}
	printf ("\n");
	
	return 0;
}

void ChooseSort(int num[])                           //定义子函数，这里只排序不输出。
{
	int tag, temp, i, j;

	for (i = 0; i < 10; i++)
	{
		tag=i;
		for (j = i+1; j < 10; j++)
		{
			if (num[tag] > num[j])
			{
				tag = j;
			}
		}
		if (tag != i)
		{
			temp = num[i];
			num[i] = num[tag];
			num[tag] = temp;
		}
	}
}
