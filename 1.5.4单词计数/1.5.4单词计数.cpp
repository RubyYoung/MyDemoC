#include<stdio.h>
#define IN 1 //�ڵ�����
#define OUT 0 //���ڵ�����
/*
ͳ�����������������ַ���
*/

int main() {
	int c, n1, nw, nc, state;
	n1 = nw = nc = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++n1;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("������%d\n��������%d\n�ַ�����%d\n", n1, nw, nc);
}