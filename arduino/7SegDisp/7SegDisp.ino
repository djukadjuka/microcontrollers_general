#define PIN7SEGG 2 //mid 
#define PIN7SEGF 3 //top left
#define PIN7SEGA 4 //top
#define PIN7SEGB 5 //top right
#define PIN7SEGE 6 //bot left
#define PIN7SEGD 7 //bot 
#define PIN7SEGC 8 //bot right
#define PIN7SEGDP 9 // dot

void setup() {
  pinMode(PIN7SEGG, OUTPUT);
  pinMode(PIN7SEGF, OUTPUT);
  pinMode(PIN7SEGA, OUTPUT);
  pinMode(PIN7SEGB, OUTPUT);
  pinMode(PIN7SEGE, OUTPUT);
  pinMode(PIN7SEGD, OUTPUT);
  pinMode(PIN7SEGC, OUTPUT);
  pinMode(PIN7SEGDP, OUTPUT);

  Serial.begin(9600);
}

void turn_off(){
  digitalWrite(PIN7SEGG, LOW);
  digitalWrite(PIN7SEGF, LOW);
  digitalWrite(PIN7SEGA, LOW);
  digitalWrite(PIN7SEGB, LOW);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, LOW);
  digitalWrite(PIN7SEGC, LOW);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_zero(){
  digitalWrite(PIN7SEGG, LOW);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, HIGH);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_one(){
  digitalWrite(PIN7SEGG, LOW);
  digitalWrite(PIN7SEGF, LOW);
  digitalWrite(PIN7SEGA, LOW);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, LOW);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_two(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, LOW);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, HIGH);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, LOW);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_three(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, LOW);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_four(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, LOW);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, LOW);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_five(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, LOW);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_six(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, LOW);
  digitalWrite(PIN7SEGE, HIGH);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_seven(){
  digitalWrite(PIN7SEGG, LOW);
  digitalWrite(PIN7SEGF, LOW);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, LOW);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_eight(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, HIGH);
  digitalWrite(PIN7SEGD, HIGH);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_nine(){
  digitalWrite(PIN7SEGG, HIGH);
  digitalWrite(PIN7SEGF, HIGH);
  digitalWrite(PIN7SEGA, HIGH);
  digitalWrite(PIN7SEGB, HIGH);
  digitalWrite(PIN7SEGE, LOW);
  digitalWrite(PIN7SEGD, LOW);
  digitalWrite(PIN7SEGC, HIGH);
  digitalWrite(PIN7SEGDP, LOW);
}

void write_number(uint8_t num){
  switch(num){
    case 0:
      write_zero();
      break;
    case 1:
      write_one();
      break;
    case 2:
      write_two();
      break;
    case 3:
      write_three();
      break;
    case 4:
      write_four();
      break;
    case 5:
      write_five();
      break;
    case 6:
      write_six();
      break;
    case 7:
      write_seven();
      break;
    case 8:
      write_eight();
      break;
    case 9:
      write_nine();
      break;
  }
}

void loop() {
  for(int i = 0 ; i <= 9; i++){
    write_number(i);
    delay(1500);
  }
}
