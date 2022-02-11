#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point pts[4];
	double a,b;
	int i,c,d;

	for(i=0;i<4;i++){
		printf("点 %d(x, y): ",i);
		scanf("%d,%d",&pts[i].x,&pts[i].y);
	}

	printf("2つの点を指定してください:");
	scanf("%d %d",&c,&d);

	a=pow(pts[c].x-pts[d].x,2)+pow(pts[c].y-pts[d].y,2);
	b=sqrt(a);
	printf("点%dと点%dの間の距離は%.2fです.\n",c,d,b);

	return 0;
}
