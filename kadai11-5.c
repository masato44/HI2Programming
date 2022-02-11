#include<stdio.h>
void gethead(char *s,int x)
{
	int i=0;
	
	while(*s!='\0'&&i<x){
		s++;
		i++;
	}
	if(*s!='\0')
		*s='\0';
}

int main(void)
{
	char a[80];
	int b;
	printf("文字列は?:");
	scanf("%s",a);
	printf("文字数は?:");
	scanf("%d",&b);
	gethead(a,b);
	printf("%s\n",a);

	return 0;
}
