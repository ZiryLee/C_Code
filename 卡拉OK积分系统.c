#include <stdio.h>

void main()
{
	int pf;
	double mun[10];
	double max = 0, min = 0, sum = 0, pj = 0;

	printf ("\t*            ������OK�����Ļ���ϵͳ��          *\n");
	printf ("\t====================================================\n");
	printf ("\t���δ������ֹ���\n");
	printf ("\t���δ����Ĳ���ίԱ����ʮ�����ʼ��������,�μ�ѡ��\n");
	printf ("\t�����յ÷���ȥ��һ����߷ֺ�һ����ͷ�,Ȼ�����ȡ\n");
	printf ("\tƽ��ֵ,��Ϊѡ�ֵ����յ÷�,���ɼ��ɸߵ���ȡǰ����!\n");
	printf ("\t====================================================\n");
	printf ("\n\t��һ���л���У԰���ֿ���OK������ʽ��ʼ\n");
	/*ʮλ��������*/
	for (pf=0; pf<10; pf++)
	{
		printf ("\t��%2dλ��ί��֣�",pf+1);
		scanf ("%lf",&mun[pf]);
	}

	max = min = mun[0];
	/*�õ������Сֵ*/
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
	/*�ܷ�*/
	for (pf=0; pf<10; pf++)
	{
		sum += mun[pf];
	}
	/*ƽ����*/
	pj = (sum - max - min) / 8;

	printf ("\t��λ���д�ֽ�����£�\n\t");
	
	for (pf=0; pf<10; pf++)
	{
		printf ("%5.2lf  ", mun[pf]);

		if ((pf == 4) || (pf == 9))
		{
			printf ("\n\t");
		}
	}

	printf ("ȥ��һ����߷�:%5.2lf\n",max);
	printf ("\tȥ��һ����ͷ�:%5.2lf\n",min);
	printf ("\t��ѡ�����÷�:%5.3lf\n",pj);
} 
