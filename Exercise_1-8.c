/* Exercise 1-8: count blanks, tabs, newlines */

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


