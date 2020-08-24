
const int button = 4 ;
const int lights = 2 ;
int buttonstate;


void setup()
{
pinMode(button,INPUT_PULLUP);
pinMode(lights,OUTPUT);
}
void loop(){
  buttonstate=digitalRead(button);
    if(buttonstate==HIGH)
  {
   digitalWrite(lights, LOW);
  delay(1);
  }
  else digitalWrite(lights, HIGH);
}
