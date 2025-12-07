/* Exercise 1-14. Write a program to print a histogram of
 the frequencies of different characters in its input.
*/
/*
 I will record ASCII 33-126
*/


#include <stdio.h>

int main()
{
	int y, x; /* y an x axis */
	int i, c; /* instance and character */
	y = 0;

	int character[127]; /* array of characters */
	for(i=33; i<=126; ++i)
		character[i] = 0;
	
	printf("This programm creates a histogram of ");
	printf("the printable characters you have typed");
	printf("(ASCII 33-126)\n");
	printf("Start typing and press EOF to convert:\n\n");

	while( (c=getchar()) != EOF)
		if(c >= 33 && c<=126)
  		{
    			i = c;
    			++character[i];
    			if(character[i] > y) 
      				y = character[i];
  		}
		
	putchar('\n');
	putchar('\n');

  	for( ; y>0; --y && putchar('\n'))
  		for(i=33; i<=126; ++i)
  		{
	  		if(character[i] > 0)
			{
				if(character[i] == y)
				{
					printf("| ");
					if(character[i] > 1)
						--character[i];
				}
	  			else
					printf(". ");
			}
		}

	putchar('\n');

	for(i=33; i <= 126; ++i)
		if( character[i]>0)
			printf("%c ", i);
}
