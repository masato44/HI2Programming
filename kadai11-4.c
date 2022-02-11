#include<stdio.h>
void hidechars(char *s)
{
	int i=0;
	while(*s!='\0'){
		if(i%2==0)
			*s='_';
		i++;
		s++;
	}
}

int main(void)
{
	char x[100];
	printf("単語を入力してください:");
	scanf("%s",x);
	hidechars(x);
	printf("%s\n",x);

	return 0;
}
