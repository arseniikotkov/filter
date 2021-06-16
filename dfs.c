#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	char str[1000], *tok = str;
	for(i = 0; i < 19; i++)
	{
		fgets(str, 1000, stdin);
		tok = strtok(str, " ");
		while(tok != NULL)
		{
			tok = strtok(NULL, " ");
		}
	}
	
	return 0;
}
