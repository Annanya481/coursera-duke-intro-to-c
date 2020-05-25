#include<stdio.h>
#include<stdlib.h>

unsigned power(unsigned x, unsigned y);

int main (){
  if(power(0, 0) != 1)
    return EXIT_FAILURE;
  if(power(0, 1) != 0)
    return EXIT_FAILURE;
  if(power(2, 0) != 1)
    return EXIT_FAILURE;
  if(power(-3, 1) != -3)
    return EXIT_FAILURE;
  if(power(-3, 2) != 9)
    return  EXIT_FAILURE;
  return EXIT_SUCCESS;
}
