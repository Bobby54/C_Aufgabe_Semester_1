#include <stdio.h>
#include <math.h>

int greatest_common_divisor(int a, int b){


  if(a < 0){
    a = a * (-1);
  }
  if(b < 0){
    b = b * (-1);
  }

  if(b == 0){
    return a;
  }else if(a == 0){
    return b;
  }else if(a > b){
    return greatest_common_divisor(a-b, b);
  }else{
    return greatest_common_divisor(a, b-a);
  }

}


int main(){
  int a, b;

  printf("Erste Zahl: ");
  scanf("%d", &a);
  printf("Zweite Zahl: ");
  scanf("%d", &b);

  printf("Der größte gemeinsame Teiler von %d und %d ist %d", a, b, greatest_common_divisor(a, b));

  return 0;
}
