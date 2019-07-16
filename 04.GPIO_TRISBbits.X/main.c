
#include <xc.h>
#define _XTAL_FREQ 8000000
void main(void)
{
    TRISDbits.TRISD0 = 0;  // Pin 0 of Port D as Output
    while(1)
    {
    RD1 = 1;  //  Set Pin0 of Port D to HIGH
    __delay_ms(1000); //  Adding a 100 ms delay 
    RD1 = 0;  //  Set Pin0 of Port B to LO
    __delay_ms(1000); //  Adding a 100 ms delay 
    }
    return;
}
