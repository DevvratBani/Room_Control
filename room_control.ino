#include <SoftwareSerial.h>

SoftwareSerial blue(10,11);

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  blue.begin(9600); 
}

void loop() 
{
  if (blue.available()) 
  {
    char command = blue.read();

        if (command == '1')
    {
      digitalWrite(2, HIGH);
    }
    else if (command == '2')
    {
      digitalWrite(2, LOW);
    }
    else if (command == '3')
    {
      digitalWrite(3, HIGH);
    }
    else if (command == '4')
    {
      digitalWrite(3, LOW);
    }
    else if (command == '5')
    {
      digitalWrite(4, HIGH);
    }
    else if (command == '6')
    {
      digitalWrite(4, LOW);
    }
  }
}

