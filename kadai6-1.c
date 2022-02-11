#include<stdio.h>
#define SIZE 9
int main(void)
{
	int i,a[SIZE];

	for(i=0;i<SIZE;i++){
		a[i]=i+1;
		printf("%3d",a[i]);
	}
	putchar('\n');

	return 0;
}
