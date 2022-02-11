#include<stdio.h>
#include<string.h>
int main(void)
{
	int x=0,i;
	char s[100];

	scanf("%s",s);
	printf("長さ: %d\n",strlen(s));
	
	for(i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9')
			x++;
	}

	printf("数値の個数: %d\n",x);

	return 0;
}
