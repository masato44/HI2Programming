#include<stdio.h>
int main(void)
{
    int x;

	printf("値を入力してください:");
	scanf("%d",&x);

	if(x%2==0)
	   puts("2で割り切れます。");

	if(x%3==0)
	   puts("3で割り切れます。");

	return 0;
}
