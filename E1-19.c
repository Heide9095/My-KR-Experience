/* Exercise 1-19 */
/* Write a function reverse(s) that reverses the character string s.
 * Use it to wrte a program that reverses its input line at a time. */
 
/* To fix: revrite the reverse function to avoid an aditional string */

#include <stdio.h>

#define MAX 1000
#define MIN 0

int getline(char s[], int linelim);
void reverse(char s[]);

char line[MAX];

main()
{
	int len;

	while((len=getline(line, MAX)) > MIN)
		if(clean(line)>MIN)
		{
			reverse(line);
			printf("%s", line);
		}
		else
			printf("empty line");
	return 0;
}

int getline(char s[], int lim)
{
	int i, c;
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i]=c;

	if(c=='\n')
	{
		s[i]=c;
		++i;
	}

	s[i]='\0';
	return i;
}

int clean(char s[])
{
	int i = 0;
	while(s[i]!='\0' && i<MAX)
		++i;
	--i;
	while(i>=0 && (s[i] == '\n' || s[i]=='\t' || s[i]== ' '))
		--i;
	if(i>=0)
	{
		++i;
		s[i]='\n';
		++i;
		s[i]='\0';
		return i;
	}
	else
		return 0;


}

void reverse(char s[])
{
	char c[MAX];
	int i, n;
	/* copy string */
	for(i=0;s[i]!='\0';++i)
		c[i]=s[i];
	--i; /* backoff from '\0' */

	/* reverse input string using copy */
	for(n=0;i>=0;--i , ++n)
		s[n]=c[i];
	++n; /* insert '\0' */
	s[n]='\0';
}

