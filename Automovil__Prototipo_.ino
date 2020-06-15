//Motor Izquierdo
int enableA = 8;
int motorA1 = 7;
int motorA2 = 6;
//Motor Derecho
int enableB = 11;
int motorB1 = 10;
int motorB2 = 9;
char direccion;
void setup() 
  {
  Serial.begin (9600);
  //configuración
  pinMode (enableA, OUTPUT);
  pinMode (motorA1, OUTPUT);
  pinMode (motorA2, OUTPUT);  
  
  pinMode (enableB, OUTPUT);
  pinMode (motorB1, OUTPUT);
  pinMode (motorB2, OUTPUT);  
  
}
void Adelante(){
  //Nos movemos  
  Serial.println ("Activando motores");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  Serial.println ("Hacia delante");
  digitalWrite (motorA1, LOW);
  digitalWrite (motorA2, HIGH);
  digitalWrite (motorB1, LOW);
  digitalWrite (motorB2, HIGH);
  //Durante 3 segundos
  delay (3000);
}
void Reverso()
{
Serial.println ("Activando Motores");
Serial.println ("Hacia Atras");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  digitalWrite (motorA1,HIGH);
  digitalWrite (motorA2,LOW);  
  digitalWrite (motorB1,HIGH);
  digitalWrite (motorB2,LOW);  
  //Durante 3 segundos
  delay (3000);
}
void Izquierda()
{  Serial.println ("Activando Motor");
  digitalWrite (enableA, HIGH);
 Serial.println ("Hacia la Izquierda");
  digitalWrite (motorA1,LOW);
  digitalWrite (motorA2,HIGH);    
  //Durante 3 segundos
  delay (3000);
}
void Derecha()
{  Serial.println ("Activando Motor");
  digitalWrite (enableB, HIGH);
  Serial.println ("Hacia la Derecha"); 
  digitalWrite (motorB1,LOW);
  digitalWrite (motorB2,HIGH);  
  //Durante 3 segundos
  delay (3000);
}
void Paro()
{
  Serial.println ("Parando motores");
  digitalWrite (enableA, LOW);
  digitalWrite (enableB, LOW);
  delay (3000);
}
void loop()
 {
if(Serial.available())
{ 
 direccion=Serial.read();
}
 if(direccion=='W')
  {
    Adelante();
  }
  if(direccion=='S')
    {
    Reverso();
    }
  if(direccion=='Z')
  {
    Paro();
  }
}

  
  
  
  
  
  
  
  
  
  
 
  
 
