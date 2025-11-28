/* Exercise 1-12: print input one word per line */
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c, state;
	state = OUT;

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
