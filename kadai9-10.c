#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[50];
	printf("文字列を入力してください:");
	scanf("%s",s);
	printf("文字列%sの長さは%dです。\n",s,strlen(s));
	return 0;
}
