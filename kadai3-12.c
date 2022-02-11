#include<stdio.h>
int main(void)
{
	int x=0,y,z;

	printf("整数を入力してください:");
	scanf("%d",&x);

	y=x;
	z=x;

	if(x<0)
		puts("有効な値が1つも入力されていません.");

	else{
		while(x>=0){
		printf("整数を入力してください:");
		scanf("%d",&x);

		if(x>z)
			z=x;
		if(x<y&&x>0)
			y=x;
		}

		printf("最大値は%d,最小値は%dです.\n",z,y);
	}

	return 0;
}
