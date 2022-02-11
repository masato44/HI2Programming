#include<stdio.h>
int main(void)
{
	int i,a,y,z,x[10];

	printf("何個のデータを入力しますか?(最大10):");
	scanf("%d",&a);

	for(i=0;i<a;i++){
		printf("No.%d:",i+1);
		scanf("%d",&x[i]);
	if(y<x[i])
		y=x[i];
	if(z>x[i])
		z=x[i];
	}

	printf("最大値は%dで、最小値は%dです。\n",y,z);

	return 0;
}
