#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void main(){
	MessageBox(NULL,"ϵͳ�ػ�����ʱ60�룬�˳�������Ч��","��ܰ��ʾ",MB_OK);
	system("shutdown -s -t 60");
	char facher[20];
	puts("****************************���ڼ���������ְ֣�****************************");
	scanf("%s",&facher);
	if(strcmp(facher,"�ְ�") == 0)
	{
		system("shutdown -a");//�����ػ�ָ��
		puts("�ػ��ѳ���");
		MessageBox(NULL,"�ҵĺô����","����",MB_OK);
		
	}else{
		
		MessageBox(NULL,"�������һ�λ��ᣬ����ػ��ź�","����",MB_OK);
		scanf("%s",&facher);
		if(strcmp(facher,"�ְ�") == 0)
		{
		MessageBox(NULL,"�ҵĺô����","����",MB_OK);
		system("shutdown -a");//�����ػ�ָ��
		puts("�ػ��ѳ���");
		}else{
			MessageBox(NULL,"�����ǰɣ����Ը���ػ�","�ػ�",MB_OK);
			system("shutdown -s -t 0");


		}

	
	}
}