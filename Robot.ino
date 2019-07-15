
int ll;
int
led2 = 2, 
led3 = 3, 
led4 = 4, 
led5 = 5, 
enable1 = 9, 
enable2 = 10;

int v1=0;
int v2=0;

void setup() {
  Serial.begin(9600);
   pinMode(A0, INPUT);
   pinMode(A1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
 digitalWrite(enable1,HIGH);
digitalWrite(enable2,HIGH); 
}

void loop() {
  
  v1=analogRead(A0);
  v2=analogRead(A1);
  Serial.println(v1); 
  Serial.println(v2); 
  
if(v1<300 && v2<300)
       
           {
           
analogWrite(enable1, 90);
analogWrite(enable2, 90);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
           }  
           
if(v1>300 && v2<300)
{
             

digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,HIGH);

delay(300);

digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
delay(300);

digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
           }

if(v1<300 && v2>300)
{
             

digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,HIGH);

delay(300);

digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
delay(300);

digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
           }
           
if(v1>300 && v2>300)
{
             

digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,HIGH);

delay(300);

digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
delay(900);

digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
           }
}
 
