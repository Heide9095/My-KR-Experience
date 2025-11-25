// 1.4 Symbolic Constants
/* I replaced the celcius formula with a symbolic constonant, and
 gave all of them clearer names. */

#include <stdio.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define STEP 20
#define CELCIUS (5.0/9.0)*(fahrenheit-32)

int main(){

	float fahrenheit;

	for(fahrenheit = LOWER_LIMIT; fahrenheit <= UPPER_LIMIT;
	    fahrenheit = fahrenheit + STEP){
		printf("%6.0f\t%6.1f\n", fahrenheit, CELCIUS);
	}
}
