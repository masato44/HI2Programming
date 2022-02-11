#include<stdio.h>
int main(void)
{
	int i,x,y=1;

	printf("正の整数を入力してください:");
	scanf("%d",&x);

	for(i=0;i<x;i++){
		printf("%d",y);
		y++;
		if(y==10)
			y=0;
	}

	return 0;
}
