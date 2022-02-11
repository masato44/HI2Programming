#include<stdio.h>
int main(void)
{
    int x=7,i=1;

	while(x<=100){
	    i=i+1;
		printf("%d\n",x);
		x=i*7;
	}
	return 0;
}
