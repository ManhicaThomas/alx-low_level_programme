#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	srand(time(NULL); // Seed the random number generator with the current time
		       	n = rand() % (2 * RAND_MAX) - RAND_MAX; // Generate a random number

			printf("The number: %d\n", n);

			if (n > 0) {
		       printf("is positive\");
		       } else if (n == 0) {
	printf("is zero\n");
	} else {
print("is negative\n"
		}

	return 0;
	}	
