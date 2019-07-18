
#include <xc.h>
#define _XTAL_FREQ 8000000
void main(void)
{
    TRISD= 0;   
    while(1)
    {
    LATD= 1;
    __delay_ms(1000); 
    LATD= 0;
    __delay_ms(1000); 
    
    }
    return;
}
