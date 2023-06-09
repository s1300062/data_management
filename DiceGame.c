#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num1, num2;
  char name[20];

  printf("What is your name? \n");
  printf(">");
  scanf("%s", name);
  printf("Hello,%s! \n", name);

  srand(time(NULL));

  num1 = rand()%6 + 1;
  num2 = rand()%6 + 1;

  printf("Rolling dice... \n");
  printf("Die 1: %d \n",num1);
  printf("Die 2: %d \n",num2);
  printf("Total value: %d \n",num1 + num2);

  if(num1 + num2 > 7)printf("You won! \n");
  else printf("You lost! \n");

  return 0;
}