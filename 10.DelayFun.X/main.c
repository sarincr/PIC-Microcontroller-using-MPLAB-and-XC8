
#include <xc.h>
#define _XTAL_FREQ 8000000
void delayms()
{
    for(int i=0;i<1000;i++)
    {
         for(int j=0;j<1000;j++);
    }
}
void main(void)
{
    TRISD= 0;   
    while(1)
    {
    LATD= 1;
    delayms(1000); 
    LATD= 0;
    delayms(1000); 
    }
    return;
}
