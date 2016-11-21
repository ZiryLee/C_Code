#include<stdio.h>
#include<math.h>
void main()
{
	int data1,data2;
	char op;
         printf("-----------------简单的计算器-----------------\n");
         printf("请输入表达(如1+2<CR>):");
         scanf("%d%c%d",&data1,&op,&data2);
	switch(op)
	{	case'+':
			printf("-------------结果显示---------------\n");
			printf("%d+%d=%d\n",data1,data2,data1+data2);
			printf("------------------------------------\n");
			break;
		case'-':
			printf("-------------结果显示---------------\n");
			printf("%d-%d=%d\n",data1,data2,data1-data2);
			printf("------------------------------------\n");
			break;
		case'*':    
			printf("-------------结果显示---------------\n");
			printf("%d*%d=%d\n",data1,data2,data1*data2);
			printf("------------------------------------\n");
			break;
		case'/': 
			if(data2==0)
			{	printf("-------------结果显示---------------\n");
				printf("除数不能为零!\n");
				printf("------------------------------------\n");
			}
        else 
        {	printf("-------------结果显示---------------\n");
			printf("%d/%d=%d\n",data1,data2,data1/data2);
			printf("------------------------------------\n");
			break;
		}
		default:
			printf("-------------结果显示---------------\n");
			printf("超出计算范围！\n");
			printf("------------------------------------\n");
	}
} 