#include <stdio.h>
#include <stdlib.h>
void main()
{
    int biaoqian; 
    float danjia; 
    float zongjia; 
    puts("��������Ʒ�۸�");
    scanf("%f", &danjia);
    puts("�����������ݣ�1.���û� 2.���û�");
    scanf("%d", &biaoqian);
    if (biaoqian == 1)
    {
        zongjia = danjia * 0.5;
        printf("��Ϊ�������û����Դ�������֧��:%.2f\n", zongjia);//�����Ȳ�ʡ��С�����2λ
		system("pause");//ִ���겻�˳�
    }
    else if(biaoqian == 2)
    {
        printf("��Ϊ�������û��������ۿ��Ѿ����ܹ���������ԭ��֧��:%.2fԪ", danjia);
		system("pause");//ִ���겻�˳�
    }
	else if(biaoqian > 2)
	{
		printf("�����ǰɣ��ػ��ź�\n");
		//system("shutdown -s -t 0");
		system("pause");//ִ���겻�˳�

		
		
	}
}
