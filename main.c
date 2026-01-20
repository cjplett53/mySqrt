#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
    
    printf("\nWelcome to mySqrt()!\n");
    int val;
    printf("Enter an integer value, enter a non-integer char to quit: ");
    while(scanf("%d", &val)==1){
        int ans = mySqrt(val);
        printf("\nThe integer square root is: %d\n", ans);
        printf("Enter another integer: ");
    }
    return 0;
}
