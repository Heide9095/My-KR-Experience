// 1.3 The for statement
/*
#include <stdio.h>
int main(){

	printf("Fahrenheit to Celcius table\n\n");
	printf("Fahrenheit\tCelcius\n");

	int fahrenheit;

	for(fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20){
		printf("%6d\t\t%6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32.0));
	}
}
*/

// Exercise 1-5: reverse order table
/*
#include <stdio.h>
int main(){

	printf("Reversed Fahrenheit to Celcius table\n\n");
	printf("Fahrenheit\tCelcius\n");

	int fahrenheit;

	for(fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20){
		printf("%6d\t\t%6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32.0));
	}
}
*/
