#include<stdio.h>
int main(void)
{
	int x,y,i,n=0;

	printf("何の倍数をスキップしますか?:");
	scanf("%d",&x);

	for(i=1;i<=10;i++){
		if(i%x!=0){
			printf(" %d ",i);
			n++;
		}
	}
	printf("\n");
	printf("全部で%d個の数値を出力しました。\n",n);
	return 0;
}
