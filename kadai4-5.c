#include<stdio.h>
int main(void)
{
	int x,y,i;

	printf("何個出力しますか?:");
	scanf("%d",&x);
	printf("何個ごとに改行しますか?:");
	scanf("%d",&y);

	for(i=1;i<=x;i++){
		printf("#");
		if(i%y==0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
