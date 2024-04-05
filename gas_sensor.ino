const int buzzer=8; //Connect buzzer to digital pin 8
const int sensor=A2; //Connect gas sensor to analog pin A2
const int smoke_threshold=400; //set to threshold value

void setup() 
{  
    Serial.begin(9600); //set the serial port to 9600
pinMode(buzzer, OUTPUT); //set buzzer as output
  pinMode(sensor, INPUT); //set gas sensor as input
   
}

void loop() {
 
int sensor_value=analogRead(sensor);  //read the gas sensor value at pin A2 
if(sensor_value>smoke_threshold) //compare sesnor value with threshold value
  
{
 tone(buzzer,1000,100); //ON the buzzer
  Serial.print("Smoke detected! sensor value:  "); //print on serial monitor
  Serial.println(sensor_value);
}
else
{
  noTone(buzzer); //OFF the buzzer
  Serial.print("No smoke!! sensor value:"); //print on serial monitor
  Serial.println(sensor_value);
}
delay(1000); //wait
}
  
