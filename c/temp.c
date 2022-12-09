#include <stdio.h>

int main() {

	float f, c; //This line creates two floating point variables.
	
	printf("Welcome to the Fahrenheit to Celsius Converter\nPlease type a fahrenheit value to begin: "); /*This line prompts 
													      *the user to input
													      *a value to convert.
													      */
	scanf("%f", &f); //This line stores the user input in the f variable.
	
	c = (5.0 / 9.0) * (f - 32.0); //This line calculates the celsius value and stores it in the c variable.
	
	printf("Your celcius value is %.1f degrees\n", c); //This line outputs the converted value.	

	return 0;
}
