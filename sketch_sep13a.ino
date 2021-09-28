int button;
int buttonState = 0;
int GREEN1[2] = {13,10};
int RED1[2] = {11,8};
int YELLOW1[2] = {12,9};
int GREEN2[2] = {7,4};
int RED2[2] = {5,2};
int YELLOW2[2] = {6,3};
int lightOFF = 500;
int rgLight = 5000;
int yLight = 2000;
void setup() {
  // put your setup code here, to run once:
   pinMode(GREEN1[0], OUTPUT);
  pinMode(RED1[0], OUTPUT);
  pinMode(YELLOW1[0], OUTPUT);
  pinMode(GREEN2[0], OUTPUT);
  pinMode(RED2[0], OUTPUT);
  pinMode(YELLOW2[0], OUTPUT);
  pinMode(GREEN1[1], OUTPUT);
  pinMode(RED1[1], OUTPUT);
  pinMode(YELLOW1[1], OUTPUT);
  pinMode(GREEN2[1], OUTPUT);
  pinMode(RED2[1], OUTPUT);
  pinMode(YELLOW2[1], OUTPUT);

}

void loop() {
  GREEN1_Light();
  YELLOW1_Light();
  RED1_Light();
  YELLOW1_Light();

}

void GREEN1_Light() {
  digitalWrite(GREEN1[0], HIGH);
  digitalWrite(GREEN1[1], HIGH);
  digitalWrite(RED2[0], HIGH);
  digitalWrite(RED2[1], HIGH); 
  delay(rgLight);                       
  digitalWrite(GREEN1[0], LOW);
  digitalWrite(GREEN1[1], LOW);
  digitalWrite(RED2[0], LOW);
  digitalWrite(RED2[1], LOW);
  //delay(lightOFF);
}
void YELLOW1_Light () {
  digitalWrite(YELLOW1[0], HIGH);
  digitalWrite(YELLOW1[1], HIGH);
  digitalWrite(YELLOW2[0], HIGH);
  digitalWrite(YELLOW2[1], HIGH);
  delay(yLight);
  digitalWrite(YELLOW1[0],LOW);
  digitalWrite(YELLOW1[1],LOW);
  digitalWrite(YELLOW2[0], LOW);
  digitalWrite(YELLOW2[1], LOW);
  delay(lightOFF);
}
 
void RED1_Light() {
  digitalWrite(RED1[0],HIGH);
  digitalWrite(GREEN2[0], HIGH);
  digitalWrite(RED1[1],HIGH);
  digitalWrite(GREEN2[1], HIGH);
  delay(rgLight);
  digitalWrite(RED1[0],LOW);
  digitalWrite(GREEN2[0], LOW);
  digitalWrite(RED1[1],LOW);
  digitalWrite(GREEN2[1], LOW);
  //delay(lightOFF); 
}
void Button(){
  buttonState = digitalRead(buttonPin);
  if (buttonState = HIGH){ 
  }
}

 
  
