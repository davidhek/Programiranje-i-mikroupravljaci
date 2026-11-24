unsigned int adc=612;
byte postotak;
unsigned int napon_mV;
byte donjiBajt;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 byte postotak=(adc * 100UL) / 1023;
 unsigned int napon_mV = (adc * 5000UL) / 1023;
 byte donjiBajt = adc;
 Serial.print("adc:");
 Serial.println(adc);
 Serial.print("postotak skale:");
 Serial.println(postotak);
 Serial.print("napon:");
 Serial.println(napon_mV);
 Serial.print("donji bajt(DEC):");
 Serial.println(donjiBajt,DEC);
  Serial.print("donji bajt (HEX):");
 Serial.println(donjiBajt,HEX);
  Serial.print("donji bajt (BIN):");
 Serial.println(donjiBajt,BIN);
 }

void loop() {
  // put your main code here, to run repeatedly:

}
