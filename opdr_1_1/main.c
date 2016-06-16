#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int x, y, z;

	while(true){
	
   
	printf("Voer mij twee getallen\n");
   
	while(scanf("%d %d",&x,&y) != 2) {
		printf("Nee, twee getallen!\n");
		while(getchar() != '\n');
		printf("Voer mij een getal\n");
	}
	
	z = x + y;
	printf("%d + %d = %d\n", x, y, z);


	}
	return 0;
}