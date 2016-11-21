#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void surface();        //����
void statistics();     //ĳ��˾�������ͳ��
void revenue();       //��������˰����ϵͳ
void title();		  //������Ϸ����
void guessnum();	  //������Ϸ
void grade();		  //����OK����ϵͳ
void move();		  //��ŵ����Ϸ�𰸸�֪ϵͳ1
void hannuota();	  //��ŵ����Ϸ�𰸸�֪ϵͳ2

void main()
{
	int choose;
	char yn;

	do
	{	
		fflush(stdin);          //��ջ��嵥Ԫ
		system("CLS");	     	//������ע��Ҫ����ͷ�ļ�#include <stdlib.h>��
		surface();		//���ý��溯��
		scanf ("%d",&choose);
		switch (choose)
		{
			
			case 0:
				do
				{	
					system("CLS");
					statistics();          //����ĳ��˾�������ͳ��
					fflush(stdin);
					printf("\t����������������������������������������������\n");
					printf("\t�Ƿ����ʹ��(y/*)��");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
			break;
			
			case 1:
				do
				{
					system("CLS");
					revenue();                 //���ø�������˰����ϵͳ
					printf("\t����������������������������������������������\n");
					fflush(stdin);
					printf("\t�Ƿ����ʹ��(y/*)��");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');	
				break;

			case 2:
				do
				{	
					system("CLS");
					guessnum();                //���ò�����Ϸ
					fflush(stdin);
					printf("\t������������������������������������������������\n");
					printf("\t�Ƿ����ʹ��(y/*)��");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;

			case 3:
				do
				{	
					system("CLS");
					grade();					//���ÿ���OK����ϵͳ
					fflush(stdin);
					printf("\t��������������������������������������������������\n");
					printf("\t�Ƿ����ʹ��(y/*)��");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;
		
			case 4:
				do
				{	
					system("CLS");
					hannuota();					//���ú�ŵ����Ϸ�𰸸�֪ϵͳ2
					fflush(stdin);
					printf("\t����������������������������������������������������\n");
					printf("\t�Ƿ����ʹ��(y/*)��");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;
			
			case 5:
				printf("\t\t      ��ӭ�ٴ�ʹ��!\n");
				break;

			default :
				printf("\t\t  ������������������!\n");
				Sleep(3000);
				break;
		}
	}while(choose != 5);
}

////////////////////////////////////////////////////////////////////////
void surface()
{
	printf("\t\\__________________________________________/   \n");
	printf("\t>>---------------->��<-------------------<<\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\tϵ--ͳ--��--ȫ\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t    |*|_____________________________|*|\n");
	printf("\t    |*|            Y^v^Y            |*|\n");
	printf("\t    |*|-----------------------------|*|\n");
	printf("\t-------------------------------------------\n");
	printf("\t\t=��������������ϵͳ��=\n");
	printf("\t\t0->�������ͳ��ϵͳ\n");
	printf("\t\t1->��������˰����ϵͳ\n");
	printf("\t\t2->�¼۸���Ϸ���ϵͳ\n");
	printf("\t\t3->����OK��������ϵͳ\n");
	printf("\t\t4->��ŵ����Ϸ�𰸸�֪ϵͳ\n");
	printf("\t\t5->�˳�ϵͳ\n");
	printf("\t>>-------------$--*^v^*--$-------------<<\n");
	printf("\t  ��ѡ��:");
}
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
void statistics()
{
	int i;
	double sum=0, income[12];

	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("\t\t   XXX��˾2006���ͳ������\n");
	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (i=0; i<12; i++)
	{
		printf ("\t�������%2d�µĹ�˾���룺", i+1);
		scanf ("%lf", &income[i]);	
		sum+=income[i];
	}
	
	printf ("\tXXX��˾2006���������Ϊ��%lf\n", sum);
}
////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////
void revenue()
{
	double tag=0, origin, income, taxable, AT;

	printf ("\t**********************************************\n");
	printf ("\t\t      ��������˰����ϵͳ\n");
	printf ("\t**********************************************\n");

	printf ("\t����������¹�����<��ԪΪ��λ>��");
	scanf  ("%lf", &income);

	printf ("\t�����뵱�صĸ�˰������ �������֪���Ͱٶ�һ�£���");
	scanf  ("%lf", &origin);
    /*Ӧ��˰���ö�(��˰����)=ÿ������(н��)���� - ����˰����*/
	taxable = income - origin;
	/*Ӧ������˰ = Ӧ��˰���ö� * ˰�� - ����۳���*/
	if (income < origin)
	{
		printf ("\t��ҪŬ��׬Ǯ���������������㣬��ɶ˰����\n");
		tag = 1;
	}
	else if (taxable <= 500)
	{
		AT = taxable * 0.05;
	}
	else if (taxable <= 2000)
	{
		AT = taxable * 0.1 - 25;
	}
	else if (taxable <= 5000)
	{
		AT = taxable * 0.15 - 125;
	}
	else if (taxable <= 20000)
	{
		AT = taxable * 0.2 - 375;
	}
	else if (taxable <= 40000)
	{
		AT = taxable * 0.25 - 1375;
	}
	else if (taxable <= 60000)
	{
		AT = taxable * 0.30 - 3375;
	}
	else if (taxable <= 80000)
	{
		AT = taxable * 0.35 - 6375;
	}
	else if (taxable <= 100000)
	{
		AT = taxable * 0.4 - 10375;
	}
	else if (taxable > 100000)
	{
		AT = taxable * 0.45 - 15875;
	}
	
	if(tag == 0)
	{
		printf ("\t�����¹��������ܹ���%.2lf\n", income);
		printf ("\t��ĸ�����������˰��%.2lf\n", AT);
		printf ("\t���������˰��������%.2lf,��˰����!\n", income - AT);
	}
}
///////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
void title()
{
	printf ("\t*                �� ������Ϸ ��                *\n");
	printf ("\t================================================\n");
	printf ("\t������Ʒ�ļ۸񣬾͹�˭���У��۸���1��1000֮��,\n");
	printf ("\t------------------------------------------------\n");
}

void guessnum()
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
		printf ("\t�����ȥ�����������ˡ�o(��_��)o ����~\n\n");
	}
	/*��ʱ��Ϊ���ӵ������*/
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
//////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////
void grade()
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
///////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
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

void hannuota()
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
///////////////////////////////////////////////////////////////////
