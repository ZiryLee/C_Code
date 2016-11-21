
//选择排序


#include <stdio.h>
void main()
{
	/*min index 最小标签。count计数。*/ 
	int a[]={9,4,7,68,5,23,45,89,54,78,64,32,98,15,0,2,56,78,99};
	int minIndex,tmp,count;
	count=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<count;i++)
	{
		minIndex=i;
		for(int j=i+1;j<count;j++)
		{
			if(a[minIndex]>a[j])
				minIndex=j;
		}
		if(minIndex!=i)
		{
			tmp=a[i];
			a[i]=a[minIndex];
			a[minIndex]=tmp;
		}
	}
	for(int k=0;k<count;k++)
	{
		printf("%4d",a[k]);
	}
	printf("\n");
}