#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(void);
int validateGuess(int guess, int number);
void instructions(void);

int main (void) {

	int cont = 0, guess, number;
	char yes = 'y';

	srand(time(NULL));

	instructions();

	number = generateNumber();

	while (yes == 'y') {
		while (cont == 0) {
			scanf("%d", &guess);
			cont = validateGuess(guess, number);
			if (cont != 1) {
				printf("\nPlease enter a new guess.\n");
			}
				
		}
		printf("\nWould you like to play again? (y/n)\n");
		scanf("%s", &yes);

	}

	return 0;
}

int generateNumber(void) {
	int number;

	number = 1 + (rand() % 1000);

	return number;
}

int validateGuess(int guess, int number) {
	int correct = 0;

	if (guess == number) {
		printf("\nExcellent! You guessed the number!");
		correct = 1;
	} else if (guess < number) {
		printf("\nToo low. Try again.");
	} else {
		printf("\nToo high. Try again.");
	}

	return correct;
}

void instructions(void) {
	printf("\nI have a number between 1 and 1000.");
	printf("\nCan you guess my number?");
	printf("\nPlease type your first guess.");
}