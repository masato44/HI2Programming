#include <stdio.h>
void swaploc(int *v, int n1, int n2) {
	int y;
	y=*(v+n1);
	*(v+n1)=*(v+n2);
	*(v+n2)=y;
}
int main(void) {
	int x[] = {5, 10, 15, 100, 500};
	int i, n1, n2, xlen;

	xlen = sizeof(x) / sizeof(x[0]); 
	for(i=0; i<xlen; i++)
		printf("No. %d: %d\n", i, x[i]);

	printf("何番と何番を交換しますか？: ");
	scanf("%d %d", &n1, &n2);
	swaploc(x, n1, n2);

	for(i=0; i<xlen; i++)
		printf("No. %d: %d\n", i, x[i]);
	return 0;
}
