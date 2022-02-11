#include<stdio.h>
int main(void)
{
    int a,b,c;

	puts("三つの整数値を入力してください。");
	printf("整数1:"); scanf("%d",&a);
	printf("整数2:"); scanf("%d",&b);
	printf("整数3:"); scanf("%d",&c);

	if(a<b&&a<c)
	   puts("最小値は整数1です。");
	else if(b<a&&b<c)
	   puts("最小値は整数2です。");
	else
	   puts("最小値は整数3です。");
	 
	return 0;
}
