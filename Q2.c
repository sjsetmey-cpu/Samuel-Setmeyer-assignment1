#include <stdio.h>

int main(){
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180){
		printf("Invalid\n");
		return 0;
	}

	printf("valid ");

	if (a < 90 && b < 90 && c < 90){
		printf("acute ");
	}
	else if (a == 90 || b == 90 || c == 90){
		printf("right ");
	}
	else{
		printf("obtuse ");
	}

//isocelies triangle
	if (a == b || a == c || b == c){
		printf("isosceles ");

		if (a == 60 && b == 60 && c == 60){
			printf("equilateral ");
		}
	}
	printf("\n");
	return 0;
}
