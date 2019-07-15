#define _XTAL_FREQ 8000000
#include <xc.h>
int main()
{
  TRISB1 = 0; // Defining Pin 0 of Port B as OUTPUT 
  while(1)
  {
    RB1 = 1;  //  Set Pin0 of Port B to HIGH
    __delay_ms(1000); //  Adding a 100 ms delay 
    RB1 = 0;  //  Set Pin0 of Port B to LO
    __delay_ms(1000); //  Adding a 100 ms delay 
  }
  return 0;
}