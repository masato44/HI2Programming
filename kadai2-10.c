#include<stdio.h>
int main(void)
{
    int month;

	printf("何月ですか?:");
	scanf("%d",&month);

	if(month==3||month==4||month==5)
	   puts("春ですね。");
	else if(month==6||month==7||month==8)
	   puts("夏ですね。");
	else if(month==9||month==10||month==11)
	   puts("秋ですね。");
	else if(month==12||month==1||month==2)
	   puts("冬ですね。");

	return 0;
}
