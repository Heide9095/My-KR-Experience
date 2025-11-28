/* Exercise 1-12: print input one word per line */
/* version 2 using states */
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c, state;
	state = OUT;

	while( (c=getchar()) != EOF)
	{
		if( c != ' ' && c != '\t' && c != '\n')
		{
			putchar(c);
			state = IN;
		}
		else if( state == IN )
		{
			printf("\n");
			state = OUT;
		}
	}
}
