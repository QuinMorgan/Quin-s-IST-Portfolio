#include <stdio.h>

int main() {
	
	char str[20]; //This line creates a 20 character array.
	
	printf("Welcome to the Word Case Inverter\nPlease enter a word: "); //This line prompts the user to input a word.
	
	scanf("%s", &str); //This line stores the word in the array.
	
	for(int i; str[i] != 0; i++) { //This line runs the loop until the array ends.
		if(str[i] >= 'a' && str[i] <= 'z'){ //This line tests if the letter is lowercase.
			str[i] = str[i] - 32; //If the letter is lowercase, this line converts it to uppercase.
		} else if(str[i] >= 'A' && str[i] <= 'Z'){ //This line tests if the letter is uppercase.
			str[i] = str[i] + 32; //If the letter is uppercase, this line converts it to lowercase.
		}
	}

	printf("Your case inverted word is %s\n", str); //This line outputs the case inverted word.

	return 0;
}
