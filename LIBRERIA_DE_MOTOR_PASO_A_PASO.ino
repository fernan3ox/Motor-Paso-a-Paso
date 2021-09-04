#include <Stepper.h>

Stepper motor1(2048,8,10,9,11);//pasos completos

void setup() {

  motor1.setSpeed(3); //en RPM (valores de 1,2,0 3 para 28byj-48) 

}

void loop() {

  motor1.step(512);//(cantidad de paso)
  delay (2000);
  motor1.step(-512);//(cantidad de paso)
  delay (2000);
}
