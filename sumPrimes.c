#include <stdio.h>
#include <stdlib.h>


unsigned long long sumPrimes(num) {
  int currNum=2;
  int counter=0;
unsigned long long result=0;

  while(currNum<=num){
    for (int i=2; i<currNum; i++){
      if(currNum%i==0){
        counter++;
      }
    }
    if(counter==0){
      result+=currNum;
    }
    currNum++;
    counter=0;
  }
  return result;
}

int main(int argc, char *argv[]){

    argc++;
    int number = atoi(argv[1]);
    unsigned long long sum= sumPrimes(number);
    printf("The sum of prime numbers below %s is %lli \n", argv[1], sum);
    return 0;
}

