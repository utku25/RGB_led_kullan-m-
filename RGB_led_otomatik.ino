#define red 4
#define green 3
#define blue 2
void setup() {
  
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);  //kırmızı yanacak
  digitalWrite(blue,LOW);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);  // yeşil yanacak
  digitalWrite(blue,LOW);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);   //mavi yanacak
  digitalWrite(blue,HIGH);
  delay(1000);
   digitalWrite(red,HIGH); 
  digitalWrite(green,HIGH);  //beyaz yanacak
  digitalWrite(blue,HIGH);
  delay(1000);
   digitalWrite(red,HIGH);
  digitalWrite(green,LOW);    //mor yanacak.
  digitalWrite(blue,HIGH);
  delay(1000);
}
