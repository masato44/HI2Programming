#include<stdio.h>
int main(void)
{
	int x,y=0,a;
	double z;

	puts("3つの整数を入力してください.");
	for(a=1;a<=5;a++){
		printf("%d番目:",a);
		scanf("%d",&x);

		y=y+x;
	}
	z=y/5.0;

	printf("合計値は%dです.\n",y);
	printf("平均値は%.1fです.\n",z);

	return 0;
}
