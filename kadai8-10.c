#include<stdio.h>
int main(void)
{
	char c;

	while(1){
		printf("アルファベットの文字を一つ入力してください:");
		scanf(" %c",&c);
		if(c>='a'&&c<='z'){
			printf("%cの大文字は%cです。\n",c,c-32);
			break;
		}
		else if(c>='A'&&c<='Z'){
			printf("%cの小文字は%cです。\n",c,c+32);
			break;
		}
		else
			puts("不正な値です。");
	}

	return 0;
}
