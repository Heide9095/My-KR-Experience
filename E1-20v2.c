/* Exercise 1-20
 * Write a program detab that replaces tabs in the input with the proper number
 * of blanks to space to the next tab stop. Assume a fixed set of tab stops,
 * say every 'n' columns. Should 'n' be a variable or a symbolic parameter? */

/* v2 */
#include <stdio.h>

int detab(int counter, int tabstop);

main()
{
	int i, c, t;	/* counter, character, tab-stop */
	i=0;
	t=8;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
			i=detab(i,t);
		else if(c=='\n')
			i=0;
		else
		{
			putchar(c);
			++i;
		}
		if(i==t)
			i=0;
	}
	return 0;
}

int detab(int i, int t)
{
	int n=(t-i);
	while(n>0)
	{
		putchar('.');
		--n;
	}
	return n;
}


