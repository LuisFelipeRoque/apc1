/*
Faça um programa em C que calcule o perimetro de uma pizza (P = 2 x PI x r). Considere o raio um numero inteiro e a contante PI igual a 3,1416.
*/
#include <stdio.h>

int main() {

  float raio = 20;
  float consntante_PI = 3.1416f;

  float perimetro_da_pizza = 2 * constante_PI * raio;

  printf("o perimetro da pizza é %f\n", perimetro_da_pizza);
  
  return 0;
}