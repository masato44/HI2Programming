#include<stdio.h>
int main(void)
{
	int x,i,j;

	printf("辺の長さ:");
	scanf("%d",&x);

	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(i<=j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
