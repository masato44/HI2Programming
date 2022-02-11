#include <stdio.h>
int topower(int *p,int y){
	int i,x=*p;
	for(i=1;i<y;i++)
		*p=*p*x;
}
int main(void) {
	int x, y;
	printf("2つの整数値を入力してください: ");
	scanf("%d %d", &x, &y);
	topower(&x, y);
	printf("%d\n", x);
	return 0;
}
