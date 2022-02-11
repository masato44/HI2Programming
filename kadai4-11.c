#include<stdio.h>
int main(void)
{
	int x,i,j,k;

	puts("下向きのピラミッドを作ります。");
	printf("何段ですか:");
	scanf("%d",&x);

	k=2*x-1;

	for(i=1;i<=x;i++){
		for(j=1;j<=k;j++){
			if(j<i)
				putchar(' ');
			else
				printf("%d",i%10);
		}
		putchar('\n');
		k--;
	}

	return 0;
}
