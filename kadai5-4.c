#include<stdio.h>
#define NUMBER 4
int main(void)
{
	int i,x[NUMBER];

	printf("値を%d個入力してください。\n",NUMBER);

	for(i=0;i<NUMBER;i++)
		scanf("%d",&x[i]);
	for(i=0;i<NUMBER;i++){
		if(i==0)
			printf("{%d",x[i]);
		else if(i==NUMBER-1)
			printf(",%d}",x[i]);
		else
			printf(",%d",x[i]);
	}
	putchar('\n');

	return 0;
}
