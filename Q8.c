#include <stdio.h>

int main() {
	int num;
	char choice;

	int d1, d2, d3, d4;
	int temp;

	scanf("%4d", &num);
	scanf(" %c", &choice);

	d1 = num / 1000;
	d2 = (num / 100) % 10;
	d3 = (num / 10) % 10;
	d4 = num % 10;

	if (choice == 'e') {
		d1 = (d1 + 7) % 10;
		d2 = (d2 + 7) % 10;
		d3 = (d3 + 7) % 10;
		d4 = (d4 + 7) % 10;

		temp = d1;
		d1 = d3;
		d3 = temp;

		 temp = d2;
                d2 = d4;
                d4 = temp;

		printf("Encrypted number: %d%d%d%d\n", d1, d2, d3, d4);
	}
	else if (choice == 'd') {
		temp = d1;
		d1 = d3;
		d3 = temp;

		temp = d2;
		d2 = d4;
		d4 = temp;

		d1 = (d1 + 3) % 10;
		d2 = (d2 + 3) % 10;
		d3 = (d3 + 3) % 10;
		d4 = (d4 + 3) % 10;

		printf("Decrypted number: %d%d%d%d\n", d1, d2, d3, d4);
	}
	return 0;
}
