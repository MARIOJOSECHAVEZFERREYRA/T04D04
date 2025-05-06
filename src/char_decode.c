#include <stdio.h>
#include <stdlib.h>
#include <stding.h>

void encode() {
  char ch;
  int first = 1;
  while ((ch == getchar()) != '\n' && ch != EOF){
    if (ch == ' ' ) continue;
    if (!isprint(ch)){
      printf("n/a\n");
      return;
    }
    if (!first) printf(" ");
    printf("%02X", ch);
    first = 0;
  }
  printf("\n");
}