#include<stdio.h>
int main(void)
{
	int i=0;
	char name[100];

	printf("文字列を入力してください:");
	scanf("%s",name);

	while(name[i]!='\0'){
		printf("%d番目の文字:%c(文字コード:%X)\n",i,name[i],name[i]);
		i++;
	}

	return 0;
}
