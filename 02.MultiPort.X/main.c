#define _XTAL_FREQ 8000000
#include <xc.h>
int main()
{
  TRISB = 0; // Defining All Pins of Port B as OUTPUT 
  TRISD= 0; // Defining All Pins of Port B as OUTPUT 
  while(1)
  {
    RB1 = 1;  //  Set Pin0 of Port B to HIGH
    RD1 = 1;  //  Set Pin0 of Port D to HIGH
    __delay_ms(1000); //  Adding a 100 ms delay 
    RB1 = 0;  //  Set Pin0 of Port B to LO
    RD1 = 0;  //  Set Pin0 of Port B to LO
    __delay_ms(1000); //  Adding a 100 ms delay 
  }
  return 0;
}