#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int *array, size_t n);

int main(){
  int array1[] = {1};
  int array2[] = {1, 2};
  int array3[] = {1, -2, 3, 6, -7};
  int array4[] = {-1, 4, 7, 9, 11, -8, -2, -1, 32, 33};
  int array5[] = {2, 2, 2, 4};
  //  int array6[] = {12, 10};

  if (maxSeq(NULL, 0)) {
    printf("Failed on NULL\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 0)) {
    printf("Failed on {1} for NULL\n");
    exit(EXIT_FAILURE);
  }
  if(maxSeq(array1, 1)!= 1){
    printf("Failed on {1}\n");
    exit(EXIT_FAILURE);
  }
  if(maxSeq(array2, 2)!= 2){
    printf("Failed on {1, 2}\n");
    exit(EXIT_FAILURE);
  }
  if(maxSeq(array3, 5)!= 3){
    printf("Failed on {1, -2, 3, 6, -7}\n");
    exit(EXIT_FAILURE);
  }
  if(maxSeq(array4, 10)!= 5){
    printf("Failed on {-1, 4, 7, 9, 11, -8, -2, -1, 32, 33}\n");
    exit(EXIT_FAILURE);
  }
  if(maxSeq(array5, 4)!= 2){
    printf("Failed on {2, 2, 2, 4}\n");
    exit(EXIT_FAILURE);
  }
  /* if(maxSeq(array6, 2)!= 0){
    printf("Failed on {12, 10}\n");
    exit(EXIT_FAILURE);
    }*/
  return EXIT_SUCCESS;
}
   
