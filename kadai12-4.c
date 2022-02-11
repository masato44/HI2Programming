#include <stdio.h>
struct point {
	int x;
	int y;
};

void xyswap(struct point *p) {
	int a;
	a=p->x;
	p->x=p->y;
	p->y=a;
}

int main(void) {
	struct point pt;
	printf("点:");
	scanf("%d,%d",&pt.x,&pt.y);
	printf("(%d,%d)\n",pt.x,pt.y);
	xyswap(&pt);
	printf("xとyを入れ替えます\n");
	printf("(%d,%d)\n",pt.x,pt.y);
	
	return 0;
}
