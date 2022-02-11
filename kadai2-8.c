#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int r1,r2,r3;
	srand((unsigned)time(NULL));
	r1=rand()%9+1;
	r2=rand()%9+1;
	r3=rand()%9+1;
	printf("%d %d %d\n",r1,r2,r3);

    if(r1==r2&&r1==r2&&r2==r3)
       printf("BINGO!!\n");
    else if(r1==r2||r1==r3||r2==r3)
       printf("One pair!\n");
	else
	   printf("No pair..\n");

	return 0;
}
