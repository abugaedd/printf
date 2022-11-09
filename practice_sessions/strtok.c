#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Edd abuga is a wonderful boy.";
	char d[] = "";

	char *portion = strtok(s, d);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL,d);
	}
	return (0);
}
