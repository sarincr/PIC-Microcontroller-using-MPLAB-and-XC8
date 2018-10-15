#define _XTAL_FREQ 8000000
#include <xc.h>

int main()
{
  TRISB0 = 0; // Defining All Pins of Port B as OUTPUT 
  while(1)
  {
    RB0 = 1;  //  Set Pin0 of Port B to HIGH
    __delay_ms(1000); //  Adding a 100 ms delay 
    RB0 = 0;  //  Set Pin0 of Port B to LO
    __delay_ms(1000); //  Adding a 100 ms delay 
  }
  return 0;
}