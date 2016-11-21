//简单四舍五入程序
#include <stdio.h>
void main()
{
	double a;			//定义
	printf("请输入一个数：");	//输出提示语
	scanf("%lf",&a);		//输入实数     【N】，地址符！！！！    
	printf("四舍五入前：%lf\n",a);	//输出用户输入的数
	a=a*100;											
	a+=0.5;
	a=(int)(a);			//取整
	a=a/100;
	printf("保留两位小数，四舍五入之后：%.2lf\n",a);

}
 



//循环四舍五入
#include <stdio.h>
void main()
{
	double a;     //定义
	while(1){
	printf("请输入一个数：");							//输出提示语
	scanf("%lf",&a);									//输入实数     【N】，地址符！！！！    
	printf("四舍五入前%lf\n",a);						//输出用户输入的数
	a=a*100;											
	a+=0.5;
	a=(int)(a);											//取整
	a=a/100;
	printf("四舍五入之后(保留两位小数)%.2lf\n",a);
	}
}