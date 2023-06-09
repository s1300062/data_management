#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num1, num2;

  srand(time(NULL));

  num1 = rand()%6 + 1;
  num2 = rand()%6 + 1;

  printf("Rolling dice... \n");
  printf("Die 1: %d \n",num1);
  printf("Die 2: %d \n",num2);
  printf("Total value: %d \n",num1 + num2);

  return 0;
}