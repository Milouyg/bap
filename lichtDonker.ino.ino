// A0 is de inputpin voor de lichtgevoelige weerstand LDR
// A0 is een analoge ingang
int LDR_In = A0;

// variabele lichtHoeveelheid
int lichtHoeveelheid;
int hoogsteLDR = 737;
int laagsteLDR = 313;

// licht sterkte
int volt1 = (0.75 * hoogsteLDR);
int volt2 = (0.50 * hoogsteLDR);
int volt3 = (0.25 * hoogsteLDR);

// leds
uint8_t Led1 = D3; //Led op D3
uint8_t Led2 = D5; //Led op D5
uint8_t Led3 = D6; //Led op D6

void setup() {
  Serial.begin(9600); 
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
}

void loop(){
  // lees de input waarde van de LDR
  lichtHoeveelheid = analogRead(LDR_In);

  if ( lichtHoeveelheid <volt1){
  // donker, Led aan
  digitalWrite(Led1, HIGH);
  }
  else{
    // licht, led uit
    digitalWrite(Led1, LOW);
  }

   if ( lichtHoeveelheid <volt2){
  // donker, Led aan
  digitalWrite(Led2, HIGH);
  }
  else{
    // licht, led uit
    digitalWrite(Led2, LOW);
  }

 if ( lichtHoeveelheid <volt3){
  // donker, Led aan
  digitalWrite(Led3, HIGH);
  }
  else{
    // licht, led uit
    digitalWrite(Led3, LOW);
  }

  // schrijf de waarde naar de Serial Monitor
  Serial.println(lichtHoeveelheid);
  delay(1000); // wacht 1 sec
}
