#include "HX711.h"
#include "SPI.h"      
#include "DMD.h" 
#include "TimerOne.h"
#include "Arial_black_16.h"
#include "ArialBlack14.h"

// you can remove the fonts if unused
#include "SystemFont5x7.h"
#define DISPLAYS_ACROSS 2   
#define DISPLAYS_DOWN 1       
/* change these values if you have more than one DMD connected */
DMD dmd(DISPLAYS_ACROSS,DISPLAYS_DOWN);

char arrText[5];

void ScanDMD()
{ 
  dmd.scanDisplayBySPI();
}

#define calibration_factor -11800 //This value is obtained using the SparkFun_HX711_Calibration sketch

#define DOUT  3
#define CLK  2

HX711 scale;

void setup(void) {
  Serial.begin(9600);
  Serial.println("HX711 scale demo");

  scale.begin(DOUT, CLK);
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0
  Serial.println("Readings:");
     Timer1.initialize( 5000 ); 
  /*period in microseconds to call ScanDMD. Anything longer than 5000 (5ms) and you can see flicker.*/
  
   Timer1.attachInterrupt( ScanDMD );  
/*attach the Timer1 interrupt to ScanDMD which goes to dmd.scanDisplayBySPI()*/

   dmd.clearScreen( true );            
/* true is normal (all pixels off), false is negative (all pixels on) */  
}

void loop(void) {
  Serial.print("Reading: ");
  float berat = scale.get_units(25);
  float hasil = berat*0.454;
  String berat2 = String (hasil, 1);
  berat2.toCharArray(arrText, 5);
  if(berat<=0.1)
  {
    berat=0.00;
    String berat2 = String (berat, 1);
    berat2.toCharArray(arrText, 5);    
   dmd.selectFont(ArialBlack14);
   dmd.drawString( 3,2, arrText, 5, GRAPHICS_NORMAL );
   dmd.drawString( 43,2, "Kg", 2, GRAPHICS_NORMAL );      
  }
  else {
   dmd.selectFont(ArialBlack14);
   dmd.drawString( 3,2, arrText, 5, GRAPHICS_NORMAL );
   dmd.drawString( 43,2, "Kg", 2, GRAPHICS_NORMAL );   
  }
  scale.power_down();
  delay(2000);
  scale.power_up();   

}
