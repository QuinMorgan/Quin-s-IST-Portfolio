#include <stdio.h>

int main(){
	int a, b;   //declare
	char c;

	a = 10;      //assign
	b = 20;
	
	scanf("%c", &c); //input char

	if(a>b) {        
	printf("a > b = %i.\n", a > b);    //output
	}

	if(c>=65 && c<=91) {
	c = c + 32; //lowercase converter
	} else if(c < 65 || c > 122)
	{
		printf("you entered an invalid character!\n");
		return 0;
	}

	printf("lowercase = %c.\n", c); //output 
	return 0;	//end program
}
