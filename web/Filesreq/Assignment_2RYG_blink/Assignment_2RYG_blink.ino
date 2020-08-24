//controlling 3 LEDs 
// Red - D8
// Yellow - D7
//Green - D6

const int R = 8;
const int Y = 7;
const int G = 6;
const int interval = 500;


void setup()
{
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop()
{
  //turn on R, Y, G in sequence 
  digitalWrite(R, HIGH);
  delay(interval);
  digitalWrite(Y, HIGH);
  delay(interval);
  digitalWrite(G, HIGH);
  delay(interval);
  
  //turn of LED in sequence
  digitalWrite(R, LOW);
  delay(interval);
  digitalWrite(Y, LOW);
  delay(interval);
  digitalWrite(G, LOW);
}
