/* Exercise 1-10: replace tab with \t, backspace with \b and backslash with \\ */

#include <stdio.h>
int main()
{
	int c;

	while( (c=getchar()) != EOF )
	{
		while( c == '\t' )
		{
			printf("\\t");
			c = getchar();
		}

		while( c == '\b' )
		{
			printf("\\b");
			c = getchar();
		}

		while( c == '\\' )
		{
			printf("\\\\");
			c = getchar();
		}
		putchar(c);
	}
}
