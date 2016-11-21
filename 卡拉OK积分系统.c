#include <stdio.h>

void main()
{
	int pf;
	double mun[10];
	double max = 0, min = 0, sum = 0, pj = 0;

	printf ("\t*            【卡拉OK大奖赛的积分系统】          *\n");
	printf ("\t====================================================\n");
	printf ("\t本次大奖赛评分规则：\n");
	printf ("\t本次大赛的裁判委员会由十名国际级裁判组成,参加选手\n");
	printf ("\t的最终得分是去掉一个最高分和一个最低分,然后求和取\n");
	printf ("\t平均值,即为选手的最终得分,按成绩由高到底取前三名!\n");
	printf ("\t====================================================\n");
	printf ("\n\t第一届中华杯校园歌手卡拉OK大奖赛正式开始\n");
	/*十位裁判评分*/
	for (pf=0; pf<10; pf++)
	{
		printf ("\t第%2d位评委打分：",pf+1);
		scanf ("%lf",&mun[pf]);
	}

	max = min = mun[0];
	/*得到最大最小值*/
	for (pf=0; pf<10; pf++)
	{
		if (max < mun[pf])
		{
			max = mun[pf];
		}
		if (min > mun[pf])
		{
			min = mun[pf];
		}
	}
	/*总分*/
	for (pf=0; pf<10; pf++)
	{
		sum += mun[pf];
	}
	/*平均分*/
	pj = (sum - max - min) / 8;

	printf ("\t各位裁判打分结果如下：\n\t");
	
	for (pf=0; pf<10; pf++)
	{
		printf ("%5.2lf  ", mun[pf]);

		if ((pf == 4) || (pf == 9))
		{
			printf ("\n\t");
		}
	}

	printf ("去掉一个最高分:%5.2lf\n",max);
	printf ("\t去掉一个最低分:%5.2lf\n",min);
	printf ("\t该选手最后得分:%5.3lf\n",pj);
} 
