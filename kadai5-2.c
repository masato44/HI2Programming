#include<stdio.h>
int main(void)
{
	double da[]={-2.5,10.8,3.35,11.1,-123.5,11.111},max;
	int i;

	max=da[0];

	for(i=1;i<=5;i++){
		if(max<da[i])
			max=da[i];
	}
	printf("%.6f\n",max);

	return 0;
}
