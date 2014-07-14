int sensor1Pin = 2;
int sensor2Pin = 5;
int motor1Pin = 3;
int motor2Pin = 4;
int motor3Pin = 10;
int motor4Pin = 11;
int enablePin = 9;
int enablePin__2=12;
//int ledPin = 13;
int sensor1Value = 0;
int sensor2Value = 0;       

void setup() {
  // initialize the LED pin as an output:
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(motor3Pin, OUTPUT);
  pinMode(motor4Pin, OUTPUT);
  Serial.begin(9600); 
  // initialize the pushbutton pin as an input:
  pinMode(sensor1Pin, INPUT); 
  pinMode(sensor2Pin, INPUT); 
  pinMode(enablePin, OUTPUT);
  pinMode(enablePin__2, OUTPUT);
  digitalWrite(enablePin, HIGH);
  digitalWrite(enablePin__2, HIGH); 
}

void loop(){
  // read the state of the pushbutton value:
  sensor1Value = digitalRead(sensor1Pin);
  Serial.println(sensor1Value);
  sensor2Value = digitalRead(sensor2Pin);
  Serial.println(sensor2Value);
  if (sensor1Value == 1 && sensor2Value == 1) {     
    // turn LED on:    
    digitalWrite(motor1Pin, HIGH);
      delay(1000);
    digitalWrite(motor1Pin, LOW);
      delay(1000);
    digitalWrite(motor3Pin, HIGH);
      delay(1000);
    digitalWrite(motor3Pin, LOW);
      delay(1000);  
    digitalWrite(motor2Pin, HIGH);
      delay(1000);
    digitalWrite(motor2Pin, LOW);
      delay(1000);
    digitalWrite(motor4Pin, HIGH);
      delay(1000);
    digitalWrite(motor4Pin, LOW);
      delay(1000);  
  } 
   if (sensor1Value == 1 && sensor2Value == 0) {     
    // turn LED on:    
    digitalWrite(motor1Pin, HIGH);
      delay(1000);
    digitalWrite(motor1Pin, LOW);
      delay(1000);
    digitalWrite(motor3Pin, HIGH);
      delay(1000);
    digitalWrite(motor3Pin, LOW);
      delay(1000);  
    digitalWrite(motor2Pin, LOW);
      delay(1000);
    digitalWrite(motor2Pin, HIGH);
      delay(1000);
    digitalWrite(motor4Pin, HIGH);
      delay(1000);
    digitalWrite(motor4Pin, LOW);
      delay(1000);  
  }
  if (sensor1Value == 0 && sensor2Value == 1) {     
    // turn LED on:    
    digitalWrite(motor1Pin, LOW);
      delay(1000);
    digitalWrite(motor1Pin, HIGH);
      delay(1000); 
    digitalWrite(motor2Pin, HIGH);
      delay(1000);
    digitalWrite(motor2Pin, LOW);
      delay(1000); 
  }  
}
