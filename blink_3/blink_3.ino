//Module 3 - Blink LED
// Initialize led pin number
int led = 3;
void setup()
{
  pinMode(led, OUTPUT); //LED control set for pin 3
  
}

 void loop()
 {
   for ( int a = 0; a < 5 ; a++ )
   {
     digitalWrite(led,HIGH);
     delay(100);
     digitalWrite(led,LOW);
     delay(100);
   }
   for ( int b = 0; b < 5 ; b++ )
   {
     digitalWrite(led,HIGH);
     delay(500);
     digitalWrite(led,LOW);
     delay(500);
   }
  }
