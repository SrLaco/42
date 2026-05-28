#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 42;
	b = 89;
	printf("%d Hello %d World\n", a, b);
	b = a;
	a = 27;
	printf("%d Hello %d World\n", a, b);
}