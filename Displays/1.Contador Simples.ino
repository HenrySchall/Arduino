
///////////////////////
// Contador Simples //
/////////////////////

#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

void mostrarZero() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);  
  digitalWrite(SEG_F, HIGH);  
  digitalWrite(SEG_G, LOW);
} // low = não mostra 
  // high = mostra

void mostrarUm() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);  
  digitalWrite(SEG_F, LOW);  
  digitalWrite(SEG_G, LOW);
}

void mostrarDois() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH); 
  digitalWrite(SEG_F, LOW); 
  digitalWrite(SEG_G, HIGH);
}

void setup(){
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  
}

void loop()
{
  mostrarZero();
  delay(1000);
  mostrarUm();
  delay(1000);
  mostrarDois();
  delay(1000);
  mostrarTres();
  delay(1000);
}

////////////////////////////////////////////
// Contador Simples usando código binário //
////////////////////////////////////////////

#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

int mapaDisplay[] = {
  B00111111, B00000110, B01011011, B01001111,
  B01100110, B01101101, B01111100, B00000111,
  B01111111, B01100111
};

void mostrarNumero(int numero) {
  
  int mapa = mapaDisplay[numero];
  int bit = B00000001; 
  
  for (int i = 0; i < 7; i++) {
    int acender = mapa & bit;
    digitalWrite(i + 2, acender); // high = 1 e low = 0
    bit = bit << 1;
  }
  
}

int contagem = 0;

void setup()
{
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  
}

void loop()
{
  mostrarNumero(contagem);
  contagem = ++contagem % 10;
  delay(500);
  
}


