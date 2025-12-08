/* Exercise 1-15: Reqrite the temperature program from...
 * Section 1.2 to use a function for conversion. */

/* c = (5/9)*(f-32) */

#include <stdio.h>

float celsius(float n);

int main()
{
	int c;
       	float i;
	printf("fahrenheit\tcelsius\n");
	for(i=0; i<=300; i=i+20)
		printf("%6.1f\t%6.1f\n", i, celsius(i));

	return 0;
}


/* function declaration */
float celsius(float f)
{
	float c; 
	c = (5.0/9.0)*(f-32.0);
	return c;
}
