#include<stdio.h>
int main(void)
{
    int x=0,i=1,a=0;

	while(x<=300){
		printf("%d人目の体重は:",i);
		scanf("%d",&a);
		i=i+1;
		x=x+a;
	}

	printf("合計重量が%dkgとなり%dkgオーバーしました.\n",x,x-300);
	printf("%d人目の人は乗ることができません.\n",i-1);

	return 0;
}
