char in1 = 6;
char in2 = 7;
char in3 = 8;
char in4 = 9;

void goForward(void);
void goBackward(void);
void turnLeft(void);
void turnRight(void);
void stop(int delayTime);

void setup() {
    pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
    pinMode(in3,OUTPUT);
    pinMode(in4,OUTPUT);
}

void loop() {
    
    goForward();
    delay(1000);
    stop(250);

    goBackward();
    delay(1000);
    stop(250);

    turnRight();
    delay(1000);
    stop(250);

    turnLeft();
    delay(1000);
    stop(500);
}

void goForward(void){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
}

void goBackward(void){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
}

void turnRight(void){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
}

void turnLeft(void){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
}

void stop(int delayTime){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    delay(delayTime);
}