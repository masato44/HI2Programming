#include<stdio.h>
void del_digit(char s[])
{
	int i;

	while(s[i]){
		if(s[i]>='A'&&s[i]<='Z')
	}

int main(void)
{
	char x[100];

	printf("文字列を入力してください:");
	scanf("%s",x);

	del_digit(x);

	return 0;
}
