int sensor = A0;
int led = 12;
int sensorValue = 0;
int state;
int flag=0; 

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  

//BLUETOOTH SENSOR ACTIVATION CODE

   if(Serial.available() > 0)
    {    
      state = Serial.read();  
      
   }  
    if (state == '0')
    {
       digitalWrite(led, HIGH);
    }
    else if (state == '1')
    {                 
      digitalWrite(led, LOW);
    }

 // IR SENSOR ACTIVATION CODE
    
  if (digitalRead(7)== LOW)
  {
    digitalWrite(8,HIGH);
    
    delay(1000);
    digitalWrite(8,LOW);
  }
  else 
  {
    
    digitalWrite(8,LOW);
    delay(10);
    
  }
}
