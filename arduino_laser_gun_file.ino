int reload = 0; 



void setup() {

  Serial.begin(9600);

  pinMode(3, OUTPUT); 

  pinMode(4, INPUT_PULLUP);

  pinMode(5, OUTPUT);

  pinMode(6, INPUT_PULLUP);

  pinMode(7, OUTPUT);

  digitalWrite(3, LOW);

  digitalWrite(5, LOW);

  digitalWrite(7, LOW);

}



void loop() {

  int sw1 = digitalRead(4); // 방아쇠 감지 스위치

  int sw2 = digitalRead(6); // 장전 감지 스위치

  if (sw2 == 1) { // 장전

    reload = 7;

  }

  if (sw1 == 1 && sw2 == 1) { // 영점모드

    digitalWrite(3, HIGH);  

    reload = 0;

  }

  if (reload == 7 && sw1 == 1) { // 레이저 발사

    reload = 6;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 6 && sw1 == 1) { // 레이저 발사

    reload = 5;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 5 && sw1 == 1) { // 레이저 발사

    reload = 4;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 4 && sw1 == 1) { // 레이저 발사

    reload = 3;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 3 && sw1 == 1) { // 레이저 발사

    reload = 2;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 2 && sw1 == 1) { // 레이저 발사

    reload = 1;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }

  if (reload == 1 && sw1 == 1) { // 레이저 발사

    reload = 0;

    digitalWrite(3, HIGH);  // Laser ON

    delay(50);

    digitalWrite(3, LOW);   // Laser OFF

  }
}
