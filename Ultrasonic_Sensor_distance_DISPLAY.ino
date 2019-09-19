#define echoPin 11
#define trigPin 12
long duration, Distance;
void setup()
{
  Serial.begin (9600);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
}
 void loop()
 {

  digitalWrite (trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite (trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
  Distance = duration*0.034/2;

  Serial.print ("Distance:");
  Serial.println(Distance);
  delay(50);
 } 
