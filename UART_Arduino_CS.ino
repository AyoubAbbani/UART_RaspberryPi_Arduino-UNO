#include <SoftwareSerial.h>
#include <stdlib.h>

//Initialize the Serial Communication 


//Code Initialization Starts
void setup() {
  //Setting the Baud to 9600 Bits/Second
  Serial.begin(9600);

}

void loop() {

delay(300);
  char num;
  //If the data is available serially, then receive it
  if(Serial.available()>0){
    num = Serial.read();
    
      Serial.print("data =  \t ");Serial.println(num);  
      delay(10);
      //Serial.println("sending..  \t "); Serial.write(20);
      
    }
    
    

    
  }
