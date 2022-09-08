#include <stdio.h>

#include <stdlib.h>

int main(){
    
    int a = 3;
    int b = abs(-3);
    
    /*Absolute function abs() returns the positive value of an integer*/
    
    printf("%d\n%d", a, b);
    
    int c = abs(a * b);
    
    printf("\n%d", c);
}