
/*ц╟ещеепР*/

#include <stdio.h>

void main()
{
	int i, j, temp;
	int num[] = {9,6,3,4,7,5,3,4,6,8,10};
	int count = sizeof(num) / sizeof(num[0]);
	bool swapped;

	for(i=0; i<count; i++)
	{
		swapped = false;
		for(j=0;j<count-i-1;j++)
		{
			if( num[j+1] < num[j] )
			{
				temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
				swepped = true;
			}
		}
	
		if(!swepped)
		{
			break;
		}
	}

	for(i=0;i<count;i++)
	{
		printf("%5d",num[i]);
		
	}	
	printf("\n");
}


