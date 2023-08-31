/*
Faça um programa em C que calcule a área de um triângulo (a = base x aultura / 2). Considere base e altura números inteiros msior que 0.
*/

#include <stdio.h>

int main() {

  int base = 5;
  int altura = 3;

  float area = base * altura / 2.0f; 

  printf("A area do triangulo é %f\n", area);

  return 0;
}
