void setup()
{
  pinMode(9, OUTPUT); //Definição do pin conectado ao LED
}

void loop() //Definição da cadência do LED
{ 
  digitalWrite(9, HIGH); //Liga o LED
  delay(3000); // Espera 0.5 segundo
  digitalWrite(9, LOW); //Desliga o LED
  delay(3000); // Espera 0.5 segundo
}