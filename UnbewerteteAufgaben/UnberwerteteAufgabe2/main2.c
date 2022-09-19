#include <stdio.h>
#include <math.h>



int input_int(){

  

}


void main(){

  int vspannung = 0;
  printf("Versorgungsspannung in V: ");
  scanf("%d", &vspannung);


  int widerstand1 = 0;
  int widerstand2 = 0;
  printf("Widerstand 1 in Ohm: ");
  scanf("%d", &widerstand1);
  printf("Widerstand 1 in Ohm: ");
  scanf("%d", &widerstand2);


  float strom =(float) vspannung / (widerstand1 + widerstand2) * 1000;

  float spannung1 = strom * widerstand1 / 1000;
  float spannung2 = strom * widerstand2 / 1000;

  printf("Spannung über Widerstand 1: %.2f V\nSpannung über Widerstand 2: %.2f V\nStromstärke:\t\t     %.1f mA\n", spannung1, spannung2, strom);


}
