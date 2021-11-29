#include<stdio.h>

int main(void) {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	for (fahr = lower; fahr <= upper; fahr += step)
	{
		celsius = 5 * (fahr - 32)/9;
		printf("%.3ffahr = %.3fcelsius\n",fahr, celsius);
	}
}