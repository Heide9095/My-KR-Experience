/*  Exercise 1-16:
 *  Revise the main routine of the longest-line program so it will correctly print...
 *  the length of arbitrary long input lines, and as much as possible of the text. */

#include <stdio.h>
#define LIMIT 10 /* I made the limit tiny for easier testing */

int getline(char line[], int limit);
void copy(char to[], char from[]);

int main()
{
	int len; /* current line lenght */
	int max; /* maximum lenght seen so far */
	char line[LIMIT]; /* current input line */
	char longest[LIMIT]; /* longest line  */

	printf("This programm will tell you which of your lines is the longest...\n");
	printf("and how many characters it includes.\n");
	printf("After writing press ENTER and then EOF to see your results:\n\n");

	max = 0;
	while( (len = getline(line, LIMIT) ) > 0)
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}

	/* here is the text it prints depending on your input */
	if( max > 0)
	{
		printf("\nYour longest line includes %d characters.\n", max); /* prints the total character input */
		if( max < LIMIT)
			printf("Your longest line is:\n");
		else if (max >= LIMIT)
		{
			printf("It is, unfortunatly, %d characters too long!\n", max-(LIMIT-1));
			printf("I shortened it for you:\n");
		}
			printf("\"%s\"", longest); /* prints the longest line up to LIMIT */
	}
	return 0;
}


/* bellow are the definitions for the two custom functions */

/* I rewrote this function from the book
 * so that it continues counting characters until EOF || '\n' */
int getline(char line[], int limit)
{
	int c, i;
	for(i = 0; (c=getchar()) != EOF && c != '\n'; ++i)
	{
		if(i < limit-1)
			line[i] = c;
		else if(i == limit-1)
			line[i] = '\0';
	}
	if(c == '\n' && i <= limit-1)
	{
		line[i] = '\0';
		++i;
	}
	return i;
}

/* this function is unchanged */
void copy(char to[], char from[])
{
	int i;
	i=0;
	while( (to[i] = from[i]) != '\0')
			++i;
}




