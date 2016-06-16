#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int n, i, q;

	while(true){
		
		printf("Geef een getal tussen 0 en 81.\n");

		while(!scanf("%d", &n) || n <= 0 || n >= 81){
			printf("Je hebt iets fout gedaan.\n");
			while(getchar() != '\n');
			printf("Probeer het nog eens\n");
		}
		
		for(i=0 ; i<n; i++){
			for(q=0; q<i; q++){
				printf("*");
			}
			printf("\n");
		}
		for(i=(n-1); i>-1; i--){
			for(q=i; q>-1; q--){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
