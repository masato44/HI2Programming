#include<stdio.h>
int main(void)
{
	int ch,n;

	puts("文字を入力してください。");

	while(1){
		ch=getchar();
		if(ch>='0'&&ch<='9')
			n++;
		if(ch==EOF)
			break;
	}

	printf("入力された文字の中に、数字は%d個含まれています。\n",n);

	return 0;
}
