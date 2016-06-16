#include <stdio.h>

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

int main(int argc, char **argv)
{
	
	
	
	int b[10] = {1, 5, 6, 7, 6, 8, 9, 6, 5, 6};
	int x = 6;
	printf("Het getal %d komt %d keer voor in de array.", x, count(b, 10, x));
	
	getchar();
	return 0;
}
