#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int x[10];
	int i, e, n;
	while(true){
		e = 0;
		n = 0;
		for(i = 0; i < 10; i++){
			int rnd = rand();
			if (rnd % 2 == 0) {
				x[i] = 0;
				n += 1;
			}
			else{
				x[i] = 1;
				e += 1;
			}
			printf("%d ", x[i]);
		}
		
		if(e == n){
			printf("\nHet aantal 1\'en en 0\'en is gelijk!\n");
		}
		else if(e > n){
			printf("\nHet aantal 1\'en is groter dan het aantal 0\'en.\n");
		}
		else if(e < n){
			printf("\nHet aantal 0\'en is groter dan het aantal 1\'en.\n");
		}
		getchar();
	}
	return 0;
}
