#include<stdio.h>
#define PI 3.14159
void main()
{
	double r,h,cl,cs,cvz;
	printf("���������Բ�İ뾶��");
	scanf("%lf",&r);
	printf("������Բ���ĸߣ�");
	scanf("%lf",&h);
	cl=2*r*PI;
	cs=2*PI*r*r;
	cvz=cs*h;
	printf("\n=========================\n\n");
	printf("����Բ���ܳ�Ϊ:%lf\n",cl);
	printf("����Բ�����Ϊ:%lf\n",cs);
	printf("Բ�������Ϊ:%lf\n",cvz);
		
}


//������

#include<stdio.h>
#define PI 3.14159
void quizhi(double r,double h)
{	double cl,cs,cvz;
	cl=2*r*PI;
	cs=2*PI*r*r;
	cvz=cs*h;
	printf("\n=========================\n\n");
	printf("����Բ���ܳ�Ϊ:%lf\n",cl);
	printf("����Բ�����Ϊ:%lf\n",cs);
	printf("Բ�������Ϊ:%lf\n",cvz);
}
void main()
{
	double r,h;
	printf("���������Բ�İ뾶��");
	scanf("%lf",&r);
	printf("������Բ���ĸߣ�");
	scanf("%lf",&h);
	quizhi(r,h);			
}
