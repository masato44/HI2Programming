#include<stdio.h>

double power(double x,int n){
	int i;double y=1;

	for(i=0;i<n;i++)
		y=y*x;
	
	return y;
}

int main(void){
	double a;int b;

	puts("実数xと整数nを入力してください。");
	printf("実数x:");
	scanf("%lf",&a);
	printf("整数n:");
	scanf("%d",&b);
	printf("%fの%d乗は、%fです。",a,b,power(a,b));

	return 0;
}
