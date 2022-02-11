#include<stdio.h>
int main(void)
{
	int x,y;

	do{
		printf("整数を入力してください:");
		scanf("%d",&x);
	
		if(x==0)
			puts("その数は0です。");
		else if(x>0)
			puts("その数は正です。");
		else
			puts("その数は負です。");

		printf("続けますか?(Yes:0/No:9):");
		scanf("%d",&y);
	}while(y==0);

	return 0;
}
