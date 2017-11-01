#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int strContains(char * contains, char * contained) {


  if(strstr(contains, contained)!=NULL){
      printf("The string exists \n");
      return 1;
  }

  printf("The string doesn't exist \n");
  return 0;
}

int main(int argc, char *argv[]){

    argc++;
    char *string= argv[1];
    char *substring=argv[2];
    strContains(string, substring);
}

