#include <stdio.h>
#include <string.h>

int file_difference(FILE* file1, FILE* file2){
	int len, i;
	int count = 0;
	char bufx[100];
	char bufy[100];
	
	fgets(bufx,100,file1);
	fclose(file1);
	
	fgets(bufy,100,file2);
	fclose(file2);
	
	if(strlen(bufx) > strlen(bufy)){
		len = strlen(bufx);
	}
	else{
		len = strlen(bufy);
	}
	
	for(i=0; i<len; i++){
		if(bufx[i] != bufy[i]){
			fprintf(stderr, "De inhoud van de bestanden is ongelijk op byte: %d", count);
			return 1;
		}
		count++;
	}
	printf("De inhoud van de bestanden is gelijk.");
	return 0;
}

int main(int argc, char **argv){
	printf("Comment\/uncomment de regels in main() voor gelijke en ongelijke bestanden.\n\n");
	//file_difference(fopen("f1.txt", "r"), fopen("f2.txt", "r")); //files zijn gelijk
	file_difference(fopen("f1.txt", "r"), fopen("f3.txt", "r")); //files zijn ongelijk op byte 4
	
	getchar();
	return 0;
}
