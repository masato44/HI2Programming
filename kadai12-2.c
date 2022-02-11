#include <stdio.h>
struct person {
	char name[64];
	int age;
};
int main(void) {
	struct person ps1, ps2;

	printf("名前:");
	scanf("%s",ps1.name);
	printf("年齢:");
	scanf("%d",&ps1.age);
	printf("名前:");
	scanf("%s",ps2.name);
	printf("年齢:");
	scanf("%d",&ps2.age);

	if(ps1.age>ps2.age)
		printf("%sさんの方が%d歳年上です。\n",ps1.name,ps1.age-ps2.age);
	else if(ps1.age<ps2.age)
		printf("%sさんの方が%d歳年上です。\n",ps2.name,ps2.age-ps1.age);
	else
		printf("%sさんと%sさんは同い年です。\n",ps1.name,ps2.name);

	return 0;
}
