#include<stdio.h>
int main(void) {
	int num_space = 0;
	int num_t = 0;
	int num_n = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			num_space += 1;
		else if (c == '\t')
			num_t += 1;
		else if (c == '\n')
			num_n += 1;
	}
	printf("space is %d\n", num_space);
	printf("t is %d\n", num_t);
	printf("n is %d\n", num_n);
}