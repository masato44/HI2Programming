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

	if(a>0,b>0,c>0)
	   puts("負の値が一つ以上あります。");
	else
	   puts("すべて0以上の値です。");

	return 0;
}
