#include<stdio.h>

int main(void) {
	int c;
	int num=0;

	for (num = 0; getchar() != EOF; ++num)
		;
	printf("�ַ�������%d\n", num);
	return 0;
}