#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void title()
{
	printf ("\t*                �� ������Ϸ ��                *\n");
	printf ("\t================================================\n");
	printf ("\t������Ʒ�ļ۸񣬾͹�˭���У��۸���1��1000֮��,\n");
	printf ("\t------------------------------------------------\n");
}

void main()
{
	int key = 0, count = 0, num1, num2;
	title();
	printf ("\t�������Ȼش�һ��������ܲμӡ�\n\n");
	printf ("\t����:�������������������������ģ�\n");
	printf ("\t��ش�:");
	scanf ("%d", &key);
	
	if (key == 19760108)
	{
		printf ("\t����~����Ŷ��ͦ�������\n\n");
		Sleep(2000);
		system("CLS");
	}
	else
	{
		printf ("\t�����ȥ�����������ˡ�o(��_��)o ����~\n\n\n\n\n\n\n\n");
	}

	srand ((unsigned)time(NULL));
	num1 = rand()%1000;
	if (key == 19760108)
	{	
		fflush(stdin);
		title();
		printf ("\t�뿪ʼ��<�¹ⱦ��>�ļ۸�������۸�<����Ŷ>\n\n");
		for (count=1; count<=11; count++)
		{	
			printf ("\t[������%d�λ���]\n",12-count);
			printf ("\t��������²�ļ۸�");
			scanf ("%d",&num2);
			if (num2 > 2*num1)
			{
				printf ("\t�Գ���������ô����\n\n");
			}
			else if (num2 > num1)
			{
				printf ("\t���ź������´��ˣ�\n\n");
			}
			if (num2 < num1/2)
			{
				printf ("\tһ����֪���Ǹ�С������ôС��˵�ĳ�\n\n");
			}
			else if (num2 < num1)
			{
				printf ("\t���ź�������С�ˡ�\n\n");
			}
			if (num1 == num2)
			{
				printf("\t$$$��ϲ��¶���!���ǲ������֣�����!!!����:%d\n\n", num2);
				break;
			}
			
		}
		printf("\t���ܹ�����%d�β¶Լ۸�!\n\n", count);
		
	}



}