#include <stdio.h>
int main(void) {
	int x[] = {1, 3, 0, 10, 50, 100, -1};
	int *p=x,y=0;
	while(*p>=0){
		y=y+*p;
		p++;
	}
	printf("%d\n",y);
	return 0;
}
