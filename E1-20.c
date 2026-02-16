/* Exercise 1-20 */
/* Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, 
say every n columns. Should n be a variable or a symbolic parameter? */

/* v1 */
#include <stdio.h>

#define MAX 1000	/* MAX character input */
#define MIN 0	/* MIN character input */
#define TABSTOP 8

int getline(char s[], int l);
int rest(int, int);
int counter(int, int);

char line[MAX];

main()
{
	int len = 0;
	while((len=getline(line, MAX))>MIN)
		if(len>MIN)
			printf("%s", line);
		else
			printf("empty line");
}

/* get line and track the tab collumns */
int getline(char s[], int lim)
{
        int i, c, r, n;	/* integer, character, rest, counter */
        i=n=0; 
	while(i<lim-1 && (c=getchar()) != EOF && c!='\n')
	{
		if(c=='\t')
		{
			r=rest(TABSTOP, n);
			while(r>0 && i<lim-1)
			{
				/* blanks replaced by '.' for debugging */
				s[i]='.';
				++i, --r;
				n=counter(n, TABSTOP);
			}
		}
		else
		{
			s[i]=c;
			n=counter(n, TABSTOP);
			++i;
		}
	}

        if(c=='\n')
        {
                s[i]=c;
                ++i;
        }
        s[i]='\0';
        return i;
}

/* counter check */
int counter(int counter, int tabstop)
{
	++counter;
	if(counter == tabstop)
		counter=0;
	return counter;
}
/* remaining blank calculation */
int rest(int tabstop, int counter)
{
	int r = (tabstop - counter);
	return r;
}
