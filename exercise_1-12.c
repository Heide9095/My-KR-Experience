/* Exercise 1-12: print input one word per line */
/* Version 0 without states */
#include <stdio.h>
int main()
{
	int c;

	while( (c=getchar()) != EOF)
	{
		if( c == ' ' || c == '\t' || c == '\n')
			{
			printf("\n");
			while((c=getchar()) == ' ' || c == '\t' || c == '\n')
				;
			}
		if( c != ' ' || c != '\t' || c != '\n')
			putchar(c);

	}
}
