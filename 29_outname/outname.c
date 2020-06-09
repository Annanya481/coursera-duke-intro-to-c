#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "outname.h"

char * computeOutputFileName(const char * inputName) {
  //WRITE ME
  int len = strlen(inputName);
  char * outNameptr = malloc((len+8) * sizeof(*outNameptr));
  char *ptr = outNameptr;

  while(*inputName != '\0'){
    *ptr = *inputName;
    ptr++;
    inputName++;
  }

  char *suffix = ".counts";
  while(*suffix != '\0'){
    *ptr = *suffix;
    ptr++;
    suffix++;
  }
  *ptr = '\0';

  return outNameptr;
}
