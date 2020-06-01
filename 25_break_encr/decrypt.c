#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void getFreqArray(int *freqArray, FILE *f){
  int c;
  while((c=fgetc(f)) != EOF){
    if(isalpha(c)){
      c = tolower(c);
      c -= 'a';
      freqArray[c] += 1;
    }
  }
}

int maxFreqId(int *freqArray){
  int maxNum = freqArray[0];
  int maxID = 0;
  for(int i=0; i<26; i++){
    if(freqArray[i] > maxNum){
      maxNum = freqArray[i];
      maxID = i;
    }
  }
  return maxID;
}

int main(int argc, char ** argv){
  if(argc!=2){
    fprintf(stderr, "Usage: Wrong amount of arguments!");
    return EXIT_FAILURE;
  }
  FILE *f = fopen(argv[1], "r");
  if(f == NULL){
    perror("Could not open file");
    return EXIT_FAILURE;
  }
  int freqArray[26] = {0};
  getFreqArray(freqArray, f);
  int maxIDx = maxFreqId(freqArray);
  int key = (maxIDx + 'a' - 'e' + 26)%26;
  printf("%d\n", key);
}
  
