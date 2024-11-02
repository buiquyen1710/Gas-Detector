int dd=10;   //thiết lập chân của đèn đỏ là chân số 4.

int Ao=A0;  //thiết lập chân của analog là chân A0.
int dx=2;   //thiết lập chân của đèn xanh là chân số 5.
int coi1=3;  //thiết lập chân của còi là chân số 6.
void setup() {
  // put your setup code here, to run once:
  
  pinMode(coi1,OUTPUT);    // thiết lập còi là OUTPUT.   
  pinMode(dd,OUTPUT);     // thiết lập đèn là OUTPUT.
  pinMode(dx,OUTPUT);
  pinMode(Do,INPUT);      //thiết lập chân digital là INPUT.
  pinMode(Ao,INPUT);      //thiết lập chân analog là OUTPUT.
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a,b;
  a=digitalRead(Do);    //khai báo giá trị digital đọc dc từ mq2. 
  b=analogRead(Ao);     //khai báo giá trị analog đọc dc từ mq2.


 //In ra màn hình các giá trị digital và analog. 
  Serial.println("gia tri digital :");
  Serial.println(a);
  delay(1000);
  Serial.println("gia tri analog :");
  Serial.println(b);
  delay(1000);
  
  //xử lí số liệu
  if (b>40){
    digitalWrite(dd,HIGH);    //Bật đèn đỏ
    digitalWrite(dx,LOW);     //Tắt đèn xanh
    digitalWrite(coi1,HIGH);   //Bật còi

  }
  else{
    digitalWrite(dd,LOW);     //Tắt đèn đỏ.
    digitalWrite(dx,HIGH);    //Bật đèn xanh.
    digitalWrite(coi1,LOW);     //Tắt còi.
  }
  
  
}
