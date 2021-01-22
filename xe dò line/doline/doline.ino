#define inA1 7
#define inA2 8
#define inB1 12
#define inB2 11
#define hongngoai1 3
#define hongngoai2 5
#define hongngoai3 4
//#define hongngoai4 9
#define ENA 9
#define ENB 10
int a,b,c;
void setup() {
pinMode(inA1, OUTPUT);
pinMode(inA2, OUTPUT);
pinMode(inB1, OUTPUT);
pinMode(inB2, OUTPUT);
pinMode(hongngoai1, INPUT);
pinMode(hongngoai2, INPUT);
pinMode(hongngoai3, INPUT);
//pinMode(hongngoai4, INPUT);
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
Serial.begin(9600);
analogWrite(ENA, 255);
analogWrite(ENB, 255);//đi chậm cho khỏi trượt Line
}
void loop(){
  a=digitalRead(hongngoai1);
  b=digitalRead(hongngoai2);
  c=digitalRead(hongngoai3);
/*Serial.print(a);
Serial.print("    ");
Serial.print(b);
Serial.print("    ");
Serial.println(c);*/

if(a == 0 && b == 1 && c == 0){
  dithang();
}else
/*if(a == 0 && b == 0 && c == 0){
  lui();
}else*/
if(a == 1 && b == 0 && c == 0){
   quaytrai();
}else
if(a == 0 && b == 0 && c == 1){
  quayphai();
}
else{} //dung();


}
void dithang(){
          digitalWrite(inA1,HIGH);
          digitalWrite(inA2,LOW);
          digitalWrite(inB1,HIGH);
          digitalWrite(inB2,LOW);
   
}
void lui(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,HIGH);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,HIGH);
}
void quayphai(){
           digitalWrite(inA1,HIGH);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,LOW);
}
void quaytrai(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,HIGH);
           digitalWrite(inB2,LOW);
}
void dung(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,LOW);
}
