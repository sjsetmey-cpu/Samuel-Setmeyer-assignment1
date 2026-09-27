#include <stdio.h>

int main(){
	int n;
	int count = 0;

	scanf("%d", &n);

	if (n <= 0) {
		printf("Error: Cannot compute Fizz Buzz of %d\n", n);
		return 0;
	}

	for (int i = n; i >= 1; i--){

		if (i % 3 == 0 && i % 5 == 0) {
			printf("Fizz-Buzz");

		}
		else if (i % 3 == 0) {
			printf("Fizz");
		}
		else if (i % 5 == 0) {
			printf("Buzz");
		}
		else {
			printf("%d", i);

		}

		count++;

		if (count % 4 == 0) {
			printf("\n");
		}
		else if (i != 1) {
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
