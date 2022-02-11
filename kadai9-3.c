#include<stdio.h>
int main(void)
{
	int name1[100],name2[10];
	printf("名字を入力してください:");
	scanf("%s",name1);
	printf("下の名前を入力してください。:");
	scanf("%s",name2);
	printf("あなたのイニシャルは%c.%c.です。\n",name2[0],name1[0]);

	return 0;
}
