#include <stdio.h>

int main(){
	double num1, num2;
	char operator;
	
	scanf("%1lf %c %1lf", &num1, &operator, &num2);

	switch (operator) {

		case '+':
			printf("%.2f\n", num1 + num2);
			break;
		case '-':
			printf("%.2f\n", num1 - num2);
			break;
		case '*':
			printf("%.2f\n", num1 * num2);
			break;
		case '/':
			if (num2 == 0) {
				printf("Error: dividing by zero\n");
			}
			else {
				printf("%.2f\n", num1 / num2);
			}
			break;
		case '%':
			if ((int)num2 == 0) {
				printf("Error: dividing by zero\n");
			}
			else {
				printf("%.2f\n", (double)((int)num1 % (int)num2));
			}
			break;
	}
	return 0;
}
