#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	char reverse[81];
	int len = 0;
	int i;
	int x = 1;
	char mem;
	
	printf("Met indices wordt de regel omgedraaid.\nMet pointers wordt de regel weer teruggedraaid.\n");
	
	printf("Voer een regel tekst in: ");
	fgets(reverse,81,stdin);
	len = strlen(reverse);
	
	printf("\nMet indices omdraaien: ");
	for(i=0; i<(len/2); i++){
		mem = reverse[i];
		reverse[i] = reverse[len-x];
		reverse[len-x] = mem;
		x++;
	}
	printf("%s", reverse);
	
	printf("\n\nMet pointers terugdraaien:\n");
	char *start = &reverse[0];
	char *end = &reverse[len-1];
	while(start<end){
		mem = *start;
		*start++ = *end;
		*end-- = mem;
	}	
	printf("%s", reverse);
	
	getchar();
	return 0;
}
