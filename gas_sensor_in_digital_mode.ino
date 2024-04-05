const int buzzer=8; //Connect buzzer to digital pin 8
const int sensor=7; //Connect gas sensor to analog pin 7

void setup() 
{  
    Serial.begin(9600); //set the serial port to 9600
pinMode(buzzer, OUTPUT); //set buzzer as output
  pinMode(sensor, INPUT); //set gas sensor as input
   
}

void loop() {
 
int sensor_value=digitalRead(sensor);  //read the gas sensor value at pin A2 
if(sensor_value) //if sensor value is 1
  
{
 tone(buzzer,1000,100); //ON the buzzer
  Serial.print("Smoke deteted! sensor value:  "); //print on serial monitor
  Serial.println(sensor_value);
}
else //if sensor value is 0
{
  noTone(buzzer); //OFF the buzzer
  Serial.print("No smoke!! sensor value:"); //print on seriall monitor
  Serial.println(sensor_value);
}
delay(1000); //wait
}
  
