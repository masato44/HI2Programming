#include<stdio.h>
int main(void)
{
    int a,b,c;

	printf("aの値を入力してください:");
	scanf("%d",&a);
	printf("bの値を入力してください:");
	scanf("%d",&b);
	printf("cの値を入力してください:");
	scanf("%d",&c);

	if(a==b&&b==c&&a==c)
	   puts("すべて等しい値です。");
	else if(a==b||b==c||a==c)
	   puts("値が等しい組が１つあります。");
	else
	   puts("すべて異なる値です。");

	return 0;
}
