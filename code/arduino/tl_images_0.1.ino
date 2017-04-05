#include <SPI.h>

//library for OLEDs @ https://github.com/sumotoy/SSD_13XX
#include <SSD_13XX.h>

//converted image files
#include "_images/swastika.c"
#include "_images/dt_red1.c"

//pin numbers for SSD_13XX OLED TFTs
#define __CS   4
#define __DC  5

SSD_13XX tft1 = SSD_13XX(__CS, __DC);

void setup()
{
  tft1.begin();
  tft1.setRotation(0);
}

void loop()
{
    tft1.drawImage(0, 0, &dt_red1);
    delay(3000);
    tft1.drawImage(0, 0, &swastika);
    delay(3000);

}
