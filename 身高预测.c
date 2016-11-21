#include <stdio.h>
void main()
{
	double fa,mo,my=0,s1=0,d1=0;
	char s,d,mw;
	printf("===========身高预测==========\n");
	printf ("您父亲的身高(cm)：");
	scanf (" %lf" ,&fa);
	printf ("您母亲的身高(cm)：");
	scanf (" %lf",&mo);
	printf ("喜不喜欢运动(y/n):");
	scanf (" %c",&s);
	printf("有木有良好的饮食习惯(y/n)：");
	scanf (" %c",&d);
	printf("您的性别男m 女w ：(m/w)：");
	scanf (" %c",&mw);
	printf("==============================\n");
	switch (mw)
	{
		case 'm' :
			my=(fa+mo)*0.54;
			if (s=='y')
				s1=my*0.02;
			if (d=='y')
				d1=my*0.015;
			my=my+s1+d1;
			printf("您的预测身高为%6.2lfcm\n",my);
			break;
		case 'w' :
			my=(fa*0.923+mo)/2;
			if (s=='y')
				s1=my*0.02;
			if (d=='y')
				d1=my*0.015;
			my=my+s1+d1;
			printf("您的预测身高为%6.2lfcm\n",my);
	}
}