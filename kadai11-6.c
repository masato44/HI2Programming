#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
	int x=strlen(s),i=0,y;

	while(x>i){
		y=*(s+i);
		*(s+i)=*(s+x-1);
		*(s+x-1)=y;
		x--;
		i++;
	}
}

int main(void){
	char s[80];

	printf("文字列は?:");
	scanf("%s",s);
	reverse(s);
	puts(s);

	return 0;
}
