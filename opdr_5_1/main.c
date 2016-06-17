#include <stdbool.h>
#include <stdio.h>

bool is_sorted(int a[], int size){
	if (a == NULL || size < 2){
		return true;
	}
	else if (a[size - 2] > a[size - 1]){
		return false;
	}
	return is_sorted(a, size-1);
}

int main(int argc, char *argv){
	int gesorteerd[3] = {1, 2, 3};
	int ongesorteerd[3] = {2, 1, 3};
	
	if(is_sorted(gesorteerd, 3) == true){
		printf("Array 1 is gesorteerd.\n");
	}
	else{
		printf("Array 1 is niet gesorteerd.\n");
	}
	if(is_sorted(ongesorteerd, 3) == true){
		printf("Array 2 is gesorteerd.\n");
	}
	else{
		printf("Array 2 is niet gesorteerd.\n");
	}
	
	getchar();
	return 0;
}