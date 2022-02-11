#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 9
int main(void)
{
	int i,h,j,a[SIZE];
	for(i=0;i<SIZE;i++)
		a[i]=i+1;

	srand((unsigned)time(NULL));

	for(i=SIZE-1;i>0;i--){
		j=rand()%SIZE+1;
		h=a[j-1];
		a[j-1]=a[i];
		a[i]=h;
	}

	for(i=0;i<SIZE;i++)
		printf("%3d",a[i]);
	putchar('\n');

	return 0;
}
