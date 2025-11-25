// 1.2 Variables and Arithmentic Expressions
// C=(5/9)(F-32)

/* the following file contains only the floating point versions
I also modified them a bit to look nicer */

/*
#include <stdio.h>
int main(){
	float fahrenheit, celcius, lower_limit, upper_limit, step;

	lower_limit = 0;
	upper_limit = 300;
	step = 20;
	fahrenheit = lower_limit;

	printf("Fahrenheit to Celcius table\n\n");
	printf("Fahrenheit\tCelcius\n");

	while (fahrenheit <= upper_limit) {
		celcius = (5.0/9.0) * (fahrenheit-32.0);
		printf("%6.0f\t\t%6.1f\n", fahrenheit, celcius);
		// x.y means x digits wide with y amount of decimals
		fahrenheit = fahrenheit + step;		 
	}
}
*/

/* Exercise 1-3: print heading
I added a heading and a subheading, for the programm above and below,
for the two collumns */

// Exercise 1-4: Celcius to Fahrenheit Programm
/*
#include <stdio.h>
int main(){
	float celcius, fahrenheit, lower_limit, upper_limit, step;
	
	lower_limit = -50;
	upper_limit = 50;
	step = 10;
	celcius = lower_limit;

	printf("Celcius to Fahrenheit table\n\n");
	printf("Celcius\tFahrenheit\n");

	while(celcius <= upper_limit){
		fahrenheit = celcius / (5.0/9-0) + 32;
		printf("%5.0f\t%6.0f\n", celcius, fahrenheit);
		celcius = celcius + step;
	}
}
*/
