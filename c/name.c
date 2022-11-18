#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("Your character's name is shit. Pick a different one. ");
	scanf("%s", &name);
	printf("That's better. %s, huh? Great name.\n", name);
	return 0;
}



