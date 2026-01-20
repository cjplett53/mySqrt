#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x){
    if(x==0 || x==1) return x;
    int i = 1;
    int temp = 0;
    while(i*i<=x){
        temp = i++;
        if(i==46341) return temp;
    }
    return temp;
}

int main(int argc, char *argv[]){
    printf("Welcome to mySqrt()!");
    printf("The integer square root is: %d", s);
    return 0;
}
