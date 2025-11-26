/* 1.5.1 File Copying */

/*
#include <stdio.h>

int main()
{
	int c;

	while( (c=getchar()) != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return 0;
}
*/

/* Exercise 1-6 & 1-7 */
/* Prove that getchar() != EOF is 0 or 1 and print the value */


#include <stdio.h>

int main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);
}


/* I am using printf() because putchar(c); just puts a blank space, 
printf() on the other hand returns a 1 for me */



