#include <stdio.h>
#include <stdlib.h>

unsigned long long factorialize(int number)
{
    if(number==0||number==1)
    {
        return  1;
    }
    else
    {
        unsigned long long longNum = (number*factorialize(number-1));
        return longNum;
    }
    return number;
}

int main(int argc, char *argv[]){

    argc++;
    int number = atoi(argv[1]);
    unsigned long long factorial= factorialize(number);
    printf("The factorial of %s is %lli \n", argv[1], factorial);
    return 0;
}

