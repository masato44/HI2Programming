#include <stdio.h>

struct student {
	int number;
	char name[64];
	int score;
};

int main(void) {
	struct student s1 = {1001, "Taro", 85};
	struct student s2 = {1015, "Jiro", 66};

	puts("番号 名前 点数");
	puts("--------------");
	printf("%d %s %d\n", s1.number, s1.name, s1.score);
	printf("%d %s %d\n", s2.number, s2.name, s2.score);
	return 0;
}
