#include<stdio.h>
int main(void)
{
    int x,i=1;

	printf("正の整数:");
	scanf("%d",&x);
	
	while(i<=x){
	    if(i%2==1)
	   		 printf("+");
	    else
	    	 printf("-"); 

		i=i+1;
	}


	return 0;
}
