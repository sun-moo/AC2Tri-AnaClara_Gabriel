#include <Servo.h>
Servo myservo;
int led=7;
int pir=2;

void setup()
{
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
  myservo.attach(10);
  Serial.begin(9600);

}

void loop()
{
  int val = digitalRead(pir);
  Serial.println(val);
  if(val==HIGH){
    digitalWrite(led,HIGH);
    myservo.write(70);
  }
  else{
    digitalWrite(led,LOW);
    myservo.write(10);
  }
  
  delay(10);
  

}

//////////

int buttonPin = 7;
int ledPin = 10;
int estadoButton = 0;
int buzzer = 6;


void setup()
{
  pinMode(ledPin , OUTPUT);
  pinMode (buttonPin , INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{
  estadoButton = digitalRead (buttonPin);
  if ( estadoButton == HIGH ) { 
    digitalWrite(ledPin , HIGH);
    tone(buzzer,262,5000);
    delay(5000);
  }
  else { 
    digitalWrite (ledPin , LOW ); 
  }
}
