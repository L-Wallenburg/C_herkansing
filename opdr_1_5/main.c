#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i;
	int c;
	bool negative = false;
	printf("Vul een character in : ");
	c = getchar();
	while(c == 10 || c == 43 || c == 45 && (c >=48 || c <= 57)) {
		if(c==45){
			negative = true;
		}
		c = getchar();
	}
	
	if(negative==true){
		i = c*-1+48;
	}
	else{
		i = c-48;
	}

	printf("het ingevoerde getal is %d \n", i);
	
	getchar();
	getchar();
	return 0;
}