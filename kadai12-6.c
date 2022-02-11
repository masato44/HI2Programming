#include<stdio.h>
#include<time.h>

int main(void)
{
	time_t csec = time(NULL); /* 現在時刻を秒数で取得 */
	struct tm *timeinfo = localtime(&csec); /* 秒数を日時のデータに変換 */

	int year, mon, mday, hour, min, sec;

	year=timeinfo->tm_year+1900;
	mon=timeinfo->tm_mon+1;
	mday=timeinfo->tm_mday;
	hour=timeinfo->tm_hour;
	min=timeinfo->tm_min;
	sec=timeinfo->tm_sec;

	printf("現在は%04d年%02d月%02d日の%02d時%02d分%02dです。\n",year,mon,mday,hour,min,sec);

	return 0;
}
