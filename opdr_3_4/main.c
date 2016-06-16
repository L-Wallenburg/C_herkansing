#include <stdio.h>

void transpose_matrix(int size, int matrix[][size]) {
	int matrix2[size][size];
	int i,j;
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			matrix2[i][j] = matrix[i][j];
		}
	}
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			matrix[i][j] = matrix2[0+j][j];
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char **argv){
	int matrix[][3] = {{1, 1, 1},
					   {2, 2, 2},
					   {3, 3, 3}};
	
	transpose_matrix(3, matrix);
	
	getchar();
	return 0;
}
