int red = 8;
int yellow = 7;
int green = 6;
int button = 5;
int buzzer = 4;
bool state = false;
bool initial = false;
void setup() {
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
pinMode (button,INPUT_PULLUP);
pinMode(buzzer,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
   {           //int
 state = !(digitalRead(button));

     if (state|initial) {
         initial = true;
     }
        else{
      initial = false;    
      }

     if (initial){
          digitalWrite(red,HIGH);
          delay(15000);
          tone(buzzer,1000);
          delay(2000);          //delay for buzzer
          noTone(buzzer);
          digitalWrite(red,LOW);
   
          digitalWrite(green,HIGH);
          delay(15000);
          tone(buzzer,1000);            //the
          delay(2000);
          noTone(buzzer);
          digitalWrite(green,LOW);

   
          digitalWrite(yellow,HIGH);
          delay(3000);
          tone(buzzer,1000);
          delay(1000);
          noTone(buzzer);
          digitalWrite(yellow,LOW);
          }

      else {
         digitalWrite(red,HIGH);
         delay(500);
         digitalWrite(red,LOW);
         delay(500);
     }
}


  // put your main code here, to run repeatedly:
