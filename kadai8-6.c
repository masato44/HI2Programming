#include<stdio.h>
#include<limits.h>
int main(void){
	int size;
	size = sizeof(int);
	printf("この処理系ではint 型は%d バイトで表現されます。\n", size);
	printf("この処理系でのint 型の最小値は%d、最大値は%d です。\n",INT_MIN,INT_MAX);
	printf("この処理系でのunsigned int 型の最小値は 0，最大値は%u です。\n",UINT_MAX);
	return 0;
}
