int a = 1;

int b = 2;

int c = 3;

int d = 4;

int e = 5;

int f = 6;

int g = 7;

int dp = 8;

int d1 = 9;

int d2 = 10;

int d3 = 11;

int d4 = 12;

 

void setup() {

    pinMode(d1, OUTPUT);

    pinMode(d2, OUTPUT);

    pinMode(d3, OUTPUT);

    pinMode(d4, OUTPUT);

    pinMode(a, OUTPUT);

    pinMode(b, OUTPUT);

    pinMode(c, OUTPUT);

    pinMode(d, OUTPUT);

    pinMode(e, OUTPUT);

    pinMode(f, OUTPUT);

    pinMode(g, OUTPUT);

    pinMode(dp, OUTPUT);

}

 

void loop() {

  showNumber(1,9);

  showNumber(2,1);

  showNumber(3,0);

  showNumber(4,0);

}

 

void showNumber(unsigned int pos,unsigned char num){

  weizhi(pos);

  getNumber(num);

  delay(1);

  digitalWrite(a,HIGH);

  digitalWrite(b,HIGH);

  digitalWrite(c,HIGH);

  digitalWrite(d,HIGH);

  digitalWrite(e,HIGH);

  digitalWrite(f,HIGH);

  digitalWrite(g,HIGH);

  digitalWrite(dp,HIGH);

}

 

void weizhi(unsigned int pos){

  switch(pos){

    case 1:

      digitalWrite(d1,HIGH);

      digitalWrite(d2,LOW);

      digitalWrite(d3,LOW);

      digitalWrite(d4,LOW);

      break;

    case 2:

      digitalWrite(d1,LOW);

      digitalWrite(d2,HIGH);

      digitalWrite(d3,LOW);

      digitalWrite(d4,LOW);

      break;

    case 3:

      digitalWrite(d1,LOW);

      digitalWrite(d2,LOW);

      digitalWrite(d3,HIGH);

      digitalWrite(d4,LOW);

      break;

    case 4:

      digitalWrite(d1,LOW);

      digitalWrite(d2,LOW);

      digitalWrite(d3,LOW);

      digitalWrite(d4,HIGH);

      break;

    default:

      digitalWrite(d1,LOW);

      digitalWrite(d2,LOW);

      digitalWrite(d3,LOW);

      digitalWrite(d4,HIGH);

  }

}

 

void getNumber(unsigned char num){

  switch(num){

    case 0:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,LOW);

      digitalWrite(f,LOW);

      digitalWrite(g,HIGH);

      digitalWrite(dp,HIGH);

      break;

    case 1:

      digitalWrite(a,HIGH);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,HIGH);

      digitalWrite(e,HIGH);

      digitalWrite(f,HIGH);

      digitalWrite(g,HIGH);

      digitalWrite(dp,HIGH);

      break;

    case 2:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,HIGH);

      digitalWrite(d,HIGH);

      digitalWrite(e,LOW);

      digitalWrite(f,HIGH);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 3:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,HIGH);

      digitalWrite(f,HIGH);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 4:

      digitalWrite(a,HIGH);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,HIGH);

      digitalWrite(e,HIGH);

      digitalWrite(f,LOW);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 5:

      digitalWrite(a,LOW);

      digitalWrite(b,HIGH);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,HIGH);

      digitalWrite(f,LOW);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 6:

      digitalWrite(a,LOW);

      digitalWrite(b,HIGH);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,LOW);

      digitalWrite(f,LOW);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 7:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,HIGH);

      digitalWrite(e,HIGH);

      digitalWrite(f,HIGH);

      digitalWrite(g,HIGH);

      digitalWrite(dp,HIGH);

      break;

    case 8:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,LOW);

      digitalWrite(f,LOW);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    case 9:

      digitalWrite(a,LOW);

      digitalWrite(b,LOW);

      digitalWrite(c,LOW);

      digitalWrite(d,LOW);

      digitalWrite(e,HIGH);

      digitalWrite(f,LOW);

      digitalWrite(g,LOW);

      digitalWrite(dp,HIGH);

      break;

    default:

      digitalWrite(a,HIGH);

      digitalWrite(b,HIGH);

      digitalWrite(c,HIGH);

      digitalWrite(d,HIGH);

      digitalWrite(e,HIGH);

      digitalWrite(f,HIGH);

      digitalWrite(g,HIGH);

      digitalWrite(dp,HIGH);

  }

}
