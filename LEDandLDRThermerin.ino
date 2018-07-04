const int Pin5 = 2 ;
const int Pin4 = 3 ;
const int Pin3 = 4 ;
const int Pin2 = 5 ;
const int Pin1 = 6 ;
const int Pin0 = 7 ;
const int photoPin = A0 ;



void setup() {
  Serial.begin(9600);
  //Serial1.begin(38400);
  pinMode(Pin5, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin3, OUTPUT);  
  pinMode(Pin2, OUTPUT);  
  pinMode(Pin1, OUTPUT);   
  pinMode(Pin0, OUTPUT);    
}

void loop(){
  ledState(LOW,LOW,LOW,LOW,LOW,LOW);
  Serial.println(analogRead(photoPin));
    if(analogRead(photoPin)>100){
      ledState(LOW,LOW,LOW,LOW,LOW,HIGH);
      //Serial1.write("Normal");
      }
    if(analogRead(photoPin)>200){
      ledState(LOW,LOW,LOW,LOW,HIGH,HIGH);
      //Serial1.write("Fair");
      }
     if(analogRead(photoPin)>300){
      ledState(LOW,LOW,LOW,HIGH,HIGH,HIGH);
      //Serial1.write("Moderate");
      }
      if(analogRead(photoPin)>400){
      ledState(LOW,LOW,HIGH,HIGH,HIGH,HIGH);
      //Serial1.write("Warning");
      }
      if(analogRead(photoPin)>500){
      ledState(LOW,HIGH,HIGH,HIGH,HIGH,HIGH);
      //Serial1.write("Danger");
      }
      if(analogRead(photoPin)>600){
      ledState(HIGH,HIGH,HIGH,HIGH,HIGH,HIGH);
      //Serial1.write("About To Hit");
      }
      Serial.write(analogRead(photoPin));
 }
 
 boolean ledState(boolean r,boolean y1,boolean y2,boolean y3,boolean g1,boolean g2){
    digitalWrite(Pin5, r);
    digitalWrite(Pin4, y1);
    digitalWrite(Pin3, y2);
    digitalWrite(Pin2, y3);
    digitalWrite(Pin1, g1);
    digitalWrite(Pin0, g2);
 }
