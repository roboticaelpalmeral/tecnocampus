#include <Servo.h>

Servo servos[13];

/***   Global variables   ***/
int negro=1;
int motizq=63;  //valor para la rotación del motor izquierdo
int motdre=121;  //valor para la rotación del motor derecho

/***   Function declaration   ***/

void setup()
{



  pinMode( 2 , INPUT);  //inicializamos el pin 2 para leer el sensor infrarrojo

  servos[8].attach(8);  //Asignamos el pin número 8 para el motor izquierdo

  servos[9].attach(9);  //Asignamos el pin número 9 para el motor derecho

}


void loop()
{
  int sensor=digitalRead(2);  //guardamos el valor del sensor infrarrojo en la variable sensor
  if (sensor != negro) {
    //Avanzamos recto siempre que el sensor no detecte una linea negra
    servos[8].write(motizq);
    delay(10);
    servos[9].write(motdre);
    delay(10);
   }else {
    //En caso de detectar una linea negra, giramos 180 grados, en este caso en sentido horario
    servos[8].write(motdre);
    delay(10);
    servos[9].write(motdre);
    delay(10);
   }

}

/***   Function definition   ***/
