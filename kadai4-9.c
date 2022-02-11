#include<stdio.h>
int main(void)
{
	int x,i,j;

	printf("値を入力してください:");
	scanf("%d",&x);

	for(i=1;i<=x;++i){
		printf(" %d",i);
		if(i%3==0){
			putchar('!');
			continue;
		}
		for(j=i;j>0;j=j/10){
			if(j%10==3){
				putchar('!');
				continue;
			}
		}
	}

	putchar('\n');
	return 0;
}
