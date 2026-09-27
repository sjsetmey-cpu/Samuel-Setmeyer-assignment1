#include <stdio.h>

int main(){
	char first, second;

	for (first = 'a'; first <= 'z'; first++) {
		for (second = 'a'; second <= 'z'; second++) {
			printf("www.%c%c.com\n", first, second);
		}
	}
	return 0;
}
