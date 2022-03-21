//# Analog Output
int sensorpin = A0;
int lowLimit = 100;
int highLimit = 700;
int read;

void setup() {
  pinMode(sensorpin, INPUT);
  digitalWrite(sensorpin, LOW);
  Serial.begin(9600);
}
void loop(){
  int moisture = analogRead(sensorpin);
  Serial.print("Analog Output: ");
  Serial.println(moisture);
  if (moisture < lowLimit){
    Serial.println("Soil is too Wet");
    
  }
  else if (moisture >= lowLimit && moisture < highLimit){
    Serial.println("Soil is Perfect!");
  }
  else {
    Serial.println("Soil is Dry...");
  }
  delay(3000);
  Serial.println();
  
}
