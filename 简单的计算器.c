#include<stdio.h>
#include<math.h>
void main()
{
	int data1,data2;
	char op;
         printf("-----------------�򵥵ļ�����-----------------\n");
         printf("��������(��1+2<CR>):");
         scanf("%d%c%d",&data1,&op,&data2);
	switch(op)
	{	case'+':
			printf("-------------�����ʾ---------------\n");
			printf("%d+%d=%d\n",data1,data2,data1+data2);
			printf("------------------------------------\n");
			break;
		case'-':
			printf("-------------�����ʾ---------------\n");
			printf("%d-%d=%d\n",data1,data2,data1-data2);
			printf("------------------------------------\n");
			break;
		case'*':    
			printf("-------------�����ʾ---------------\n");
			printf("%d*%d=%d\n",data1,data2,data1*data2);
			printf("------------------------------------\n");
			break;
		case'/': 
			if(data2==0)
			{	printf("-------------�����ʾ---------------\n");
				printf("��������Ϊ��!\n");
				printf("------------------------------------\n");
			}
        else 
        {	printf("-------------�����ʾ---------------\n");
			printf("%d/%d=%d\n",data1,data2,data1/data2);
			printf("------------------------------------\n");
			break;
		}
		default:
			printf("-------------�����ʾ---------------\n");
			printf("�������㷶Χ��\n");
			printf("------------------------------------\n");
	}
} 