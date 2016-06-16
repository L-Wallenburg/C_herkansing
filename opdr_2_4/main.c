#include <stdio.h>

int main(int argc, char **argv)
{
	typedef struct ding{
		int nummer;
		char naam[20];
		double gewicht, lengte;
	} DING;
	DING geval;
	printf("We gaan een DING maken.\n");
	printf("Geef DING eerst een naam: ");
	scanf("%s", &geval.naam);
	printf("\nGeef %s nu een nummer: ", geval.naam);
	scanf("%d", &geval.nummer);
	printf("\nGeef %s nu een gewicht in kg: ", geval.naam);
	scanf("%lf", &geval.gewicht);
	printf("\nGeef %s nu een lengte in m: ", geval.naam);
	scanf("%lf", &geval.lengte);

	printf("\nHet nummer is: %d\nDe naam is: %s\nHet gewicht is: %lf kg\nDe lengte is: %lf m\n", geval.nummer, geval.naam, geval.gewicht, geval.lengte);
	
	getchar();
	getchar();
	return 0;
}
