#include <stdio.h>
#include <stdlib.h>

int getIntegers(char *filename, int size, int a[size]) {
	FILE* nummers = fopen(filename, "r");
	int buffer = fgetc(nummers);
	int counter = 0;
	int char_length = 0;
	char temp[size];
	int result;
	
	while (buffer != EOF){
		if (isdigit(buffer) != 0 || buffer == 45) {
			char c = buffer;
			strncat(temp, &c, 1);
			char_length++;
		}
		else{
			result = (int) strtol(temp, (char **) NULL, 10);
			if(result != 0){
				a[counter] = result;
				counter++;
			}
			char_length = 0;
			strcpy(temp, "");
		
		}
		buffer = fgetc(nummers);
	}
	result = (int) strtol(temp, (char **) NULL, 10);
	if(result != 0){
		a[counter] = result;
		counter++;
	}
	fclose(nummers);
	return counter;
}


int main(void){
	int a[100];
	int n = getIntegers("getallen.txt", 100, a);
	int i = 0;
	if (n > 0){
		puts("gevonden getallen:");
		for (i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		putchar('\n');
		getchar();
		return EXIT_SUCCESS;
	}
}