const int R = 8;
const int Y = 7;
const int G = 6;
const int button = 5;
const int interval = 500;
int state = 1;
int currenta;
int savedstate;
int i=0;



void setup()
{
  pinMode(R, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(button , INPUT_PULLUP);
}

void loop()
{

  int currenta = digitalRead(button);
 
 
   state = currenta;
  if(currenta == 0)
  {
  i++;
  }
  if (i ==0)
   {
      digitalWrite(R, HIGH);
      digitalWrite(Y, LOW);
      digitalWrite(G, LOW);
      delay(100);
  }
    else if(i==1)
    {
      digitalWrite(R, LOW);
       digitalWrite(Y, HIGH);
       digitalWrite(G, LOW);
      delay(100);
    }
    else if(i==2)
    {
      digitalWrite(R, LOW);
       digitalWrite(Y, LOW);
       digitalWrite(G, HIGH);
      delay(100);
    }
  else if(i==3)
    {
      digitalWrite(R, HIGH);
       digitalWrite(Y, HIGH);
       digitalWrite(G, HIGH);
    delay(100);
    }
  else if(i==4)
    {
      digitalWrite(R, LOW);
       digitalWrite(Y, LOW);
       digitalWrite(G, LOW);
    delay(1000);
    i=0;
    
    }
}
