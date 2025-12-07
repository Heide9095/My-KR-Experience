/* 1.7 Functions */

#include <stdio.h>

int power(int m, int n); /* power function is innitialised,
the naming of the int's does not need to correspond and can be written
as anything */

/* test power function */

int main()
{
	int i;
	for(i=0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* the text bellow is the function definiton and can appear anywhere in the file */
/* power: raise the base to n-th power; n >= 0 */

int power(int base, int n) /* in main: base == 2/-3, n == i */
{
	int i, p; /* this i in unrelated to main's i */
	p = 1;
	for( i = 1; i<=n; ++i) /*this is the calculation */
		p = p * base; 
	return p; /* the value of p is returned subsitudes %d in printf */
}

