/* Exercise 1-13: Write a programm to print a histogram of the lenghts
 * of words in it's input. Vertical bars == easy; horizontal == challanging */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, i, l;	/* character, instance, letter count */
	int y, x;	/* y- and x-axis */
	l = y = x =  0;

	int state;	/* state to check if IN or OUT */
	state = OUT;

	int word[99];		/* word an array of 99 instances */
	for( i = 0; i < 99 ; ++i) /* innitalise the array */
		word[i] = 0;

	printf("Write and generate a histogram");
  printf(" of the lenghts of words in your input.\n");
	printf("(Maximum word lenght of 99 letters)\n");
	printf("Start typing:\n\n");

	while( (c=getchar()) != EOF)
	{
		/* only standart ASCII letters are registered as words */
		if(c >= 65 && c <= 90 || c>= 97 && c <= 122)
		{
			++l;	/* increase letter count */
			if( l > x)	/* adjust x-axis */
				x = l;
			if(state == OUT)
				state = IN;
		}
		else
		{
			if(state == IN)
			{
				++word[l];	/* increase value for instance of...
						the corresponding letter count */
				if( word[l] > y)	/* adjust y-axis */
					y = word[l];
				l = 0;		/* reset letter count */
				state = OUT;
			}
		}
	}

	printf("\nYour sentence generates the following histogram:\n\n");

	for( ; y >= 1; --y && putchar('\n'))	/* print bars starting
						 from max height */
		for(i = 1; i <= x; ++i)	
		{
			if( word[i] == y)
			{
				if(i < 10)	/* adjust bar */
					printf("| ");
				else
					printf("|  ");
				--word[i];
			}
			else
				if(i < 10)	/* adjust dot */
					printf(". ");
				else
					printf(".  ");
		}

	putchar('\n');	

	for( i = 1; i <= x; ++i)	/* print bottom row */
		printf("%d ", i);	
}
