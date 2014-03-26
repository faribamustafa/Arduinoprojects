//Inetelligent Hydroponic Controller for Indoor Farming
//Entry date 20.3.2014, Version 1.0
//^^^Fariba Mustafa^^^

//This work is licensed under the Creative Commons Attribution 3.0 Unported License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/ or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.

 © ⒻⒶⓇⒾⒷⒶ ⓂⓊⓈⓉⒶⒻⒶ
 
int watergate = 8;


void setup() {                
  
  pinMode(watergate, OUTPUT);     
}


void loop() {
  digitalWrite(watergate, HIGH);   
  delay(2000);
  
  digitalWrite(watergate, LOW);   
  delay(5000);                     //prothom bar
  
  digitalWrite(watergate, HIGH);   
  delay(2000);
  
  digitalWrite(watergate, LOW);   
  delay(5000);                    //2nd bar


  digitalWrite(watergate, HIGH);  
  delay(2000);
    digitalWrite(watergate, LOW);   
  delay(5000);                    //3rd bar
  
  
  digitalWrite(watergate, HIGH);   //4th bar
  delay(1000);
   digitalWrite(watergate, LOW);   
  delay(2000);
  
  
                 
 
}
