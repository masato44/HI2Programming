#include <stdio.h>
int getlen(const char s[]) 
{
	int len=0;

	while(s[len])
		len++;
	return len;
}

int main(void) {
	printf("123の長さ: %d\n", getlen("123"));
	printf("abcde の長さ: %d\n", getlen("abcde"));
	return 0;
}
