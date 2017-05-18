#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int x, y, z = 0;

	puts("Please enter two integers: ");
	scanf("%d%d", &x, &y);

	while (x > 0) {
		if (x % 2 == 1) {
			z = z + y;
		}

		y = y << 1;
		x = x >> 1;
	}

	printf("Product: %d", z);

	return 0;
}