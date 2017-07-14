#include <stdio.h>

int findGCF(int a, int b);

int main (void) {
	
	int a, b, c;

	printf("\nPlease enter two numbers to get GCF.\n");
	scanf("%d%d", &a, &b);

	c = findGCF(a, b);

	printf("\nGCF: %d\n", c);
	
	return 0;
}

int findGCF(int a, int b) {
	int GCF, x;
	int cont = 0;

	if ((a % b) == 0) {
		GCF = b;
	} else if ((b % a) == 0) {
		GCF = a;
	} else {
		GCF = 1;
		x = 1;
		while(cont == 0) {
			if (a % x == 0 && b % x == 0) {
				GCF = x;
				x++;
			} else {
				x++;
			}
			if (x >= a || x >=b) {
				cont = 1;
			}
		}
	}

	return GCF;

}