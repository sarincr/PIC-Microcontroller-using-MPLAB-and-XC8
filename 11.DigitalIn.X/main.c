
#include <xc.h>                    

int main(void)
{
    TRISDbits.TRISD2 = 1 ;     
    TRISBbits.TRISB2 = 0 ;      
    TRISD = 0xFF;                       
    while(1)
    {
        LATBbits.LATB2 = PORTDbits.RD2 ;
    }
}



