#include <stdio.h>

void main()
{
	double tag=0, origin, income, taxable, AT;

	printf ("\t**********************************************\n");
	printf ("\t\t      个人所得税计算系统\n");
	printf ("\t**********************************************\n");

	printf ("请输入你的月工资数<以元为单位>：");
	scanf  ("%lf", &income);

	printf ("请输入当地的个税起征点 （如果不知道就百度一下）：");
	scanf  ("%lf", &origin);
    /*应纳税所得额(计税工资)=每月收入(薪金)所得 - 不计税部分*/
	taxable = income - origin;
	/*应交所得税 = 应纳税所得额 * 税率 - 速算扣除数*/
	if (income < origin)
	{
		printf ("你要努力赚钱啊，还不够起征点，交啥税啊？\n");
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
		printf ("您的月工资收入总共是%.2lf\n", income);
		printf ("你的个人收入所得税是%.2lf\n", AT);
		printf ("您的收入扣税后所得是%.2lf,纳税光荣!\n", income - AT);
	}
}