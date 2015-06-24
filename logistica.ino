#include <Servo.h>

Servo servos[13];

/***   Global variables   ***/

/***   Function declaration   ***/
void parar ();
void girar90izq ();
void girar90drch ();
void avanzar ();
void giro3 ();

void setup()
{
  servos[8].attach(8);

  servos[9].attach(9);

}


void loop()
{
  avanzar();
  avanzar();
  avanzar();
  girar90drch();
  avanzar();
  avanzar();
  avanzar();
  girar90drch();
  avanzar();
  avanzar();
  girar90izq();
  avanzar();
  avanzar();
  girar90drch();
  avanzar();
  parar();
  avanzar();
  avanzar();
  avanzar();
  girar90drch();
  avanzar();
  girar90izq();
  avanzar();
  avanzar();
  avanzar();
  parar();
  avanzar();
  avanzar();
  avanzar();
  giro3();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  girar90izq();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  avanzar();
  parar();

}

/***   Function definition   ***/
void parar () {
  servos[8].write(90);
  delay(10);
  servos[9].write(90);
  delay(10);
  delay(7000);
 }
void girar90izq () {
  servos[8].write(114);
  delay(10);
  servos[9].write(114);
  delay(10);
  delay(550);
 }
void girar90drch () {
  servos[8].write(69);
  delay(10);
  servos[9].write(69);
  delay(10);
  delay(550);
 }
void avanzar () {
  servos[8].write(114);
  delay(10);
  servos[9].write(69);
  delay(10);
  delay(690);
 }
void giro3 () {
  servos[8].write(69);
  delay(10);
  servos[9].write(69);
  delay(10);
  delay(550);
 }
