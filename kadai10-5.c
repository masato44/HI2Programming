#include <stdio.h>
int getnextday(int month, int day, int *nmonth, int *nday) {
	if(month<1||month>12||day<1||day>31)
		return -1;
	if(month==1||month==3||month==5||month==7||month==8||month==10){
		if(day==31){
			*nmonth=month+1;
			*nday=1;
		}else{
			*nmonth=month;
			*nday=day+1;
		}
	}else if(month==4||month==6||month==9||month==11){
		if(day==30){
			*nmonth=month+1;
			*nday=1;
		}else{
			*nmonth=month;
			*nday=day+1;
		}
	}else if(month==2){
		if(day==28){
			*nmonth=month+1;
			*nday=1;
		}else if(day>=29){
			return -1;
		}else{
			*nmonth=month;
			*nday=day+1;
		}
	}else if(month==12){
		if(day==31){
			*nmonth=1;
			*nday=1;
		}else{
			*nmonth=month;
			*nday=day+1;
		}
	}

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
