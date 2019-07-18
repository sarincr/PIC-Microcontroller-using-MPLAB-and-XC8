
#include <xc.h>                    

int main(void)
{
    TRISDbits.TRISD2 = 1 ;     
    TRISBbits.TRISB2 = 0 ;      
    TRISD = 0xFF;                       
    while(1)
    {
        if(PORTDbits.RD2==0)
        {
            LATBbits.LATB2=0;
        }
        if(PORTDbits.RD2==1)
        {
            LATBbits.LATB2=1;
        }
    }
}



