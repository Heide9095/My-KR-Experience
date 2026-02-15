/* Exercise 1-17 */
/* print all inputlines longer than 10 characters */

#include <stdio.h>

#define MAX 100 /* maximum line lenght */
#define MIN 10	/* minimum line to print */

int getline(char line[], int maxlenght);	/* declaration of the  function to get lines */

main()
{
	int len;
	char line[MAX];

	while((len = getline(line, MAX)) > 0)
		if(len > MIN)
			printf("%s", line);
	return 0;
}

int getline(char s[], int maxlenght)
{
	int i, c;

	for(i=0; i<maxlenght-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if(c=='\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

