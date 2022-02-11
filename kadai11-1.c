#include <stdio.h>
int main(void) {
	char word[80];
	char *p = word;
	int count = 0;
	
	printf("単語を入力してください:");
	scanf("%s",word);

	while(*p!='\0'){
		if(*p=='a')
			count++;
		p++;
	}

	printf("文字a は%d 文字含まれています。\n", count);
	return 0;
}
