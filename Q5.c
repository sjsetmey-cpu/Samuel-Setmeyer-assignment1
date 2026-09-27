#include <stdio.h>

int main() {
	int n;
	int i;

	scanf("%d", &n);

	if (n == 0 || n == 1) {
		printf("%d has no prime factorization\n", n);
		return 0;
	}

	printf("The prime factorization of %d is: ", n);

	while (n % 2 == 0) {
		printf(" 2");
		n = n / 2;
	}

	for (i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			printf(" %d", i);
			n = n / i;
		}
	}

	if (n > 2) {
		printf(" %d", n);
	}
	printf("\n");

	return 0;
}
