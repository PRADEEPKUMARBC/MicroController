#include <reg51.h>

sbit pulse = P1^0;   

void delay200us(void);
void delay300us(void);

void main()
{
    while(1)
    {
        pulse = 1;       
        delay200us();    

        pulse = 0;       
        delay300us();    
    }
}

void delay200us(void)
{
    unsigned int i;
    for(i = 0; i < 60; i++);
}

void delay300us(void)
{
    unsigned int i;
    for(i = 0; i < 90; i++);
}