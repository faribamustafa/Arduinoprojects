//Inetelligent Hydroponic Controller for Outdoor Farming
//Entry date 18.3.2014, Version 1.0
//^^^Fariba Mustafa^^^

//This work is licensed under the Creative Commons Attribution 3.0 Unported License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/ or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.

 © ⒻⒶⓇⒾⒷⒶ ⓂⓊⓈⓉⒶⒻⒶ
 

  
#include <Servo.h>

Servo watergate; // create korlam servo object

int servopin = 11; 
 
 
void setup() {

  //Serial.begin(9600);
 watergate.attach(servopin);
 
  watergate.write(180);
  
 delay(1000);
} 


void loop() {
 

  
  int present = analogRead(A0);
  
  
//  Serial.println(present);
 
  if (present > 0 && present <= 100 ){
    
  watergate.write(0);
  delay(1000);
  
  }
  
  if ( present > 100 && present <= 250){
    watergate.write(45);
    delay(1000);
  }
  
 if ( present > 250 && present <= 800){
    watergate.write(90);
    delay(1000);
  }
if ( present > 800 ){
    watergate.write(180);
    delay(1000);
  }
 
  
  delay(300);        // delay in between reads for stability
}
