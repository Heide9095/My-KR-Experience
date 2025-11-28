/* 1.5.3 Line Counting */
/* 
#include <stdio.h>
int main()
{
	int c, nl;
	nl = 0;

	while( (c = getchar()) != EOF)
	{
		if( c == '\n')
		{
			++nl;
		}
	}

	printf("you have %d new lines", nl);
}
*/

/* Exercise 1-8: count blanks, tabs, newlines */
/*
#include <stdio.h>
int main()
{
	int bl, t, nl, c;
	bl = 0;
	t = 0;
	nl = 0;

	while( (c = getchar()) != EOF)
	{
		if( c == ' ')
			++bl;
		if( c == '\t')
			++t;
		if( c == '\n')
			++nl;
	}
	printf("you have entered %d blanks,", bl);
	printf(" %d tabs,", t);
	printf(" %d newlines\n", nl);
}
*/

/* Exercise 1-9: replace one or more blanks with a single blank */

#include <stdio.h>
int main()
{
	int c;
	
	while( (c=getchar()) != EOF )
	{
		putchar(c);
		if( (c=getchar()) != ' ')
			putchar(c);
	}
}
