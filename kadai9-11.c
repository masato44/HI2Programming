#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[]="abc123",s2[100];
	while(1){
		printf("Input password:");
		scanf("%s",s2);
		if(strcmp(s1,s2)==0){
			puts("OK.");
			break;
		}
		else
			puts("Wrong!");
	}
	
	return 0;
}
