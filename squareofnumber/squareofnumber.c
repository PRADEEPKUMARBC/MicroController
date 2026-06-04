# include<reg51.h>
void main()
{
	unsigned char i, num;
	unsigned int squares[10]={1,4,9,16,25,36,49,64,81,100};
	num = P0;
	for(i = 0; i < 10; i++)
	{
		if(num == i + 1)
		{
			P1 = squares[i];
			break;
		}
	}
}