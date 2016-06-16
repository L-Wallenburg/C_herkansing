#include <stdio.h>
#include <stdbool.h>

int count(int a[], int size, int n) {// size is de lengte van a
	int tel = 0;
	int i;
	for(i=0; i<size; i++){
		if(a[i]==n){
			tel++;
		}
	}
	return tel;
}

bool valid_row(int a[], int size){ // size is de lengte van a
	if(count(a, 10, 0) != count(a, 10, 1)){
		printf("De array voldoet niet aan de eisen, want het aantal 1\'en en 0\'en is ongelijk.");
		return false;
	}
	int i;
	int consecutive = 0;
	int previous = 2;
	for(i=0; i<size; i++){
		if((a[i]<0) || (a[i]>1)){
			printf("De array voldoet niet aan de eisen, want er zit een andere int dan 1 of 0 in.");
			return false;
		}
		if(a[i] == previous){
			consecutive++;
		}
		else{
			consecutive = 0;
		}
		if((a[i]==previous) && (consecutive==2)){
			printf("De array voldoet niet aan de eisen, want er is een rij van minstens drie 1\'en of 0\'en achter elkaar.");
			return false;
		}
		previous = a[i];
	}
	printf("De array voldoet aan de eisen.");
}

int main(int argc, char **argv){
	int b[10] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
	valid_row(b, 10);
	
	getchar();
	return 0;
}
