#include <stdio.h>

void ChooseSort(int num[10]);                        

int main(int argc, char* argv[])                       //���������������������ж��壡
{	
	int i,n,num[10];												
	
	printf ("������ʮ����,ϵͳ���Զ�����\n");

	for (i = 0; i < 10; i++)
	{	
		printf ("�������%d����:", i+1);
		scanf ("%d", &num[i]);
	}

	ChooseSort(num);                              // �����㶨��ĺ�����
	/* ��������������num[] */
	for (n = 0; n<10; n++)
	{
		printf ("%d  ", num[n]);
	}
	printf ("\n");
	
	return 0;
}

void ChooseSort(int num[])                           //�����Ӻ���������ֻ���������
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
