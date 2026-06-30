#include <reg51.h>

unsigned char ReceivedData;
unsigned char i, count;

sbit EVEN_LED = P1^0;
sbit ODD_LED  = P1^1;

void UART_Init(void);
void Delay(void);

void main(void)
{
    UART_Init();

    while(1)
    {
        while(RI == 0);          // Wait for received data

        RI = 0;
        ReceivedData = SBUF;

        count = 0;

        for(i = 0; i < 8; i++)
        {
            if(ReceivedData & (1 << i))
                count++;
        }

        if(count % 2 == 0)       // Even parity
        {
            EVEN_LED = 1;
            ODD_LED  = 0;
            Delay();

            EVEN_LED = 0;
            Delay();
        }
        else                     // Odd parity
        {
            ODD_LED = 1;
            EVEN_LED = 0;
            Delay();

            ODD_LED = 0;
            Delay();
        }
    }
}

void UART_Init(void)
{
    TMOD = 0x20;      // Timer1 Mode2
    TH1  = 0xFD;      // 9600 baud @ 11.0592 MHz
    TL1  = 0xFD;
    SCON = 0x50;      // UART Mode1
    TR1  = 1;
}

void Delay(void)
{
    unsigned int i,j;

    for(i = 0; i < 200; i++)
    {
        for(j = 0; j < 255; j++);
    }
}