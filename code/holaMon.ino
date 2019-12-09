//holaMon.ino
//últim.exercici
unsigned int NIVELL_LLUM_RAW=0;
unsigned int NIVELL_LLUM=0;
void setup()
{
  Serial.begin(115200);
}
void loop()
{
NIVELL_LLUM_RAW=analogRead(A0);
NIVELL_LLUM=map(NIVELL_LLUM_RAW,110,513,0,100);
Serial.println(NIVELL_LLUM);
delay(1000);
}
 
