/* 1.5.2 Character Counting */

/* while loop version */
/*
#include <stdio.h>
int main()
{
	long nc;
	nc = 0;
 
	while( getchar() != EOF)
	{
		++nc;
	}

	printf("you typed  %ld characters \n", nc);
}
*/

/* for loop version */
#include <stdio.h>
int main()
{
	double nc;
	
	for( nc = 0; getchar() != EOF; ++nc)
	{
		;
	}

	printf("you typed %.0f characters\n", nc);
	return 0;
}
