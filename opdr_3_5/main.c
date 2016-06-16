#include <stdio.h>

int main(int argc, char **argv)
{
	int get_bit(char ch, int n){
		int b,i;
		for(i=0; i<8; i++){
			if(i == n){
				if(ch & 0x80){
					b = 1;
				}
				else{
					b = 0;
				}
			}
			ch <<= 1;
	}
		return b;
	}
	
	char ch = 'k';
	int n = 7;
	printf("De bitwaarde van bit %d is: %d", n, get_bit(ch, n));
	
	getchar();
	return 0;
}
