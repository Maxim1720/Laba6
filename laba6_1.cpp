#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	system("color C");
	char string[100];
	fgets(string, 100, stdin);
	int new_size=0;
	for (int i = 0;string[i] != '\0';i++) {
		if (string[i] >='0' && string[i] <= '9')
			new_size++;
	}
	new_size = strlen(string)+1 - new_size;
	char* new_string;
	new_string = (char*)calloc(new_size, sizeof(char));
	if (new_string) {
		int j = 0;
		for (int i = 0;string[i] != '\0';i++) {
			if (string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z') {
				new_string[j] = string[i];
				j++;
			}
		}
		puts(new_string);
	}
	free(new_string);
	return 0;
}

