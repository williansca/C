#include<stdio.h>
#include<stdlib.h>

#include <time.h>

int main(){
    
    /*time(0) tem todos os segundos desde 1970*/
    int segundos = time(0);
    srand(segundos);
    
    int n1 = rand();
    int n2 = rand();
    
    printf("%d %d\n", n1, n2);
}