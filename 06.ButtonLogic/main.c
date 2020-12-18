#include <htc.h>
#define _XTAL_FREQ 8000000
void main()
{
  TRISD0 = 1;  
  TRISB0 = 0; 
  while(1)
  {
	if(RD0 == 0)       
		{
		RB0 = 1;
		}
	if(RD0 == 1)       
		{
		RB0 = 0;
		}
	}
}