#define sensor 26
#define led 2
#define S0 25
#define S1 33
#define S2 32
int adc = 0;
void setup() {
  Serial.begin(9600);
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(S2, LOW);
  digitalWrite(S1, LOW);
  digitalWrite(S0, HIGH);
  adc = analogRead(sensor);
  Serial.println(String("read: ") + adc);
  delay(100);

  if (adc >= 500){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

}

// void sensor1(){
//   digitalWrite(S2, LOW);
//   digitalWrite(S1, LOW);
//   digitalWrite(S0, HIGH);
//   adc = analogRead(sensor);
//   Serial.println(String("read: ") + adc);
//   delay(100);
// }