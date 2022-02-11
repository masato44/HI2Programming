#include<stdio.h>
#include<string.h>
void convstr(char *s)
{
	int i=0,count;
	char a[80];
	char *p=a;
	char word;
	strcpy(a,s);

	while(*p){
		word=*p;
		p++;
		count=*p-'0';
		p++;
		while(count){
			*s=word;
			s++;
			count--;
		}
	}
	*s='\0';
}

int main(void)
{
	char s[80];

	scanf("%s",s);

	puts(s);
	convstr(s);
	puts(s);

	return 0;
}
