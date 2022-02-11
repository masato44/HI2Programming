#include<stdio.h>
int main(void)
{
	int x,y;

	printf("整数を入力してください:");
	scanf("%d",&x);
	for(y=0;x>y;y++)
		putchar('#');
		putchar('\n');

	return 0;
}
