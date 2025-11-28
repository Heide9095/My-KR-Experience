/* Exercise 1-10: replace tab with \t, backspace with \b and backslash with \\ */

#include <stdio.h>
int main()
{
	double c;

	while( (c=getchar()) != EOF )
	{
		if( c == '\t' )
		{
			printf("\\t");
		}

		if( c == '\b' )
		{
			printf("\\b");
		}

		if( c == '\\' )
		{
			printf("\\\\");
		}
		if( c!= '\t')
			if( c!= '\b')
				if( c!= '\\')
					putchar(c);
	}
}
