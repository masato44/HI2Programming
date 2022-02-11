#include<stdio.h>

int abs(int x);
int diff(int x1,int x2);

int main(void)
{
	printf("%d\n",abs(8));
	printf("%d\n",diff(10,5));
	return 0;
}

int abs(int x)
{
	if(x<0)
		return -x;
	else
		return x;
}

int diff(int x1,int x2)
{
	int d=x1-x2;
	return abs(d);
}
