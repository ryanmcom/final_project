
int const potentiometerPin = A0;
int potentiometer;
int volume;
int LEDone = 8;
int LEDtwo = 7;
int LEDthree = 6;
int LEDfour = 5;
int LEDfive = 4;
int LEDsix = 3;
int LEDseven = 2;
int LEDeight = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDone, OUTPUT);
  pinMode(LEDtwo, OUTPUT);
  pinMode(LEDthree, OUTPUT);
  pinMode(LEDfour, OUTPUT);
  pinMode(LEDfive, OUTPUT);
  pinMode(LEDsix, OUTPUT);
  pinMode(LEDseven, OUTPUT);
  pinMode(LEDeight, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometer = analogRead(potentiometerPin);
  volume = map(potentiometer,0,1023,0,8);
  Serial.println(volume);



if(volume > 8){
    digitalWrite(LEDeight, HIGH);
    digitalWrite(LEDseven, HIGH);
    digitalWrite(LEDsix, HIGH);
    digitalWrite(LEDfive, HIGH);
    digitalWrite(LEDfour, HIGH);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 7){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, HIGH);
    digitalWrite(LEDsix, HIGH);
    digitalWrite(LEDfive, HIGH);
    digitalWrite(LEDfour, HIGH);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
else if(volume > 6){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, HIGH);
    digitalWrite(LEDfive, HIGH);
    digitalWrite(LEDfour, HIGH);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 5){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, LOW);
    digitalWrite(LEDfive, HIGH);
    digitalWrite(LEDfour, HIGH);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 4){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, LOW);
    digitalWrite(LEDfive, LOW);
    digitalWrite(LEDfour, HIGH);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 3){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, LOW);
    digitalWrite(LEDfive, LOW);
    digitalWrite(LEDfour, LOW);
    digitalWrite(LEDthree, HIGH);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 2){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, LOW);
    digitalWrite(LEDfive, LOW);
    digitalWrite(LEDfour, LOW);
    digitalWrite(LEDthree, LOW);
    digitalWrite(LEDtwo, HIGH);
    digitalWrite(LEDone, HIGH);
    
  }
  else if(volume > 1){
    digitalWrite(LEDeight, LOW);
    digitalWrite(LEDseven, LOW);
    digitalWrite(LEDsix, LOW);
    digitalWrite(LEDfive, LOW);
    digitalWrite(LEDfour, LOW);
    digitalWrite(LEDthree, LOW);
    digitalWrite(LEDtwo, LOW);
    digitalWrite(LEDone, HIGH);
  }
}
