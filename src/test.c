#include <stdio.h>

//funcion que verifica si un numero es divisible naturalmente
// num es dividendo
int isDivisible(int dividendo, int divisor) {
    if (divisor > dividendo) {
        return 0; //negativo
    }
    int accumulator = dividendo;
    // accumulator es una variable temporal de dividendo
    while (accumulator >= divisor) {
        accumulator = accumulator - divisor;
    }
    return (accumulator == 0) ? 1 : 0;
}

int integerDivision(int dividendo, int divisor) {
    int cociente = 0;
    int accumulator = dividendo;
    while (accumulator >= divisor) {
        accumulator -= divisor;
        cociente++;
    }
    return cociente;
}


/*
* return entre 0 y 1 pero hay una condicion la cual es si
* accumulator es igual a 0, si es verdadero, entonces
* devuelve 1, si es falso entonces devuelve 0
* 1 = positivo
* 0 = negativo
 * */
int main(){
    int num1;
    int num2;
    char c;
    if (scanf("%d%d%c", &num1,&num2, &c) == 3 && c == '\n'){
        int resultado = integerDivision(num1,num2);
        printf("%d\n",resultado);
    } else {
        printf("n/a\n");
    }
    return 0;
}