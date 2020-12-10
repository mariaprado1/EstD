/*#########################################
# Exercício programa 1
# Autora: Maria Eduarda de Jesus Prado
# Data: 14/12/2020
#     Recebe valores A, B e C referentes aos coeficientes de
#     uma equação de segundo grau e retorne as raízes reais se houver.
###########################################*/

#include <math.h>
#include <stdio.h>
#include <assert.h>

int delta(int a, int b, int c){
  return b * b -4 * a * c;
}

int raiz1(int a, int b, int c){
  return (-b + sqrt(delta(a, b, c)))
  / 2 * a;
}

int raiz2(int a, int b, int c){
  return (-b - sqrt(delta(a, b, c)))
  / 2 * a;
}

int main() {
  int a, b, c;

  a = 1; b = 0; c = -16;
  assert(64 == delta(a, b, c));
  assert(4 == raiz1(a, b, c));
  assert(-4 == raiz2(a, b, c));

  return 0;

}
