#include<stdio.h>
int main(void)
{
	int x;

	printf("16進数の整数を入力してください:");
	scanf("%X",&x);

	printf("16進数の%Xは10進数で%dです。\n",x,x);

	return 0;
}
