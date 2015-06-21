#include <Servo.h>

Servo servos[13];

/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  servos[8].attach(8);

  servos[9].attach(9);

}


void loop()
{
  int giroDrch=120;//ajustamos el valor del motor derecho(valor entre 91 y 180)
  int giroIzq=60;//ajustamos el valor del motor izquierdo(valor entre 0 y 89)
  servos[8].write(giroDrch);
  delay(10);
  servos[9].write(giroIzq);
  delay(10);

}

/***   Function definition   ***/
