#define _XTAL_FREQ 8000000
#include <xc.h>
int main()
{
  TRISB0 = 0; //RB0 as Output PIN
  TRISD0 = 1; //RD0 as Input PIN
  TRISD1 = 1; //RD1 as Input PIN


  while(1)
  {
    if((PORTDbits.RD0== 1)&&(PORTDbits.RD1 == 1)) //If Switch Pressed
    {
      LATBbits.LATB0 = 1; //LED ON
    }
    else
    {
      LATBbits.LATB0 = 0; //LED OFF
    }
  }
  
  return 0;
}