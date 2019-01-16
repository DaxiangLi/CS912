/*
 * This small program is to swap two intergers, which addresses
 * prog 1-5, 1-6, 1-7 in Page#10-11
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Function to swap two intergers
 */
#ifdef _BITOP_XOR
static void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
#else
static void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
#endif

int main(int argc, char *argv[])
{
	if (argc != 3) {
		fprintf(stderr, "Usage: %s <num 1> <num 2>\n", argv[0]);
		return -1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("Raw input\t: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap\t: a = %d, b = %d\n", a, b);

	return 0;
}
