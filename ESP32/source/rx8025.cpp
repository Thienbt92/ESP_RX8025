#include "rx8025.h"

void RX8025_init(int sda_pin,int scl_pin,uint32_t _frequency)
{
  Wire.begin(sda_pin,scl_pin,100000);  
}
