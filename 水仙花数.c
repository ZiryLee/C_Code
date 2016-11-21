/*问题：打印输出水仙花数。水仙花数就是指一个三位数，它每位数的立方相加等于它本身，如153=1的立方+5的立方+3的立方。*/




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