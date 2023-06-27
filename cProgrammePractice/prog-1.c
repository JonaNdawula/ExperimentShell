#include <stdio.h>
/**
 *main - shows mathematical operations in c
 *
 *Return: Alwways 0
 */
int main(void)
{

	int Addition, subtraction, division, multiplication, modulo, a, b;

	a = 90;

	b = 5;

	Addition = a + b;
	printf("%d + %d = %d\n", a, b, Addition);

	subtraction = a - b;
	printf("%d - %d = %d\n", a, b, subtraction);

	division = a / b;
	printf("%d / %d = %d\n", a, b, division);

	multiplication = a * b;
	printf("%d X %d = %d\n", a, b, multiplication);

	modulo = a % b;
	printf("%d %% %d = %d\n", a, b, modulo);

	return (0);
}
