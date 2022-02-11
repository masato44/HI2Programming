#include<stdio.h>
int getmul3num(int v[],int len){
	int i,n=0;
	for(i=0;i<len;i++){
		if(v[i]%3==0)
			n++;
	}
	return n;
}

int main(void){
	int x[6]={10,8,3,14,15,26};
	printf("3の倍数の値は%d個含まれています。\n",getmul3num(x,6));
	return 0;
}
