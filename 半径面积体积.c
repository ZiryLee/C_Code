#include<stdio.h>
#define PI 3.14159
void main()
{
	double r,h,cl,cs,cvz;
	printf("请输入地面圆的半径：");
	scanf("%lf",&r);
	printf("请输入圆柱的高：");
	scanf("%lf",&h);
	cl=2*r*PI;
	cs=2*PI*r*r;
	cvz=cs*h;
	printf("\n=========================\n\n");
	printf("地面圆的周长为:%lf\n",cl);
	printf("地面圆的面积为:%lf\n",cs);
	printf("圆柱的体积为:%lf\n",cvz);
		
}


//函数法

#include<stdio.h>
#define PI 3.14159
void quizhi(double r,double h)
{	double cl,cs,cvz;
	cl=2*r*PI;
	cs=2*PI*r*r;
	cvz=cs*h;
	printf("\n=========================\n\n");
	printf("地面圆的周长为:%lf\n",cl);
	printf("地面圆的面积为:%lf\n",cs);
	printf("圆柱的体积为:%lf\n",cvz);
}
void main()
{
	double r,h;
	printf("请输入地面圆的半径：");
	scanf("%lf",&r);
	printf("请输入圆柱的高：");
	scanf("%lf",&h);
	quizhi(r,h);			
}
