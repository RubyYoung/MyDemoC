#define _CRT_SECURE_NO_WARNINGS //������궨��һ��Ҫ�ŵ�.c�ļ��ĵ�һ�С�
#include <stdio.h>

int main(void) {
	float inchs;
	float centimetres;

	printf("Input inch:");
	scanf("%f",&inchs); //scanf������Ŀǰ���°汾�б���Ϊ�ǲ���ȫ��
	centimetres = inchs * 2.54f; //double�ľ��ȱ�float�ĸߣ����Ի���־���
	printf("%fInchs = %fCMs", inchs, centimetres);

	return 0;
}