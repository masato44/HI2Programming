#include<stdio.h>
int main(void)
{
	int a[5]={1,-3,15,200,-20};
	int i;

	for(i=0;i<5;i++)
		a[i]=a[i]*3;
	printf("aの各要素の値:");
	for(i=0;i<5;i++)
		printf("  %d",a[i]);
	
	printf("\n");

	return 0;
}
