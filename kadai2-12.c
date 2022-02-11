#include<stdio.h>
int main(void)
{
    int x;

	printf("何階ですか?:");
	scanf("%d",&x);

	switch (x){
	case 1 :
	  printf("%d階はフロントです。\n",x);
	  break;
	case 2 :
	case 3 :
	case 4 :
	  printf("%d階は客室です。\n",x);
	  break;
	default:  
	  printf("%d階はありません。\n",x);
	  break;
	}

	return 0;
}
