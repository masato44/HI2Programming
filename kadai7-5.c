#include<stdio.h>

int min3(int a,int b,int c){
	int x=a;

	if(x>b)
		x=b;
	if(x>c)
		x=c;
	
	return x;
}

int main(void){
	int x,y,z;
	
	puts("3つの整数を入力してください。");
	printf("整数1:");
	scanf("%d",&x);
	printf("整数2:");
	scanf("%d",&y);
	printf("整数3:");
	scanf("%d",&z);

	printf("最小値は%dです。\n",min3(x,y,z));

	return 0;
}
