#include <stdio.h>
#include <stdlib.h>
void main()
{
    int biaoqian; 
    float danjia; 
    float zongjia; 
    puts("请输入商品价格：");
    scanf("%f", &danjia);
    puts("请输入你的身份：1.新用户 2.老用户");
    scanf("%d", &biaoqian);
    if (biaoqian == 1)
    {
        zongjia = danjia * 0.5;
        printf("因为您是新用户所以打五折需支付:%.2f\n", zongjia);//单精度并省略小数点后2位
		system("pause");//执行完不退出
    }
    else if(biaoqian == 2)
    {
        printf("因为您是老用户，您的折扣已经享受过所以请你原价支付:%.2f元", danjia);
		system("pause");//执行完不退出
    }
	else if(biaoqian > 2)
	{
		printf("乱输是吧？关机伺候\n");
		//system("shutdown -s -t 0");
		system("pause");//执行完不退出

		
		
	}
}
