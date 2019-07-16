
#include <xc.h>
#define _XTAL_FREQ 8000000
void main(void)
{
    TRISDbits.TRISD1 = 0;  // Pin 0 of Port D as Output
    while(1)
    {
    LATDbits.LATD1 = 1;
    __delay_ms(1000); 
    LATDbits.LATD1 = 0;
    __delay_ms(1000); 
    
    }
    return;
}
