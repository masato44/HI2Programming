#include <stdio.h>
int getnextday(int month, int day, int *nmonth, int *nday) {
	
	return 0;
}
int main(void) {
	int m, d, nm, nd, ret;
	while(1) {
		printf("日付を入力してください: ");
		scanf("%d/%d", &m, &d);

		ret = getnextday(m, d, &nm, &nd);
		if(ret<0)
			puts("不正な値です。");
		else
			printf("翌日は %d 月%d 日です。\n", nm, nd);
	
	}
	return 0;
}
