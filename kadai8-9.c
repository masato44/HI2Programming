#include <stdio.h>
int getchartype(char c)
{
	if(c>='0'&&c<='9')
		return 1;
	else if(c>='a'&&c<='z')
		return 2;
	else if(c>='A'&&c<='Z')
		return 3;
	else
		return 0;
}

int main(void)
{
	int ch;
	printf("文字を 1つ入力してください: ");
	ch = getchar();
	printf("入力された文字のタイプは %d です。\n", getchartype(ch));
	return 0;
}
