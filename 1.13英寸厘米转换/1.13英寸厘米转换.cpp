#define _CRT_SECURE_NO_WARNINGS //把这个宏定义一定要放到.c文件的第一行。
#include <stdio.h>

int main(void) {
	float inchs;
	float centimetres;

	printf("Input inch:");
	scanf("%f",&inchs); //scanf在现在目前的新版本中被认为是不安全的
	centimetres = inchs * 2.54f; //double的精度比float的高，所以会出现警告
	printf("%fInchs = %fCMs", inchs, centimetres);

	return 0;
}