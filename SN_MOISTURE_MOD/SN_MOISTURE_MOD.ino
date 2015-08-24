// Soil Moisture Sensor Hygrometer example code
// Code author: http://electron-space.blogspot.com/2013/09/soil-moisture-sensor-soil-hygrometer.html 
//Interface Description (4-wire)
//VCC: 3.3v-5v
//GND: GND
//DO: Digital output interface (0 and 1) threshold taken from potentiometer
//AO: Analog output interface

 const int moistureAO = 1;
 const int moistureDO = 13;

 int AO = 0;
 int DO = 0;
 int tmp = 0;

 void setup (){
  Serial.begin(9600);
  Serial.println("Soil moisture sensor");
  pinMode(moistureAO, INPUT);
  pinMode(moistureDO, INPUT);
 }

 void loop ()
 {
  tmp=analogRead( moistureAO );
  if ( tmp != AO ) 
  {
    AO=tmp;
    Serial.print("A=");
    Serial.println(AO);
  }
  
  tmp=digitalRead( moistureDO );
  if ( tmp != DO ) 
  {
    DO=tmp;
    Serial.print("D=");
    Serial.println(DO);
  }
  
  
  delay (1000);

 }
 
 
