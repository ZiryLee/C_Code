#include <stdio.h>
void main()
{
	double fa,mo,my=0,s1=0,d1=0;
	char s,d,mw;
	printf("===========���Ԥ��==========\n");
	printf ("�����׵����(cm)��");
	scanf (" %lf" ,&fa);
	printf ("��ĸ�׵����(cm)��");
	scanf (" %lf",&mo);
	printf ("ϲ��ϲ���˶�(y/n):");
	scanf (" %c",&s);
	printf("��ľ�����õ���ʳϰ��(y/n)��");
	scanf (" %c",&d);
	printf("�����Ա���m Ůw ��(m/w)��");
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
			printf("����Ԥ�����Ϊ%6.2lfcm\n",my);
			break;
		case 'w' :
			my=(fa*0.923+mo)/2;
			if (s=='y')
				s1=my*0.02;
			if (d=='y')
				d1=my*0.015;
			my=my+s1+d1;
			printf("����Ԥ�����Ϊ%6.2lfcm\n",my);
	}
}