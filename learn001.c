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
  if(1 == 1){
    printf("1");
  }
  do{
    printf("Next Change");
    i--;
  }while( i > 5);  
  
  
    for (int i = 0; i < 5; i++){
    printf("Next Change 2");
  }
 
  
  printf("SEcond Hello World");
}
