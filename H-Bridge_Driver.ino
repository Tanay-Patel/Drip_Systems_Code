const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;
const int ENA = 9;
const int ENB = 3;


void setup() {
  Serial.begin(9600);
}

void loop() {



  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT); 
  
  //control direction 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  
  //control speed 
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  
}
