#include<stdio.h>
int main(void)
{
	int x,y=1,i;

	printf("整数を入力してください:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		y=y*i;
		printf("%d",i);
		if(i<x)
			printf(" * ");
	}
	printf(" = %d\n",y);
	return 0;
}
