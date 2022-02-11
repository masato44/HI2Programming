#include<stdio.h>
int str_chnum(const char s[],int c)
{
	int i=0,x=0;
	while(s[i]){
		if(s[i]==c)
			x++;
		i++;
	}
	return x;
}

int main(void)
{
	char s[100],c;
	printf("文字列を入力してください:");
	scanf("%s",s);
	printf("探したい文字を入力してください:");
	scanf(" %c",&c);
	printf("文字列%sの中には文字%cが%d個含まれています。\n",s,c,str_chnum(s,c));

	return 0;
}
