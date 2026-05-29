#include <reg51.h>
void main()
{
	unsigned int i, n, fact;
	n = 0;
	fact = 1;
	for (i=1; i<=n; i++)
	{
		fact = i * fact;
		P1 = fact;
	}
	P2 = fact;
}