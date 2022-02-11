#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 9
int main(void)
{
	int x,i,h,j,a[SIZE];
	for(i=0;i<SIZE;i++)
		a[i]=i+1;

	srand((unsigned)time(NULL));

	for(i=SIZE-1;i>0;i--){
		j=rand()%SIZE+1;
		h=a[j-1];
		a[j-1]=a[i];
		a[i]=h;
	}

	for(i=1;i<SIZE;i++)
		printf("%3d",a[i]);
	putchar('\n');

	while(1){
		printf("欠けている数字はどれ?:");
		scanf("%d",&x);
		if(a[0]==x){
			printf("正解!\n");
			break;
		}else{
			printf("不正解\n");
		}
	}

	return 0;
}
