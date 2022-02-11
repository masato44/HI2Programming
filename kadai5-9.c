#include<stdio.h>
int main(void)
{
	int i,j,a[5][3],x;

	puts("各要素の値を確認します");

	for(i=0;i<5;i++){
		x=i+1;
		for(j=0;j<3;j++){
			a[i][j]=x;
			x=x*(i+1);
		}
	}

	for(i=0;i<5;i++){
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		putchar('\n');
	}
	return 0;
}
