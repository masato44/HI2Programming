#include<stdio.h>
int main(void)
{
	int i,j,x[10][10];

	puts("各要素の確認をします");

	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if(i==j)
				x[i][j]=i;
			else
				x[i][j]=0;
		}
	}
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++)
			printf("%5d",x[i][j]);
		putchar('\n');
	}

	return 0;
}
