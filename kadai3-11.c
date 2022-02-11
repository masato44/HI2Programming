#include<stdio.h>
int main(void)
{
	int x,y=0;

	do{
		printf("1以上20以下の整数を入力してください:");
		scanf("%d",&x);
	}while(x<1||x>20);

	while(x!=y){
		putchar('*');
		y=y+1;
		
		if(y%5==0){
		printf("\n");
		}
	}
	printf("\n");

	return 0;
}
