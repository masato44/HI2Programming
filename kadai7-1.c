#include<stdio.h>

int factrial(int n){
	int i,x=1,y=n;

	for(i=0;i<n;i++){
		x=x*y;
		y=y-1;
	}
	
	return x;
}

int main(void){
	int x;

	printf("整数を入力してください:");
	scanf("%d",&x);
	printf("%dの階乗は%dです。\n",x,factrial(x));
	
	return 0;
}
