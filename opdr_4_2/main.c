#include <stdio.h>


int read_matrix(const char *filename, int size, int matrix[][size]){
	FILE* binsudo;
	binsudo = fopen(filename, "r");
	int x = 0, y = 0;
	int buffer = fgetc(binsudo);
	
	while(buffer != EOF){
		if(buffer == 10){
			if(y != size){
				fclose(binsudo);
				return 1;
			}
			else{
				y = 0;
			}
			x++;
		}
		else{
			matrix[x][y] = (char) buffer;
			y++;
		}
		buffer = fgetc(binsudo);
	}
	
	if(x != size-1 || y != size){
		return 1;
	}
	else{
		return 0;
	}
	
	fclose(binsudo);
	return 0;
}





int main(int argc, char **argv)
{
	const  char *filename = "sudoku_bin.txt";
	FILE* sudobin;
	int buffer;
	int len = 0;
	sudobin = fopen(filename, "r");
	buffer = fgetc(sudobin);
	
	while(buffer != EOF){
		if(buffer == 10){
			break;
		}
		else{
			len++;
		}
		buffer = fgetc(sudobin);
	}
	fclose(sudobin);
	
	int matrix[len][len];
	int result;
	result = read_matrix(filename, len, matrix);
	
	if(result == 0){
		printf("Bestand bevat correcte data");
	}
	else if(result == 1){
		printf("Bestand bevat incorrecte data");
	}
	else{
		printf("Er is iets anders fout gegaan. Return is niet 1 of 0");
	}
	
	getchar();
	return 0;
}
