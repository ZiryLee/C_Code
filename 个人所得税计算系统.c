#include <stdio.h>

void main()
{
	double tag=0, origin, income, taxable, AT;

	printf ("\t**********************************************\n");
	printf ("\t\t      ��������˰����ϵͳ\n");
	printf ("\t**********************************************\n");

	printf ("����������¹�����<��ԪΪ��λ>��");
	scanf  ("%lf", &income);

	printf ("�����뵱�صĸ�˰������ �������֪���Ͱٶ�һ�£���");
	scanf  ("%lf", &origin);
    /*Ӧ��˰���ö�(��˰����)=ÿ������(н��)���� - ����˰����*/
	taxable = income - origin;
	/*Ӧ������˰ = Ӧ��˰���ö� * ˰�� - ����۳���*/
	if (income < origin)
	{
		printf ("��ҪŬ��׬Ǯ���������������㣬��ɶ˰����\n");
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
		printf ("�����¹��������ܹ���%.2lf\n", income);
		printf ("��ĸ�����������˰��%.2lf\n", AT);
		printf ("���������˰��������%.2lf,��˰����!\n", income - AT);
	}
}