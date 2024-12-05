#include <stdio.h>

int main()
{
	char first_name[7];
	char last_name[5];

	printf("enter the first names:\n");
	scanf("%s", first_name);
	printf("enter the last names:\n");
	scanf("%s", last_name);
	printf("\nfirst name :: %s\n", first_name);
	printf("\nlast name :: %s\n", last_name);
}