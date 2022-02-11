#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point pt1, pt2;
	double a,b;
	printf("点 1(x, y): ");
	scanf("%d,%d",&pt1.x,&pt1.y);
	printf("点 2(x, y): ");
	scanf("%d,%d",&pt2.x,&pt2.y);
	a=pow(pt1.x-pt2.x,2)+pow(pt1.y-pt2.y,2);
	b=sqrt(a);
	printf("2点間の距離は%.2fです.\n",b);

	return 0;
}
