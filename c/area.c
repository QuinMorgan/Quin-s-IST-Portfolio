#include <stdio.h>

int main() {
	int l, w;
	printf("Enter the length of your rectangle: ");
	scanf("%i", &l);
	if(l < 0)
	{
		printf("Length cannot be negative!\n");
		return 0;
	}
	printf("Enter the width of your rectangle: ");
	scanf("%i", &w);
	if(w < 0)
	{ 
		printf("Width cannot be negative!\n");
		return 0;
	}
	int A = l * w;
	printf("The area of your rectangle is %i.\n", A);
	return 0;
}



