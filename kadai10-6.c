#include <stdio.h>
double calcavg(int *v, int n) {
	int i; double x=*v;
	for(i=1;i<n;i++)
		x=x+*(v+i);
	x=x/n;
	return x;
}
	int main(void) {
	int x[] = {10, 12, 7, 20};
	printf("%.2f\n", calcavg(x, 4));
	return 0;
}
