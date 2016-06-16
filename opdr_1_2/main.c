#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int d = 0;
   while(true){
	   printf("Voer mij een karakter\n");
	   
	   char invoer = getchar();
	   
	   if(invoer >= 'A' && invoer <= 'Z'){
		   printf("Hoofdletter, dus hexadecimaal: %#x\n", invoer);
	   }
	   else if(invoer >= 'a' && invoer <= 'z'){
		   printf("Kleine letter, dus decimaal: %d\n", invoer);
	   }
	   else{
		   printf("Geen letter, dus zelfde teken: %c\n", invoer);
	   }
	   getchar();
   }
    return 0;
}