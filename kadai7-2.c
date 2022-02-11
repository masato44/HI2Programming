#include<stdio.h>

void hello(int n){
	int i;
	
	for(i=0;i<n;i++)
		puts("Hello!");
}
int main(void){
	int x;
	
	printf("How many times? :");
	scanf("%d",&x);
	hello(x);

	return 0;
}
