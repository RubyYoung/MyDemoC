#include<stdio.h>
#define IN 1 //在单词中
#define OUT 0 //不在单词中
/*
统计行数，单词数，字符数
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
	printf("行数：%d\n单词数：%d\n字符数：%d\n", n1, nw, nc);
}