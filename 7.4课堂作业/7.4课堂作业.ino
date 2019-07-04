void forward(){
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
}
void backward(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void left(){
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
}
void right(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void stop(){
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
}
