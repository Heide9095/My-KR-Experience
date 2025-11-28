/* Exercise 1-9: replace one or more blanks with a single blank */

/* this programm ignores the blanks that follow after a single blank */

#include <stdio.h>
int main()
{
	int c;

	while( (c = getchar()) != EOF )
	{
		if( c == ' ' )
		{
			putchar(c);
			while( (c = getchar()) == ' ' )
				;
		}
		putchar(c);
	}
}
