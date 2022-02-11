#include<stdio.h>
int main(void)
{
	int x,y=0;

	printf("整数を入力してください:");
	scanf("%d",&x);
	while(x>0){
		x=x/10;
		y++;
	}

	printf("%d\n",y);

	return 0;
}
