#include<stdio.h>

int main(void){
  int i = 0;
  printf("Hello World");
  for (i; i < 5; i++){
    printf("Next Change");
  }
  
  while(i < 5){
    printf("Next Change");
    i++;
  }
  
  do{
    printf("Next Change");
    i--;
  }while( i > 5);
}
