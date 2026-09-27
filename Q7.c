#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	if (n <= 0) {
		printf("Error: Number must be a positive integer\n");
		return 0;
	}
	while (n > 0) {
		printf("%d", n % 2);
		n = n / 2;
	}

	printf("\n");
	return 0;
}
