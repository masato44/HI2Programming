#include<stdio.h>
int main(void)
{
    int x;

	printf("月を入力してください:");
	scanf("%d",&x);

	switch(x){
	case 1 :
	case 3 :
	case 5 :
	case 7 :
	case 8 :
	case 10:
	case 12:
	  printf("%d月は31日までです.\n",x);
	break;
	case 4 :
	case 6 :
	case 9 :
	case 11:
	  printf("%d月は30日までです.\n",x);
	break;
	case 2 :
	  printf("%d月は28日までです.\n",x);
	break;
	default:
	  printf("そのような月はありません.\n");
	}

	return 0;
}
