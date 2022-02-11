#include<stdio.h>
#define NUMBER 5
int main(void)
{
	int i,x[NUMBER];

	puts("値を5個入力してください。");
	for(i=0;i<NUMBER;i++){
		scanf("%d",&x[i]);
	}
	puts("逆順に表示します。");
	for(i=NUMBER-1;i>=0;i--)
		printf("%d\n",x[i]);

	return 0;
}
