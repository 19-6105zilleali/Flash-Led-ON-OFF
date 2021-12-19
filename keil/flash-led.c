
// Include Library 
#include<reg51.h>
// It's Important For Program
void delay(void);
void main (void)
{
while(1)
{
P2=~0x01; // This is for Who Led Is On
delay();
P2=~0x00;
delay();
}
}
void delay(void)
{
int j;
int i;
for (i=0;i<10;i++)
{
for (j=0;j<10000;j++)
{
}
}
}