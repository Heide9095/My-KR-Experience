/* Exercise 1-18 */
/* Write a programm to clean trailing blanks and tabs from each line of input,
 * and delete enteriley blank lines */

/* Lessons learned: 
 * 1: Always set re-iteration boundries in loops.
 * 2: Arrays containing an "empty" integer will error */

/* To Fix: EOF creates a segmentation fault */

/* headers */
#include <stdio.h>

/* macros */
#define MAX 100
#define MIN 0
/* function declarations */
int getline(char line[], int linelimit);
int clean(char line[]);

main()
{
	int len;
	char line[MAX];
	while((len=getline(line, MAX))>MIN)
	{
		if(clean(line)>MIN)
			printf("%s", line);
		else
			printf("that was a blank line\n", line);
	}

	return 0;
}

int getline(char line[], int lim)
{
	int i, c;
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i]=c;
	if(c=='\n')
	{
		line[i]='\n';
		++i;
	}
	line[i]='\0';
	return i;
}

int clean(char line[])
{
	int i=0;

 	/* find the last character before the terminating character */
	while(line[i]!='\0' && i<MAX)
		++i;
	--i;

	/* find the last character that is a not a blank */
	while(i>=0 && (line[i] == ' ' || line[i] == '\t' || line[i]=='\n'))
		--i;
	/* insert a new line and a terminalting character after that */
	if(i>=0)
	{
		++i;
		line[i]='.'; /* reference to see if clean was sucessfull */
		++i;
		line[i]='\n';
		++i;
		line[i]='\0';
	}
	else
		return 0;
	return i;
}
