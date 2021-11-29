#include<stdio.h>

int main(void) {
	int c;
	int num=0;

	for (num = 0; getchar() != EOF; ++num)
		;
	printf("×Ö·û¸öÊı£º%d\n", num);
	return 0;
}