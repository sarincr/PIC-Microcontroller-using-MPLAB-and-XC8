#include <xc.h>                                        //PIC hardware mapping
#define _XTAL_FREQ 500000                               //Used by the XC8 delay_ms(x) macro

void main(void) 
{
    unsigned int delay;                                 //create a variable of 16 bits in length
    
    TRISC = 0;                                          //using pin as output
    delay = 11250;
    while (1) 
    {       
        while(delay-- != 0)continue;                    //each instruction is 8us (1/(500KHz/4))
        PORTCbits.RC1 ^= 1;                            //toggle the LED
        delay = 11250;                                  //assign a value since it is at 0 from the delay loop
    }
}
