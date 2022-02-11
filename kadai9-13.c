#include<stdio.h>
int main(void)
{
	char seasons[][10]={"spring","summer","aurumn","winter"};
	int x;

	printf("月を入力してください:");
	scanf("%d",&x);

	if(x==3||x==4||x==5)
		printf("%s\n",seasons[0]);
	else if(x==6||x==7||x==8)
		printf("%s\n",seasons[1]);
	else if(x==9||x==10||x==11)
		printf("%s\n",seasons[2]);
	else
		printf("%s\n",seasons[3]);

	return 0;
}
