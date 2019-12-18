#include<string.h>
#include<stdio.h>
#include<string.h>


int main()
{
	char String[100];
	fgets(String, 100, stdin);
	char ct[] = " ,.:;!?";
	char* word = strtok(String, ct);
	while (word != NULL) {
		printf("%s\n", word);
		word = strtok(NULL, ct);
	}
	return 0;
}