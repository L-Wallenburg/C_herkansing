#include <stdio.h>
#include <stdlib.h>
/*
 * new line = 10
 * tab 		= 9
 * spatie	= 32
 */
void compress(char* src_filename, char* dest_filename){
	FILE* read = fopen(src_filename, "r");
	FILE* write = fopen(dest_filename, "w");
	int buffer = fgetc(read);
	int previous;
	
	while(buffer != EOF){
		while(previous == 10 && (buffer == 9 || buffer == 10 || buffer == 32)){
			buffer = fgetc(read);
		}
		
		fputc(buffer, write);
		previous = buffer;
		buffer = fgetc(read);
	}
	fclose(read);
	fclose(write);
	printf("Done.\n");
	getchar();
	
}

int main(int argc, char **argv)
{
	compress("opdracht_4_3.c","opdracht_4_3_compressed.c");
	return EXIT_SUCCESS;
}
