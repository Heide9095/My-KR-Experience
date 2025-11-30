/* Exercise 1-13: Write a programm to print a histogram of the lenghts
 * of words in it's input. Vertical bars == easy; horizontal == challanging */


/* i missunderstood the task so it is failed, but I learned something about arrays */

/*
ideas:
record how macy characters within a word
project the amount of characters to the number of bars in a histogram
 */

/*
I'll try to use states to record a word,
and somehow count the number of characters within a word
*/

/* add value to the corresponding word counter */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, i, w, state;
	w = 0;			/* word count set to 0 */
	state = OUT;

	int word[10];		/* word is an array of 10 integers */
	for( i = 0; i <10 ; ++i) /* innitalise an array of ten integers */
		word[i] = 0;
	
	while( (c=getchar()) != EOF)
	{
		if(c== '\n' || c==' ' || c=='\t')
		{
			if(state == IN)
			{
				state = OUT;
				++w;
			}
		}
		else
		{
			++word[w];
			if(state == OUT)
				state = IN;
		}
	}
	printf("the words have the following histograph:\n");
	for( i = 0; i <10; ++i)
		printf("%d ", word[i]);		/* print anf array of 10 integers */
}




		
