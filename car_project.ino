char in1 = 6;
char in2 = 7;
char in3 = 8;
char in4 = 9;
char in5 = 5;
char in6 = 3;


unsigned char mapped1;
unsigned char mapped2;


void goForward1(unsigned char speed);
void goForward2(unsigned char speed);


void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(in5,OUTPUT);
pinMode(in6,OUTPUT);


mapped1 = map(6,0,10,0,255);
mapped2 = map(7,0,10,0,255);
}

void loop() {
goForward1(mapped1);
goForward2(mapped2);
delay(1000);
stop();


}

void goForward1(unsigned char speed){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(in6,speed);
}
void goForward2(unsigned char speed){
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(in5,speed);
}

void stop(void){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}