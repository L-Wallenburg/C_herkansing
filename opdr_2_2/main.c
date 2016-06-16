#include <stdio.h>

int main(int argc, char **argv)
{
	char a[80];
	char b[80];
	
	int i, len, tel;

	tel = 0;
	printf("Voer een regel tekst in: ");
	fgets(a,81,stdin);
	printf("Voer nog een regel in om mee te vergelijken: ");
	fgets(b,81,stdin);
	
	if(strlen(a) > strlen(b)){
		len = strlen(a);
	}
	else{
		len = strlen(b);
	}
	
	for(i=0; i<len; i++){
		if(a[i] == b[i]){
			tel++;
		}
		else{
			printf("De strings verschillen op positie %d.\n", tel);
			getchar();
			return 0;
		}
	}
	
	printf("De strings zijn hetzelfde.");

getchar();
return 0;
}
