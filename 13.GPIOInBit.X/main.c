#define _XTAL_FREQ 8000000
#include <xc.h>
int main()
{
  TRISB0 = 0; //RB0 as Output PIN
  TRISD0 = 1; //RD0 as Input PIN

  RB0 = 0; //LED Off

  while(1)
  {
    if(RD0 == 0) //If Switch Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(3000); //3 Second Delay
      RB0 = 0; //LED OFF
    }
  }
  return 0;
}