int mA=3; int mB=4; int mC=5; int mD=6;

 

      void setup() {

      pinMode(mA, OUTPUT);

      pinMode(mB, OUTPUT);

      pinMode(mC, OUTPUT);

      pinMode(mD, OUTPUT);

      pinMode(mE, OUTPUT);

      pinMode(mF, OUTPUT);

      pinMode(mG, OUTPUT);

      pinMode(mH, OUTPUT);

 

 

      //INICIAR EN PARO

      digitalWrite(mA, LOW);

      digitalWrite(mB, LOW);

      digitalWrite(mC, LOW);

      digitalWrite(mD, LOW);

      digitalWrite(mE, LOW);

      digitalWrite(mF, LOW);

      digitalWrite(mG, LOW);

      digitalWrite(mH, LOW);

      Serial.begin(9600);

      }

 

      void izquierda(){

      //paso 1

      digitalWrite(mA, LOW);

      digitalWrite(mB, HIGH);

      digitalWrite(mC, HIGH);

      digitalWrite(mD, LOW);

      digitalWrite(mE, LOW);

      digitalWrite(mF, HIGH);

      digitalWrite(mG, HIGH);

      digitalWrite(mH, LOW);

      delay(1);

 

 

      //paso 2

      digitalWrite(mC, LOW);

      digitalWrite(mD, HIGH);

      digitalWrite(mG, LOW);

      digitalWrite(mH, HIGH);

      delay(1);

 

      //paso 3

      digitalWrite(mA, HIGH);

      digitalWrite(mB, LOW);

      digitalWrite(mE, HIGH);

      digitalWrite(mF, LOW);

 

      delay(1);

 

      //paso 4

      digitalWrite(mC, HIGH);

      digitalWrite(mD, LOW);

      digitalWrite(mG, HIGH);

      digitalWrite(mH, LOW);

      delay(1);

      }//FIN izquierda

 

 

 

 

      void derecha(){

      //paso 1

      digitalWrite(mA, HIGH);

      digitalWrite(mB, LOW);

      digitalWrite(mC, HIGH);

      digitalWrite(mD, LOW);

      digitalWrite(mE, HIGH);

      digitalWrite(mF, LOW);

      digitalWrite(mG, HIGH);

      digitalWrite(mH, LOW);

      delay(1);

 

      //paso 2

      digitalWrite(mC, LOW);

      digitalWrite(mD, HIGH);

      digitalWrite(mG, LOW);

      digitalWrite(mH, HIGH);

      delay(1);

 

 

      //paso 3

      digitalWrite(mA, LOW);

      digitalWrite(mB, HIGH);

      digitalWrite(mE, LOW);

      digitalWrite(mF, HIGH);

      delay(1);

 

      //paso 4

      digitalWrite(mC, HIGH);

      digitalWrite(mD, LOW);

      digitalWrite(mG, HIGH);

      digitalWrite(mH, LOW);

      delay(1);

      }//FIN derecha

 

 

      void loop() {

      for(int i=0; i<100; i++) derecha();

      delay (1000);

      for(int i=0; i<100; i++) izquierda();

      delay (1000);

      }
