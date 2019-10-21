const int switch1=2;
const int switch2=3;
int sensorpin=A0;
int sensorvalue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int reading1 = digitalRead(switch1);
  int reading2 = digitalRead(switch2);
  sensorvalue = analogRead(sensorpin);
  Serial.println(sensorvalue);
  delay(500);
  if(sensorvalue<=300){
    if(reading1==HIGH || reading2==HIGH){
      
  digitalWrite(13, HIGH);
  delay(1000); 
    }
    
   else if(reading1==HIGH && reading2==HIGH){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
}
  }
}
