#include <stdio.h>
#include <stdbool.h>

bool equal_rows(int a1[],int a2[], int size) {// size is de lengte van a1 en van a2
	int i;
	for(i=0; i<size; i++){
		if(a1[i] != a2[i]){
			return false;
		}
	}
	return true;
}

int main(int argc, char **argv){
	int b1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int b2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	
	if(equal_rows(b1, b2, 10)==1){
		printf("De int arrays zijn gelijk aan elkaar.");
	}
	else if(equal_rows(b1, b2, 10)==0){
		printf("De int arrays zijn niet gelijk aan elkaar.");
	}
	else{
		printf("Er is iets fout gegaan. Probeer het opnieuw.");
	}
	
	getchar();
	return 0;
}
