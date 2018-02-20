//programa de un semaforo
 
 int PULSADOR = 2;                 //pin donde se encuentrea la entrada (pushbuton)
 //pines donde se encuentra los y declarados con su respectivo color led
 int LED_ROJO = 13;
 int LED_AMARILLO = 12;
 int LED_VERDE = 11;
 int LED_ROJO2 =  6;
 int LED_VERDE2 = 7;
 
void setup() {
 Serial.begin(9600);                //iniciación serial con el potenciometro
 pinMode (PULSADOR, INPUT);         //configuracion del pulsador como entrada
 
 // configuración de lso led como entrada 
 pinMode (LED_ROJO, OUTPUT);
 pinMode (LED_AMARILLO, OUTPUT);
 pinMode (LED_VERDE, OUTPUT);
 pinMode (LED_ROJO2, OUTPUT);
 pinMode (LED_VERDE2, OUTPUT);

}

void loop() {
//se declara la variable tiempo que esta en la entrada A0 y se multiplica por 5 para que se espere mas tiempo
int Tiempo= analogRead(A0)*5;        

 // declaración de condicional para conocer estado del pulsador
if (digitalRead (PULSADOR)==HIGH)     //si se pulsa el boton realizara la acción del bloque
{
digitalWrite(LED_VERDE, LOW);
digitalWrite(LED_AMARILLO,HIGH);
delay(2000);
digitalWrite(LED_AMARILLO,LOW);
digitalWrite(LED_ROJO2,LOW);
digitalWrite(LED_ROJO,HIGH );
digitalWrite(LED_VERDE2,HIGH);
delay(Tiempo);
Serial.println(Tiempo);

}else{                                //si no esta pulsado realizara el bloque siquiente
digitalWrite(LED_VERDE,HIGH);
digitalWrite(LED_ROJO, LOW);
digitalWrite(LED_ROJO2,HIGH);
digitalWrite(LED_VERDE2,LOW);
}
  



}
