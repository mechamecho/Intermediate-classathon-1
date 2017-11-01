#include <stdio.h>
#include <stdlib.h>


unsigned long long sumFibs(int num) {
  int currNum=1;
  int preNum=0;
  unsigned long long result=0;
  while(currNum<=num){
    if(currNum%2!=0){
      result+=currNum;
    }
    currNum+=preNum;
    preNum=currNum-preNum;
  }
  return result;
}

int main(int argc, char *argv[]){

    argc++;
    int number = atoi(argv[1]);
    unsigned long long sum= sumFibs(number);
    printf("The sum of the odd fibonacci numbers below %s is %lli \n", argv[1], sum);
    return 0;
}

