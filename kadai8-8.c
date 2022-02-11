#include<stdio.h>
char getsignchar(int n)
{
	if(n>0)
		return 'P';
	else if(n==0)
		return 'Z';
	else
		return 'N';
}

int main(void)
{
	int x;
	scanf("%d",&x);
	putchar(getsignchar(x));
	putchar('\n');
	
	return 0;
}
