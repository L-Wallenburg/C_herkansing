#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int n, i;
	
	while(true){
		
		printf("Geef mij een getal tussen 0 en 100.\n");
		
		while(!scanf("%d", &n) || n <= 0 || n >= 100){
			printf("Je hebt iets fout gedaan.\n");
			while(getchar() != '\n');
			printf("Probeer het nog eens\n");
		}
		
		for(i=0; i<11; i++){
			printf("%5d maal %5d is %5d\n", i, n, i*n);
		}
		
	}
	return 0;
}
