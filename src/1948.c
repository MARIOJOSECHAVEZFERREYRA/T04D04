#include <stdio.h>

int comprobar_division(int divisor, int dividendo) {
	if (divisor > dividendo){
		return 0;
	}
	int acumulador = dividendo;
	while (acumulador >= divisor) {
		acumulador -= divisor;
	}
	return (acumulador == 0) ? 1 : 0;
}
int division_entera(int dividendo, int divisor) {
	int cociente = 0;
	int acumulador = dividendo;
	while (acumulador >= divisor){
		acumulador -= divisor;
		cociente++;
	}
	return cociente;
}
int max_divisor_primo(int n){
	if (n < 2){
	return -1;
	}
	int max_divisor = 1;
	int divisor = 2;
	while (divisor * divisor <= n) {
		if (comprobar_division(divisor, n)) {
			max_divisor = divisor;
			while (comprobar_division(divisor,n)){
				n = division_entera(n, divisor);
			}
		} else {
        	divisor++;
		}
}

	if (n > 1){
		max_divisor = n;
	}

    return max_divisor;
}

int main(void){
	int a;
    char c;
	if (scanf("%d%c", &a, &c) != 2 && c != '\n') {
          printf("n/a\n");
          return 0;
	}

    int result = max_divisor_primo(a);
    if (result == -1){
      printf("n/a\n");
    } else {
      printf("%d\n", result);
    }

    return 0;
}