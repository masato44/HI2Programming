#include<stdio.h>
int main(void)
{
	int x;

	printf("10進数の整数を入力してください：");
	scanf("%d",&x);

	printf("10進数の%dは8進数で%o,16進数で%Xです。\n",x,x,x);

	return 0;
}
