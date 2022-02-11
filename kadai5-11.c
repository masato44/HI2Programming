#include<stdio.h>
int main(void)
{
	int i,j,x[4][2],y;
	double z,a=0,b=0;

	for(i=1;i<=4;i++){
		for(j=0;j<2;j++){
			if(j==0)
				printf("No.%dの国語の点数は:",i);
			else
				printf("No.%dの数学の点数は:",i);
			scanf("%d",&x[i-1][j]);
		}
	}

	puts("      国語 数学 合計 平均");
	for(i=1;i<=4;i++){
		y=x[i-1][0]+x[i-1][1];
		z=y/2.0;
		printf("No. %d%5d%5d%5d%5.1f\n",i,x[i-1][0],x[i-1][1],y,z);
		a+=x[i-1][0];
		b+=x[i-1][1];
	}

	printf("合計:%5.0f%5.0f\n",a,b);
	printf("平均:%5.1f%5.1f\n",a/4.0,b/4.0);

	return 0;
}
