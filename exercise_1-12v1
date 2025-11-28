/* Exercise 1-12: print input one word per line */
/* version 1 using states */
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
			if( state == IN)
			{
				printf("\n");
				state = OUT;
			}
			else 
			{
				;
			}
		}
		else
		{
			putchar(c);
			state = IN;
		}
	}
}
