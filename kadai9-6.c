#include <stdio.h>
int str_char(const char s[], int c)
{
	int i=0;
	while(s[i]){
		if(s[i]==c)
			return i;
		i++;
	}
	return -1;
}
int main(void)
{
	char s[80], c;
	printf("文字列を入力してください:");
	scanf("%s",s);
	printf("探したい文字を入力してください:");
	scanf(" %c",&c);
	if(str_char(s,c)>0)
		printf("%sの中に%cが最初に出現する添字は%dです。\n",s,c,str_char(s,c));
	if(str_char(s,c)==-1)
		puts("その文字は含まれていません。");

	return 0;
}
