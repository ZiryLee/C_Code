/*���⣺��ӡ���ˮ�ɻ�����ˮ�ɻ�������ָһ����λ������ÿλ����������ӵ�����������153=1������+5������+3��������*/




#include <stdio.h>
void main()
{   
	int i, n = 100, ih, it, io, inum[900];

	for (i=0; i<=899; i++)
	{
		inum[i] = n++;
	}
	
	for (i=0; i<=899; i++)
	{
		ih = (int)(inum[i] / 100);
		it = ((int)(inum[i] / 10)) - (ih * 10);
		io = (inum[i] % 10);
		if (( (ih*ih*ih) + (it*it*it) + (io*io*io) ) == inum[i])
		{
			printf("%d   ",inum[i]);
		}
	}
	printf ("\n");
	
}