#include <stdio.h>
int main(void)
{
    int x;

	scanf("%d",&x);
	if(x>=10&&x<=99)
	   puts("「２桁の数字です。」");
	else
	   puts("「２桁の数字ではありません。」");

    return 0;
}
