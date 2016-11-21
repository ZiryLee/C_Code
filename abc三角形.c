//    a
//   bbb
//  ccccc
// ddddddd

#include<stdio.h>
int main()
{
int i,l,n,k;
char ch;
for(i=1;i<=5;i++)
{
	ch='a'+i-1;
	n=2*i-1;
	for(l=5;l>=i;l--)
		printf(" ");	
	for(k=1;k<=n;k++)
		putchar(ch);
	printf("\n");
}
	return 0;
}