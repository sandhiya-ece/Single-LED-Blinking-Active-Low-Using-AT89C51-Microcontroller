#include<reg51.h>
sbit LED=P2^0;
unsigned int i;
void delay()
{
for(i=0;i<=1000;i++);
}
void main()
{
while(1)
{
LED=1;
delay();
LED=0;
delay();
}
}

