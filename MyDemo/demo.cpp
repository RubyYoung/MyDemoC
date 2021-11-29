#include <stdio.h>

int main(void)
{
	int dog;

	printf("How many dogs do you have?\n");
	scanf("%d", &dog);
	//scanf_s("%d",&dog,1);
	printf("I have %d dogs!", dog);

	return 0;
}