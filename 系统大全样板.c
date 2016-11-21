#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void surface();        //界面
void statistics();     //某公司年度收入统计
void revenue();       //个人所得税计算系统
void title();		  //猜数游戏标题
void guessnum();	  //猜数游戏
void grade();		  //卡拉OK积分系统
void move();		  //汉诺塔游戏答案告知系统1
void hannuota();	  //汉诺塔游戏答案告知系统2

void main()
{
	int choose;
	char yn;

	do
	{	
		fflush(stdin);          //清空缓冲单元
		system("CLS");	     	//清屏，注意要引用头文件#include <stdlib.h>！
		surface();		//调用界面函数
		scanf ("%d",&choose);
		switch (choose)
		{
			
			case 0:
				do
				{	
					system("CLS");
					statistics();          //调用某公司年度收入统计
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/*)：");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
			break;
			
			case 1:
				do
				{
					system("CLS");
					revenue();                 //调用个人所得税计算系统
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					fflush(stdin);
					printf("\t是否继续使用(y/*)：");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');	
				break;

			case 2:
				do
				{	
					system("CLS");
					guessnum();                //调用猜数游戏
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/*)：");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;

			case 3:
				do
				{	
					system("CLS");
					grade();					//调用卡拉OK积分系统
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/*)：");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;
		
			case 4:
				do
				{	
					system("CLS");
					hannuota();					//调用汉诺塔游戏答案告知系统2
					fflush(stdin);
					printf("\t灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬灬\n");
					printf("\t是否继续使用(y/*)：");
					yn=getchar();
					fflush(stdin);
				}while(yn=='y');
				break;
			
			case 5:
				printf("\t\t      欢迎再次使用!\n");
				break;

			default :
				printf("\t\t  输入有误，请重新输入!\n");
				Sleep(3000);
				break;
		}
	}while(choose != 5);
}

////////////////////////////////////////////////////////////////////////
void surface()
{
	printf("\t\\__________________________________________/   \n");
	printf("\t>>---------------->※<-------------------<<\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t系--统--大--全\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t    |*|_____________________________|*|\n");
	printf("\t    |*|            Y^v^Y            |*|\n");
	printf("\t    |*|-----------------------------|*|\n");
	printf("\t-------------------------------------------\n");
	printf("\t\t=请输入你想进入的系统：=\n");
	printf("\t\t0->年度收入统计系统\n");
	printf("\t\t1->个人收入税计算系统\n");
	printf("\t\t2->猜价格游戏软件系统\n");
	printf("\t\t3->卡拉OK大奖赛评分系统\n");
	printf("\t\t4->汉诺塔游戏答案告知系统\n");
	printf("\t\t5->退出系统\n");
	printf("\t>>-------------$--*^v^*--$-------------<<\n");
	printf("\t  请选择:");
}
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
void statistics()
{
	int i;
	double sum=0, income[12];

	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("\t\t   XXX公司2006年的统计收入\n");
	printf ("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for (i=0; i<12; i++)
	{
		printf ("\t请输入第%2d月的公司收入：", i+1);
		scanf ("%lf", &income[i]);	
		sum+=income[i];
	}
	
	printf ("\tXXX公司2006年的总收入为：%lf\n", sum);
}
////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////
void revenue()
{
	double tag=0, origin, income, taxable, AT;

	printf ("\t**********************************************\n");
	printf ("\t\t      个人所得税计算系统\n");
	printf ("\t**********************************************\n");

	printf ("\t请输入你的月工资数<以元为单位>：");
	scanf  ("%lf", &income);

	printf ("\t请输入当地的个税起征点 （如果不知道就百度一下）：");
	scanf  ("%lf", &origin);
    /*应纳税所得额(计税工资)=每月收入(薪金)所得 - 不计税部分*/
	taxable = income - origin;
	/*应交所得税 = 应纳税所得额 * 税率 - 速算扣除数*/
	if (income < origin)
	{
		printf ("\t你要努力赚钱啊，还不够起征点，交啥税啊？\n");
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
		printf ("\t您的月工资收入总共是%.2lf\n", income);
		printf ("\t你的个人收入所得税是%.2lf\n", AT);
		printf ("\t您的收入扣税后所得是%.2lf,纳税光荣!\n", income - AT);
	}
}
///////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
void title()
{
	printf ("\t*                【 猜数游戏 】                *\n");
	printf ("\t================================================\n");
	printf ("\t猜中物品的价格，就归谁所有，价格在1到1000之间,\n");
	printf ("\t------------------------------------------------\n");
}

void guessnum()
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
		printf ("\t你该下去问问周总理了。o(∩_∩)o 哈哈~\n\n");
	}
	/*以时间为种子的随机数*/
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
//////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////
void grade()
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
	printf ("========汉诺塔游戏答案告知系统=======\n");
	printf ("=====================================\n");
	printf ("请输入汉诺塔中碟子的数量：");
	scanf ("%d", &n);
	printf ("移动这%2d个碟子的步骤如下：\n",n);
	move(n, 'a', 'b', 'c');
	printf ("其中a，b，c为汉诺塔中三根柱子\n");
}
///////////////////////////////////////////////////////////////////
