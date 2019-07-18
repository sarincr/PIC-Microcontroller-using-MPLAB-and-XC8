#define _XTAL_FREQ 8000000
#include <xc.h>
int main()
{
  TRISB = 0b00000001; // Defining Pin 0 of Port B as OUTPUT 
  while(1)
  {
    PORTB= 0b00000001;  //  Set Pin0 of Port B to HIGH
    __delay_ms(1000); //  Adding a 100 ms delay 
    PORTB = 0;  //  Set Pin0 of Port B to LO
    __delay_ms(1000); //  Adding a 100 ms delay 
  }
  return 0;
}