#include<stdio.h>

int factorial(int n){
	int i,x=1;

	for(i=1;i<=n;i++){
		x=x*i;
	}

	return x;
}

int factsum(int n){
	int i,a=0;

	for(i=1;i<=n;i++)
		a=a+factorial(i);
		
	return a;
}

int main(void){
	int x;

	printf("Input n:");
	scanf("%d",&x);
	printf("%d\n",factsum(x));

	return 0;
}
