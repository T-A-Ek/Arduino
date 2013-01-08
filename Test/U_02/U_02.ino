/* 
  Det är alltid bra att börja med en kort kommentar om vad
  programmet är tänkt att göra.
*/

// Testa en blinkande lampa

// innan void setup() har vi utrymme för att definera variabler

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);     // tända LED
  // testa att stava fel på funktionen
  // gul/orange/brun när det är korrekt
  delay(500);                  // vänta halv sekund
  digitalWrite(led, LOW);      // stänga av
  delay(500);             
}
