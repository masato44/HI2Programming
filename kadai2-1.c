#include<stdio.h>
int main(void)
{
    int a=10,b=4;

	printf("aの評価値:%d\n",a);
	printf("bの評価値:%d\n",b);
	printf("a/3+bの評価値:%d\n",a/3+b);
	printf("a==10の評価値:%d\n",a==10);
	printf("a!=10の評価値:%d\n",a!=10);
	printf("a==10&&b==10の評価値:%d\n",a==10&&b==10);
	printf("a<5||b<5の評価値:%d\n",a<5||b<5);
	printf("a<5&&b<5の評価値:%d\n",a<5&&b<5);
	printf("a>bの評価値:%d\n",a>b);
	printf("a-b==-(b-a)の評価値:%d\n",a-b==-(b-a));
    return 0;
}
