#include <stdio.h>
int division_natural(int dividendo,int divisor);
int main(){
    int num1;
    int num2;
    char c;
    if (scanf("%d%d%c", &num1,&num2, &c) == 3 && c == '\n'){
    int resultado = division_natural(num1,num2);
    printf("%d\n",resultado);
    } else {
    printf("n/a\n");
    }
return 0;
}
// creamos un metodo para dividir sin utilizar el operador "/" en C
// la division natural te devuelve el numero entero del resultado, si es 7/2 = 3
int division_natural(int dividendo,int divisor){ // dividendo / divisor
  int contador = 0;
  do{
    dividendo = dividendo - divisor; // dividendo - divisor es lo mismo que 100 - 10
                                    // y el dividendo de la izquierda sera
                                   // el valor de 100 - 10 que es igual a 90

    contador++; // contador = contador + 1;
  } while(dividendo > 0);
  return contador;
    /* 10 2
  1. 10 - 2 = 8 > 0
  2. 8 - 2 = 6 > 0
  3. 6 - 2 = 4 > 0
  4. 4 - 2  = 2 > 0
  5. 2 -2 = 0
  6. 0 > 0
  */
}
// funcion para saber si un numero primo o no (un numero primo es primo si solo se puede
// dividir entre 1 y si mismo)
// crear una funcion para saber si un numero es primo o no es primo utilizando la funcion
// que hemos creado.


