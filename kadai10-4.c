#include <stdio.h>
void convtime(int m, int *hour, int *min) {
	*hour=m/60;
	*min=m%60;
}
int main(void) {
	int m, hour, min;
	printf("分を入力してください: ");
	scanf("%d", &m);
	convtime(m, &hour, &min);
	printf("%d 分は%d 時間%d 分です。\n", m, hour, min);
	return 0;
}
