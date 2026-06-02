#include <reg51.h>
void main(){
	unsigned int i,sum;
	P0 = 0x00;
	sum = P0;
	for(i=0; i<10; i++)
	{
		sum = sum + i;
		P0 = sum;
	}
	P1 = sum;
}