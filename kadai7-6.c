#include<stdio.h>
#include<time.h>

void showtime(void){
	time_t timer;
	struct tm *date;
	timer=time(NULL);
	date=localtime(&timer);
	puts(asctime(date));
}

int main(void){
	showtime();
	return 0;
}
