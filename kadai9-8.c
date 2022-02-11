#include <stdio.h>
void hidevowel(char s[])
{
	int i=0;

	while(s[i]){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			s[i]='*';
		i++;
	}
}

int main(void)
{
	char s[80];

	printf("文字列を入力してください: ");
	scanf("%s", s);
	puts("hidevowel を呼出す前");
	puts(s);
	hidevowel(s);
	puts("hidevowel を呼出した後");
	puts(s);
	
	return 0;
}
