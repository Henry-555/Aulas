const int led = 3;
const int pot = 0;

void setup ()
  (
  pinMode (ld, OUTPUT);
  Serial.begin (9600);
  )
  int var;
int var 2
void loop()
  (
  var = analogRead (pot);
  var2 = map(var,0,1023,0,255);
  analogicWrite(led, var2)
  Serial.print1n (var);
  delay (100);
  )
