//Inetelligent Hydroponic Controller for Outdoor Farming
//Entry date 18.3.2014, Version 1.0
//^^^Fariba Mustafa^^^

//This work is licensed under the Creative Commons Attribution 3.0 Unported License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/ or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.

 © ⒻⒶⓇⒾⒷⒶ ⓂⓊⓈⓉⒶⒻⒶ
 
#include <Servo.h>

Servo watergate; // create korlam servo object

int servopin = 11; 
 
 int lowest = analogRead(A0);
void setup() {

  
 watergate.attach(servopin);
 
  watergate.write(180);
  
 delay(1000);
} 


void loop() {
 

  
  int present = analogRead(A0);
  
  
//  Serial.println(present);
 
  if (present <= lowest){
    
  watergate.write(0);
  delay(1000);
  
  }
  else{ 
    watergate.write(180);
    delay(1000);
  }
  delay(500);        
}
