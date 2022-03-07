// A0 is de inputpin voor de lichtgevoelige weerstand LDR
// A0 is een analoge ingang
int LDR_In = A0;

// variabele lichtHoeveelheid
int lichtHoeveelheid;

int veel = (782 * 0.75);
int gewoon = (532 * 0.50);
int weinig = (388 * 25);

// leds
uint8_t Led1 = D3; //Led op D3
uint8_t Led2 = D5; //Led op D5
uint8_t Led3 = D6; //Led op D6

void setup() {
  Serial.begin(9600); 
  pinMode(Led1, OUTPUT);
}

void loop(){
  // lees de input waarde van de LDR
  lichtHoeveelheid = analogRead(LDR_In);

  if ( lichtHoeveelheid <600){
  // donker, Led aan
  digitalWrite(Led1, veel);
  }
  else{
    // licht, led uit
    digitalWrite(Led1, weinig);
  }


  // schrijf de waarde naar de Serial Monitor
  Serial.println(lichtHoeveelheid);
  delay(1000); // wacht 1 sec
}
