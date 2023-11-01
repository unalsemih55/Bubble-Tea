//A Motoru için Bağlantı pinleri

int enA = 8;

int in1 = 9;

int in2 = 10;

//B Motoru için Bağlantı pinleri

int enB = 2;

int in3 = 3;

int in4 = 4; 

void setup(){    //Giriş-çıkış pinlerini tanımlıyoruz.

pinMode(enA, OUTPUT);

pinMode(enB, OUTPUT);

pinMode(in1, OUTPUT);

pinMode(in2, OUTPUT);

pinMode(in3, OUTPUT);

pinMode(in4, OUTPUT);

}

void loop()

{

analogWrite(enA, 255); //Enable pinlerinden motor hızını ayarlıyoruz.

analogWrite(enB, 255);

digitalWrite(in1, HIGH);  //Motorlara ileri yönde hareket komutu veriyoruz.

digitalWrite(in2, LOW);

digitalWrite(in3, HIGH);

digitalWrite(in4, LOW);

delay(8000);

digitalWrite(in1, LOW); //Motorları durduruyoruz.

digitalWrite(in2, LOW);

digitalWrite(in3, LOW);

digitalWrite(in4, LOW);

delay(1000); 

digitalWrite(in1, LOW);  //Motorlara geri yönde hareket komutu veriyoruz.

digitalWrite(in2, HIGH);

digitalWrite(in3, LOW);

digitalWrite(in4, HIGH);

delay(8000);

digitalWrite(in1, LOW); //Motorları durduruyoruz.

digitalWrite(in2, LOW);

digitalWrite(in3, LOW);

digitalWrite(in4, LOW);

delay(1000); 

}

