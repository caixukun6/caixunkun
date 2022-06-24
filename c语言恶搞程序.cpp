#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void main(){
	MessageBox(NULL,"系统关机倒计时60秒，退出程序无效！","温馨提示",MB_OK);
	system("shutdown -s -t 60");
	char facher[20];
	puts("****************************请在键盘上输入爸爸！****************************");
	scanf("%s",&facher);
	if(strcmp(facher,"爸爸") == 0)
	{
		system("shutdown -a");//撤销关机指令
		puts("关机已撤销");
		MessageBox(NULL,"我的好大儿！","弹窗",MB_OK);
		
	}else{
		
		MessageBox(NULL,"给你最后一次机会，否则关机伺候","弹窗",MB_OK);
		scanf("%s",&facher);
		if(strcmp(facher,"爸爸") == 0)
		{
		MessageBox(NULL,"我的好大儿！","弹窗",MB_OK);
		system("shutdown -a");//撤销关机指令
		puts("关机已撤销");
		}else{
			MessageBox(NULL,"不叫是吧？电脑给你关机","关机",MB_OK);
			system("shutdown -s -t 0");


		}

	
	}
}