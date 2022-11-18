#include <stdio.h>

int main() {
	int l, w;
	printf("Enter the length of your rectangle: ");
	scanf("%i", &l);
	printf("Enter the width of your rectangle: ");
	scanf("%i", &w);
	int p = (l * 2) + (w * 2);
	printf("The perimeter of your rectangle is %i.\n", p);
	return 0;
}



